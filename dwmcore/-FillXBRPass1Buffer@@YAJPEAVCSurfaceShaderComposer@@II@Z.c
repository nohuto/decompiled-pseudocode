__int64 __fastcall FillXBRPass1Buffer(struct CSurfaceShaderComposer *a1, int a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6[4]; // [rsp+20h] [rbp-38h] BYREF
  float v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0LL;
  *(_QWORD *)v6 = 16LL;
  *(_QWORD *)&v6[2] = v7;
  v7[0] = (float)a2;
  v7[1] = (float)a3;
  v3 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, v6, 0LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
