/*
 * XREFs of AlpcpAllocateCompletionPacketLookaside @ 0x14068A4D8
 * Callers:
 *     AlpcpAssociateIoCompletionPort @ 0x140689FD8 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x14097672C (AlpcpInitializeCompletionList.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068A5B0 (IoAllocateMiniCompletionPacket.c)
 *     IopFreeMiniCompletionPacket @ 0x1407C40A0 (IopFreeMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char *__fastcall AlpcpAllocateCompletionPacketLookaside(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  char *Pool2; // rax
  char *v7; // rbx
  __int64 v8; // rdi
  _QWORD *i; // rsi
  __int64 MiniCompletionPacket; // rax
  ULONG_PTR *v12; // rsi
  ULONG_PTR v13; // rcx

  v3 = a1;
  Pool2 = (char *)ExAllocatePool2(64LL, 24LL * a1 + 56, 1850305601LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 24 * v3 + 56);
    *(_QWORD *)v7 = 0LL;
    v8 = 0LL;
    *((_DWORD *)v7 + 2) = v3;
    *((_QWORD *)v7 + 5) = a2;
    *((_QWORD *)v7 + 6) = a3;
    if ( !(_DWORD)v3 )
      return v7;
    for ( i = v7 + 56; ; i += 3 )
    {
      i[2] = v7;
      MiniCompletionPacket = IoAllocateMiniCompletionPacket(AlpcpLookasidePacketCallbackRoutine, i);
      i[1] = MiniCompletionPacket;
      if ( !MiniCompletionPacket )
        break;
      v8 = (unsigned int)(v8 + 1);
      *i = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 4) = i;
      if ( (unsigned int)v8 >= (unsigned int)v3 )
        return v7;
    }
    if ( (_DWORD)v8 )
    {
      v12 = (ULONG_PTR *)&v7[16 * v8 + 64 + 8 * v8];
      do
      {
        v12 -= 3;
        v13 = *v12;
        *(_QWORD *)(v13 + 56) = 0LL;
        IopFreeMiniCompletionPacket(v13);
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
