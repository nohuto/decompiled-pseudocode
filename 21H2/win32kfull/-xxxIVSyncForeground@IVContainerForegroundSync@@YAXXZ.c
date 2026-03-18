/*
 * XREFs of ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01CE9BC
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

void __fastcall IVContainerForegroundSync::xxxIVSyncForeground(
        IVContainerForegroundSync *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  char v4; // bl
  bool v5; // dl
  char v6; // si
  _QWORD *v7; // rdi
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h]

  v4 = 1;
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      a4,
      4,
      2,
      85,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
  v6 = (char)IVContainerForegroundSync::windowToForeground;
  if ( IVContainerForegroundSync::windowToForeground )
  {
    v7 = (_QWORD *)ValidateHwnd(IVContainerForegroundSync::windowToForeground);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = v4;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        87,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        v6,
        v7);
    }
  }
  else
  {
    v7 = *(_QWORD **)(grpdeskRitInput + 288LL);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        a4,
        4,
        2,
        86,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        *(_QWORD *)(grpdeskRitInput + 288LL));
  }
  if ( v7 )
  {
    v13 = 0LL;
    v14 = 0LL;
    ThreadLock((__int64)v7, (__int64 *)&v13);
    xxxSetForegroundWindowWithOptions(v7, 31LL, 128LL, 0);
    ThreadUnlock1(v11, v10, v12);
  }
}
