/*
 * XREFs of PopReleaseAdaptiveLock @ 0x14067DFA4
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x14067DE74 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x14077A87C (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14078D92C (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140790F60 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408F4F30 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F518C (PopIsLockConsoleTimeoutActive.c)
 *     PopUserPresentOverride @ 0x1408F5380 (PopUserPresentOverride.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x14067E9C8 (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x140773100 (PopNotifyConsoleUserPresent.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F52A4 (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x1408F5308 (PopSetWin32kInputTimeout.c)
 */

_QWORD *PopReleaseAdaptiveLock()
{
  _QWORD *result; // rax
  __int64 v1; // rdx
  __int128 v2; // xmm0
  unsigned int v3; // edi
  int v4; // ebx
  __int128 v5; // [rsp+20h] [rbp-40h]
  __int64 v6; // [rsp+30h] [rbp-30h]
  int v7; // [rsp+38h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]

  PopAdpmLockThread = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (_BYTE)PopLazyContext )
  {
    v2 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    v5 = v2;
    v6 = qword_140C205D0;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (_BYTE)v5 )
  {
    if ( BYTE2(v6) )
    {
      PopNotifyConsoleUserPresent(0LL, v1, HIDWORD(v6));
      v4 = DWORD1(v5);
      PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
      v3 = DWORD2(v5);
      PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
    }
    else
    {
      v3 = DWORD2(v5);
      v4 = DWORD1(v5);
      if ( (_BYTE)v6 )
        PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
      if ( BYTE1(v6) )
        PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
    }
    v7 = v4;
    LODWORD(v9) = 7;
    result = (_QWORD *)PopDispatchStateCallout(&v8, &v7);
    if ( BYTE3(v6) )
      return (_QWORD *)PopSetWin32kInputTimeout(0xFFFFFFFFLL, v3);
  }
  return result;
}
