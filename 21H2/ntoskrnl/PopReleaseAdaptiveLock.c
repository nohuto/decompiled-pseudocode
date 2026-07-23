/*
 * XREFs of PopReleaseAdaptiveLock @ 0x140671D94
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140671C64 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x14077AA3C (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14078DAEC (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140792510 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408F5090 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F52EC (PopIsLockConsoleTimeoutActive.c)
 *     PopUserPresentOverride @ 0x1408F54E0 (PopUserPresentOverride.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x140672878 (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x1407732C0 (PopNotifyConsoleUserPresent.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F5404 (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x1408F5468 (PopSetWin32kInputTimeout.c)
 */

_QWORD *PopReleaseAdaptiveLock()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int128 v5; // xmm0
  unsigned int v6; // edi
  int v7; // ebx
  __int128 v8; // [rsp+20h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+38h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  PopAdpmLockThread = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( (_BYTE)PopLazyContext )
  {
    v5 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    v8 = v5;
    v9 = qword_140C20570;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1, v2);
  if ( (_BYTE)v8 )
  {
    if ( BYTE2(v9) )
    {
      PopNotifyConsoleUserPresent(0LL, v4, HIDWORD(v9));
      v7 = DWORD1(v8);
      PopSetWin32kDisplayTimeout(DWORD1(v8), HIDWORD(v8));
      v6 = DWORD2(v8);
      PopSetWin32kInputTimeout(DWORD1(v8), DWORD2(v8));
    }
    else
    {
      v6 = DWORD2(v8);
      v7 = DWORD1(v8);
      if ( (_BYTE)v9 )
        PopSetWin32kInputTimeout(DWORD1(v8), DWORD2(v8));
      if ( BYTE1(v9) )
        PopSetWin32kDisplayTimeout(DWORD1(v8), HIDWORD(v8));
    }
    v10 = v7;
    LODWORD(v12) = 7;
    result = (_QWORD *)PopDispatchStateCallout(&v11, &v10);
    if ( BYTE3(v9) )
      return (_QWORD *)PopSetWin32kInputTimeout(0xFFFFFFFFLL, v6);
  }
  return result;
}
