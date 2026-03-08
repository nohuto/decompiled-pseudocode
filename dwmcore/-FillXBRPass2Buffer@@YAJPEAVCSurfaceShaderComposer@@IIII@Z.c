/*
 * XREFs of ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801F26E8
 * Callers:
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801F2C94 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$?0E$0?0$0?0$0A@@?$span@$$CBE$0?0@gsl@@QEAA@AEBV?$span@E$0?0@1@@Z @ 0x1801CF5EC (--$-0E$0-0$0-0$0A@@-$span@$$CBE$0-0@gsl@@QEAA@AEBV-$span@E$0-0@1@@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180296ED0 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

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
