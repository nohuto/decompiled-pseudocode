/*
 * XREFs of ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x18009360C
 * Callers:
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x180093320 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180086EBC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x1800933A4 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_UpdateInstructions(CProjectionBorderVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  struct _D3DCOLORVALUE v8; // [rsp+30h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v9; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-28h] BYREF

  rc = *(struct tagRECT *)((char *)this + 280);
  v2 = CRenderDataVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_BYTE *)this + 296) )
    {
      v4 = 2;
      *(struct _D3DCOLORVALUE *)&v9.r = (struct _D3DCOLORVALUE)xmmword_1800D30C8;
      *(struct _D3DCOLORVALUE *)&v8.r = (struct _D3DCOLORVALUE)_xmm;
      if ( CDesktopManager::IsHighContrastMode() )
      {
        if ( !*((_DWORD *)this + 75) )
          v4 = 4;
        v8.a = FLOAT_1_0;
      }
      v5 = CProjectionBorderVisual::_AddBorderInstructions(this, &rc, v4, &v8);
      v3 = v5;
      if ( v5 >= 0 )
      {
        InflateRect(
          &rc,
          -(int)((double)v4 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60)),
          -(int)((double)v4 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60)));
        v6 = CProjectionBorderVisual::_AddBorderInstructions(this, &rc, 1, &v9);
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x81u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x7Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x6Au);
  }
  return v3;
}
