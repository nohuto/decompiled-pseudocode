void __fastcall CSurfaceShaderComposer::SurfaceShader::~SurfaceShader(CSurfaceShaderComposer::SurfaceShader *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
