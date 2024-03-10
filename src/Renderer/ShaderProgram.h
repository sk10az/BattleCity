#pragma once

#include <glad/glad.h>
#include <string>

namespace Renderer
{
	class ShaderProgram
	{
	public:
		ShaderProgram(const std::string& vertexShader, const std::string& fragmentShader);
		~ShaderProgram();

		bool isCompiled() const { return m_isCompiled; }
		
		bool use() const;

	private:
		bool m_isCompiled = false;
		GLuint m_ID;
	};
}

