__int64 __fastcall FillXBRPass2Buffer(struct CSurfaceShaderComposer *a1, int a2, int a3, int a4, signed int a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  float v11[8]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *(_QWORD *)&v9 = 32LL;
  *((_QWORD *)&v9 + 1) = v11;
  v11[0] = (float)a2;
  v11[1] = (float)a3;
  v11[5] = (float)a5;
  v11[2] = (float)a2;
  v11[3] = (float)a3;
  v11[4] = (float)a4;
  v11[6] = (float)a2;
  v11[7] = (float)a3;
  v9 = *(_OWORD *)gsl::span<unsigned char const,-1>::span<unsigned char const,-1>(&v10, (__int64 *)&v9);
  v6 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, &v9, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
