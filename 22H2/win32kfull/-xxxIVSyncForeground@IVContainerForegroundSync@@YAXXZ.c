/*
 * XREFs of ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01AE180
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall IVContainerForegroundSync::xxxIVSyncForeground(
        IVContainerForegroundSync *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  bool v5; // dl
  HWND v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

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
      106,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  v6 = IVContainerForegroundSync::windowToForeground;
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
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v8,
        4u,
        2u,
        0x6Cu,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        v6);
  }
  else
  {
    v7 = *(_QWORD **)(grpdeskRitInput + 296LL);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        a4,
        4u,
        2u,
        0x6Bu,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        *v7);
  }
  if ( v7 )
  {
    v12 = 0LL;
    v13 = 0LL;
    ThreadLock(v7, &v12);
    xxxSetForegroundWindowWithOptions((__int64)v7, 0x1Fu, 128, 0);
    ThreadUnlock1(v10, v9, v11);
  }
}
