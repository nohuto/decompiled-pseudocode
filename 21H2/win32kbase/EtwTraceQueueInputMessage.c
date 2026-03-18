/*
 * XREFs of EtwTraceQueueInputMessage @ 0x1C008DE94
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C008DDB0 (EtwTraceQueueMessage.c)
 * Callees:
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1C00E578C (McTemplateK0cppqp_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1C014C390 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1C014F6F8 (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceQueueInputMessage(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v2; // ebp
  char v3; // si
  int v4; // edi
  int v5; // r9d
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // r9d
  int v9; // ecx
  int v10; // r8d
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 96);
  v3 = a1;
  if ( v2 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_QWORD *)(a1 + 104);
      LOBYTE(v8) = GetCallbackCount();
      return (_UNKNOWN **)McTemplateK0cppqp_EtwWriteTransfer(
                            v9,
                            (unsigned int)&QueueEventMessage,
                            v10,
                            v8,
                            v3,
                            v7,
                            v2,
                            v6);
    }
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 100);
    LOBYTE(v5) = GetCallbackCount();
    return (_UNKNOWN **)McTemplateK0cpttttttpppqq_EtwWriteTransfer(
                          -__CFSHR__(v4, 7),
                          (unsigned int)&QueueInputMessage,
                          -__CFSHR__(v4, 8),
                          v5,
                          v3);
  }
  return result;
}
