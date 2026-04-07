/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800484B0
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180048460 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A1564 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x1800A17E0 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this, __int64 a2, int a3)
{
  __int64 v3; // rax
  bool v5; // zf
  char v6; // al
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 47);
  if ( v3 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    {
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmDirectTouchDownAnimation_End,
        a3,
        1,
        (__int64)v7);
      v3 = *((_QWORD *)this + 47);
    }
    if ( v3 )
    {
      v5 = (*(_DWORD *)(v3 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v5 )
        v6 = 1;
      *((_QWORD *)this + 47) = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
}
