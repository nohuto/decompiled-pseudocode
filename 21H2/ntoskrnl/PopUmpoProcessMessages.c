/*
 * XREFs of PopUmpoProcessMessages @ 0x14066DB24
 * Callers:
 *     PopUmpoMessageCallback @ 0x14026F550 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140A70E7C (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14026F570 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14026F5B0 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1403FB700 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopUmpoProcessMessage @ 0x14066DC54 (PopUmpoProcessMessage.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x1408EBDA4 (PopDiagTraceUmpoAlpcProcessingError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void PopUmpoProcessMessages()
{
  _PORT_MESSAGE *ReceiveMessage; // rdi
  NTSTATUS v1; // ebx
  _ALPC_CONTEXT_ATTR *MessageAttribute; // rax
  ULONG_PTR BufferLength; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR RequiredBufferSize[2]; // [rsp+58h] [rbp-B0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+68h] [rbp-A0h] BYREF

  BufferLength = 0LL;
  Timeout.QuadPart = 0LL;
  ReceiveMessage = (_PORT_MESSAGE *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F706D55u);
  if ( !ReceiveMessage )
  {
    v1 = -1073741670;
LABEL_7:
    PopDiagTraceUmpoAlpcProcessingError((unsigned int)v1);
    return;
  }
  memset(Buffer, 0, sizeof(Buffer));
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000u, Buffer, 0xA0uLL, RequiredBufferSize);
    BufferLength = 4096LL;
    v1 = ZwAlpcSendWaitReceivePort(PopAlpcServerPort, 0, 0LL, 0LL, ReceiveMessage, &BufferLength, Buffer, &Timeout);
    if ( v1 )
      break;
    MessageAttribute = (_ALPC_CONTEXT_ATTR *)AlpcGetMessageAttribute(Buffer, 0x20000000u);
    PopUmpoProcessMessage(ReceiveMessage, MessageAttribute);
  }
  ExFreePoolWithTag(ReceiveMessage, 0);
  if ( v1 < 0 )
    goto LABEL_7;
}
