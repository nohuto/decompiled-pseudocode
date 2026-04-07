/*
 * XREFs of ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800A73F0
 * Callers:
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800A7040 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800A74B0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020A90 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800A7460 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

void __fastcall CPressTapVisual::Stop(CPressTapVisual *this)
{
  __int64 v2; // r8
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CPressTapVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmPressTapVisual_End,
      v2,
      1LL,
      (__int64)v3);
}
