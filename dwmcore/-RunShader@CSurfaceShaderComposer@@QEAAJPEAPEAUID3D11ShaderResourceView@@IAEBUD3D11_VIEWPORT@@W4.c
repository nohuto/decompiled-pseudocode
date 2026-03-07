__int64 __fastcall CSurfaceShaderComposer::RunShader(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = CSurfaceShaderComposer::RunShader(a1, (unsigned int)&unk_18033ADB0, a3, a2, a3, a4, a5, a6, a7, a8, a9, 0LL, 0);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\surfaceshadercomposer.cpp",
      (const char *)(unsigned int)v9);
  return v10;
}
