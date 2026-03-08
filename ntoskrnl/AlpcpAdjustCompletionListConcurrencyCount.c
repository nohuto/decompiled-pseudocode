/*
 * XREFs of AlpcpAdjustCompletionListConcurrencyCount @ 0x1409765B4
 * Callers:
 *     NtAlpcSetInformation @ 0x140689DC0 (NtAlpcSetInformation.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x1402925F4 (AlpcpQueueIoCompletionPort.c)
 */

int __fastcall AlpcpAdjustCompletionListConcurrencyCount(_QWORD *a1, unsigned __int32 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rsi
  signed __int32 v6; // edi
  unsigned __int32 v7; // ecx
  __int64 v8; // r14
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = a1[45];
  _m_prefetchw((const void *)(v3 + 144));
  v6 = *(_DWORD *)(v3 + 144);
  while ( v6 != a2 )
  {
    while ( 1 )
    {
      v7 = v6;
      LODWORD(v2) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 144), a2, v6);
      v6 = (int)v2;
      if ( (_DWORD)v2 == v7 )
        break;
      if ( (unsigned int)v2 >= a2 )
        return (int)v2;
    }
    if ( !a1[4] )
      break;
    if ( v7 < a2 )
    {
      v8 = a2 - v7;
      do
      {
        LODWORD(v2) = AlpcpQueueIoCompletionPort(a1, 1, 0, 0, 0);
        --v8;
      }
      while ( v8 );
    }
  }
  return (int)v2;
}
