/*
 * XREFs of RemoteDisableScreen @ 0x1C00F7460
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00F6E08 (xxxRemoteStopScreenUpdates.c)
 * Callees:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rsi
  unsigned int v7; // ebx
  char v8; // dl
  void *v9; // rdi
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int128 v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]

  v4 = gspdeskDisconnect;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v7 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      14,
      4,
      9,
      14,
      (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
  if ( v4 )
  {
    if ( a1 == v4 )
    {
      *a4 = 1;
    }
    else
    {
      v9 = (void *)v4[5];
      LockObjectAssignment(gspdeskShouldBeForeground, a1);
      *a4 = 1;
      PushW32ThreadLock((__int64)v9, &v13, UserDereferenceObject);
      if ( v9 )
        ObfReferenceObject(v9);
      PushW32ThreadLock((__int64)v4, &v11, UserDereferenceObject);
      ObfReferenceObject(v4);
      v7 = xxxSwitchDesktop((__int64)v9, (__int64)v4, 2, 0);
      PopAndFreeW32ThreadLock((__int64)&v11);
      PopAndFreeW32ThreadLock((__int64)&v13);
    }
  }
  return v7;
}
