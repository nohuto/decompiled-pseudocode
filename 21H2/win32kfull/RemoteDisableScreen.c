/*
 * XREFs of RemoteDisableScreen @ 0x1C0128A20
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D8838 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0128830 (xxxRemoteStopScreenUpdates.c)
 * Callees:
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  unsigned int v7; // esi
  void *v8; // rdi
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]

  v4 = gspdeskDisconnect;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)a1, 4, 9, 20, (__int64)&WPP_edddbb69987e325f9f0b7090eb098db8_Traceguids);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    if ( a1 == v4 )
    {
      *a4 = 1;
    }
    else
    {
      v8 = (void *)v4[5];
      LockObjectAssignment(gspdeskShouldBeForeground, a1);
      *a4 = 1;
      PushW32ThreadLock((__int64)v8, &v12, UserDereferenceObject);
      if ( v8 )
        ObfReferenceObject(v8);
      PushW32ThreadLock((__int64)v4, &v10, UserDereferenceObject);
      ObfReferenceObject(v4);
      v7 = xxxSwitchDesktop((__int64)v8, (__int64)v4, 2);
      PopAndFreeW32ThreadLock((__int64)&v10);
      PopAndFreeW32ThreadLock((__int64)&v12);
    }
  }
  return v7;
}
