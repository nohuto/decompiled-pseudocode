/*
 * XREFs of ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x1800A2A20
 * Callers:
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x1800A2508 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x1800A2884 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTextTetherVisual@@QEAAJXZ @ 0x1800A2974 (-Start@CTextTetherVisual@@QEAAJXZ.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x1800A2B50 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020A90 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x1800A2AB0 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTextTetherVisual::Stop(CTextTetherVisual *this)
{
  __int64 v2; // r8
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CRenderDataVisual::ClearInstructions(this);
  CTextTetherVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( *((_BYTE *)this + 424) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmTextTetherVisual_End,
      v2,
      1LL,
      (__int64)v3);
  *((_BYTE *)this + 424) = 0;
}
