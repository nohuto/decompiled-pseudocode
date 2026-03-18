/*
 * XREFs of SshpAlpcMessageCallback @ 0x14081AE90
 * Callers:
 *     SshpAlpcInitialize @ 0x140B2984C (SshpAlpcInitialize.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     AlpcGetMessageAttribute @ 0x14036A1D0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14036A210 (AlpcInitializeMessageAttribute.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14081AFCC (SshpAlpcProcessAlpcMessage.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall SshpAlpcMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  _DWORD *Pool2; // rbx
  void *v4; // rdi
  char *MessageAttribute; // rax
  _QWORD v6[2]; // [rsp+48h] [rbp-10h] BYREF

  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 160LL, 1885893491LL);
  if ( Pool2 )
  {
    v4 = (void *)ExAllocatePool2(256LL, 64LL, 1885893491LL);
    if ( v4 )
    {
      memset(Pool2, 0, 0xA0uLL);
      memset(v4, 0, 0x40uLL);
      AlpcInitializeMessageAttribute(0x20000000LL, Pool2, 0xA0uLL, v6);
      while ( !(unsigned int)ZwAlpcSendWaitReceivePort(SshpAlpcContext, 0LL) )
      {
        MessageAttribute = AlpcGetMessageAttribute(Pool2, 0x20000000);
        SshpAlpcProcessAlpcMessage(v4, MessageAttribute);
        AlpcInitializeMessageAttribute(0x20000000LL, Pool2, 0xA0uLL, v6);
      }
      CmpFreeTransientPoolWithTag(v4, 0x70687373u);
    }
    CmpFreeTransientPoolWithTag(Pool2, 0x70687373u);
  }
}
