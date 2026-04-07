/*
 * XREFs of ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800A56F0
 * Callers:
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800A4F8C (--1CTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800A5560 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800A5648 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800A5B10 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800A57C0 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTetherVisual::Stop(CTetherVisual *this)
{
  __int64 v2; // r8
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CRenderDataVisual::ClearInstructions(this);
  CTetherVisual::StopTimer(this);
  if ( *((_BYTE *)this + 416) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmTetherVisual_End,
      v2,
      1LL,
      (__int64)v3);
  *((_BYTE *)this + 416) = 0;
}
