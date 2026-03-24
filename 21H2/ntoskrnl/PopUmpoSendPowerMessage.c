/*
 * XREFs of PopUmpoSendPowerMessage @ 0x140282A48
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140282D74 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D7BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x14067C368 (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopNotifySessionUserPowerRequestDeleted @ 0x14067CD68 (PopNotifySessionUserPowerRequestDeleted.c)
 *     PopEvaluateGlobalUserStatus @ 0x14067DA64 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendLegacyEvent @ 0x140774E88 (PopUmpoSendLegacyEvent.c)
 *     PopMonitorProcessLoop @ 0x1407D0674 (PopMonitorProcessLoop.c)
 *     PopUserPresencePredictionModeCallback @ 0x1407D2F50 (PopUserPresencePredictionModeCallback.c)
 *     PopNotifyUserPowerRequestAction @ 0x1408E1A68 (PopNotifyUserPowerRequestAction.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1408F2698 (PopUmpoSendPowerRequestCreate.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x140281330 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1403FB520 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopUmpoProcessMessage @ 0x14067A514 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x14067C3B0 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x14067C3D4 (PopAcquireUmpoPushLock.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
