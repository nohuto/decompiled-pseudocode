/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800A4BF0
 * Callers:
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800A4224 (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A4684 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020A90 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180053768 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

void __fastcall CTouchDragVisual::Stop(CTouchDragVisual *this)
{
  __int64 v2; // r8
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CTouchVisual::UnRegisterGlobalTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( !*((_BYTE *)this + 441) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmTouchDragVisual_End,
        v2,
        1LL,
        (__int64)v3);
    *((_BYTE *)this + 441) = 1;
  }
}
