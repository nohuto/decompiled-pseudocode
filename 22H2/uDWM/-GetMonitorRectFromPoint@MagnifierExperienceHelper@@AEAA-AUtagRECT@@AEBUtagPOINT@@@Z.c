/*
 * XREFs of ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800BCDB8
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800BCB1C (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 *     ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800BCCAC (-GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEB.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall MagnifierExperienceHelper::GetMonitorRectFromPoint(
        MagnifierExperienceHelper *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagPOINT *a3)
{
  HMONITOR v4; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  *retstr = 0LL;
  v4 = MonitorFromPoint(*a3, 2u);
  if ( v4 )
  {
    mi.cbSize = 40;
    GetMonitorInfoW(v4, &mi);
    *retstr = mi.rcMonitor;
  }
  return retstr;
}
