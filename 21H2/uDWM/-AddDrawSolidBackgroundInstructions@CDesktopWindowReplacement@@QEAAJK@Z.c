/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180037500
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180037434 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017754 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800376B4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180037700 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180037854 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007F7CC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z @ 0x180087A08 (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z.c)
 */

__int64 __fastcall CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
        CDesktopWindowReplacement *this,
        int a2)
{
  float SystemMetrics; // xmm6_4
  float v4; // xmm7_4
  int v5; // eax
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  unsigned int LastError; // edi
  struct CRectangleInstruction *v10; // rbx
  CRectangleInstruction *v11; // rcx
  unsigned int v12; // edx
  int v13; // r8d
  __int64 v15; // rdx
  __int64 v16; // rdx
  struct CRectangleInstruction *v17; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+28h] [rbp-48h]
  struct _D3DCOLORVALUE v19; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17 = 0LL;
  v19.a = FLOAT_1_0;
  v19.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a2] / 255.0;
  v19.g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a2 >> 8] / 255.0;
  v19.b = GammaLUT_sRGB_to_scRGB[BYTE2(a2)] / 255.0;
  SystemMetrics = (float)GetSystemMetrics(76);
  *(float *)&v18 = SystemMetrics;
  v4 = (float)GetSystemMetrics(77);
  *((float *)&v18 + 1) = v4;
  v5 = GetSystemMetrics(78);
  if ( !v5 )
  {
    v15 = 64LL;
LABEL_12:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v15,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                  v6);
    goto LABEL_9;
  }
  *((float *)&v18 + 2) = (float)v5 + SystemMetrics;
  v7 = GetSystemMetrics(79);
  if ( !v7 )
  {
    v15 = 67LL;
    goto LABEL_12;
  }
  *((float *)&v18 + 3) = (float)v7 + v4;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
  v8 = CRectangleInstruction::Create(&v17);
  LastError = v8;
  if ( v8 < 0 )
  {
    v16 = 70LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_9;
  }
  v10 = v17;
  v11 = v17;
  *((_OWORD *)v17 + 2) = v18;
  v8 = CRectangleInstruction::SetSolidFill(v11, &v19, 1.0);
  LastError = v8;
  if ( v8 < 0 )
  {
    v16 = 73LL;
    goto LABEL_16;
  }
  v8 = CRenderDataVisual::AddInstruction(this, v10);
  LastError = v8;
  if ( v8 < 0 )
  {
    v16 = 75LL;
    goto LABEL_16;
  }
  if ( IsPPIEdition() )
    CDesktopWindowReplacement::_AddPPIRectangleInstruction(this, v12, v13);
  LastError = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
  return LastError;
}
