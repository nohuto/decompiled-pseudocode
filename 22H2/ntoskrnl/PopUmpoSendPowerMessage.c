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
  _PORT_MESSAGE *ReceiveMessage; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength[2]; // [rsp+40h] [rbp-D8h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+50h] [rbp-C8h] BYREF

  BufferLength[0] = 0LL;
  ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F706D55u);
  if ( !ReceiveMessage )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v8 = -2147483643;
      goto LABEL_7;
    }
    memset(&ReceiveMessage->u2, 0, 0xFFCuLL);
    ReceiveMessage->u1.s1.DataLength = Size;
    ReceiveMessage->u1.s1.TotalLength = Size + 40;
    memmove(&ReceiveMessage[1], Src, Size);
    if ( a3 )
    {
      memset(Buffer, 0, sizeof(Buffer));
      BufferLength[0] = 4096LL;
      v8 = ZwAlpcSendWaitReceivePort(
             PopAlpcClientPort,
             0x20000u,
             ReceiveMessage,
             0LL,
             ReceiveMessage,
             BufferLength,
             Buffer,
             0LL);
      if ( v8 < 0 )
        goto LABEL_7;
      MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
      v7 = PopUmpoProcessMessage(ReceiveMessage, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000u, ReceiveMessage, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    v8 = v7;
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(ReceiveMessage, 0);
  return (unsigned int)v8;
}
