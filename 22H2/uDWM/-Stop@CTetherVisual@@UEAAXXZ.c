/*
 * XREFs of ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800A5480
 * Callers:
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800A4D1C (--1CTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800A52F0 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800A53D8 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800A58A0 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002496C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800A5550 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
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
