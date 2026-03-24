/*
 * XREFs of PopUmpoSendPowerMessage @ 0x14034BAC4
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14034BDF0 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D0BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x1406F555C (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopNotifySessionUserPowerRequestDeleted @ 0x1406F6064 (PopNotifySessionUserPowerRequestDeleted.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407256C8 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x1407758E8 (PopUmpoSendLegacyEvent.c)
 *     PopMonitorProcessLoop @ 0x1407D0594 (PopMonitorProcessLoop.c)
 *     PopUserPresencePredictionModeCallback @ 0x1407D2E70 (PopUserPresencePredictionModeCallback.c)
 *     PopNotifyUserPowerRequestAction @ 0x1408E1AB8 (PopNotifyUserPowerRequestAction.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1408F26E8 (PopUmpoSendPowerRequestCreate.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14034A340 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1403FABA0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopUmpoProcessMessage @ 0x1406F3304 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x1406F55A4 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1406F55C8 (PopAcquireUmpoPushLock.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size, char a3)
{
  _WORD *PoolWithTag; // rdi
  int v7; // eax
  int v8; // ebx
  char *MessageAttribute; // rax
  __int64 v11; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD v12[40]; // [rsp+50h] [rbp-C8h] BYREF

  v11 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F706D55u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v8 = -2147483643;
      goto LABEL_7;
    }
    memset(PoolWithTag + 2, 0, 0xFFCuLL);
    *PoolWithTag = Size;
    PoolWithTag[1] = Size + 40;
    memmove(PoolWithTag + 20, Src, Size);
    if ( a3 )
    {
      memset(v12, 0, sizeof(v12));
      v11 = 4096LL;
      v8 = ((__int64 (__fastcall *)(HANDLE, __int64, _WORD *, _QWORD, _WORD *, __int64 *, _DWORD *, _QWORD))ZwAlpcSendWaitReceivePort)(
             PopAlpcClientPort,
             0x20000LL,
             PoolWithTag,
             0LL,
             PoolWithTag,
             &v11,
             v12,
             0LL);
      if ( v8 < 0 )
        goto LABEL_7;
      MessageAttribute = AlpcGetMessageAttribute(v12, 0x20000000);
      v7 = PopUmpoProcessMessage(PoolWithTag, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000LL, PoolWithTag, 0LL, 0LL, 0LL, 0LL, 0LL, v11);
    }
    v8 = v7;
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v8;
}
