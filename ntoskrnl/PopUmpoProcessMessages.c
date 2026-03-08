/*
 * XREFs of PopUmpoProcessMessages @ 0x14073B298
 * Callers:
 *     PopUmpoMessageCallback @ 0x1402BBFC0 (PopUmpoMessageCallback.c)
 *     PopUmpoInitializeChannel @ 0x140B6CC1C (PopUmpoInitializeChannel.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x1402BBFE0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1402BC020 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140413490 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopUmpoProcessMessage @ 0x14073B3C8 (PopUmpoProcessMessage.c)
 *     PopDiagTraceUmpoAlpcProcessingError @ 0x14098EFD8 (PopDiagTraceUmpoAlpcProcessingError.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PopUmpoProcessMessages()
{
  void *Pool2; // rdi
  int v1; // ebx
  char *MessageAttribute; // rax
  __int64 v3; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v4[40]; // [rsp+68h] [rbp-A0h] BYREF

  Pool2 = (void *)ExAllocatePool2(256LL, 4096LL, 1869638997LL);
  if ( !Pool2 )
  {
    v1 = -1073741670;
LABEL_7:
    PopDiagTraceUmpoAlpcProcessingError((unsigned int)v1);
    return;
  }
  memset(v4, 0, sizeof(v4));
  while ( 1 )
  {
    AlpcInitializeMessageAttribute(0x20000000LL, v4, 0xA0uLL, &v3);
    v1 = ZwAlpcSendWaitReceivePort(PopAlpcServerPort, 0LL);
    if ( v1 )
      break;
    MessageAttribute = AlpcGetMessageAttribute(v4, 0x20000000);
    PopUmpoProcessMessage(Pool2, MessageAttribute);
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( v1 < 0 )
    goto LABEL_7;
}
