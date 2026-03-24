/*
 * XREFs of EtwTraceQueueInputMessage @ 0x1C0080448
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C0080360 (EtwTraceQueueMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1C0124F44 (McTemplateK0cppqp_EtwWriteTransfer.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1C0125070 (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceQueueInputMessage(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v3; // r10
  int v4; // r9d
  int v5; // r8d
  int v6; // ecx
  int v7; // r9d
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char v11; // r10
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_DWORD *)(a1 + 96) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        v11 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
      else
        v11 = -1;
      LOBYTE(v10) = v11;
      return (_UNKNOWN **)McTemplateK0cppqp_EtwWriteTransfer(
                            v8,
                            (unsigned int)&QueueEventMessage,
                            v9,
                            v10,
                            a1,
                            *(_QWORD *)(a1 + 104),
                            *(_DWORD *)(a1 + 96),
                            *(_QWORD *)(a1 + 16));
    }
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v3 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    else
      v3 = -1;
    v4 = *(_DWORD *)(a1 + 100);
    v5 = -__CFSHR__(v4, 8);
    v6 = -__CFSHR__(v4, 7);
    v7 = -__CFSHR__(v4, 6);
    LOBYTE(v7) = v3;
    return (_UNKNOWN **)McTemplateK0cpttttttpppqq_EtwWriteTransfer(v6, (unsigned int)&QueueInputMessage, v5, v7, a1);
  }
  return result;
}
