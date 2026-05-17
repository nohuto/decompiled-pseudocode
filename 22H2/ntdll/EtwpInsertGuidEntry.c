/*
 * XREFs of EtwpInsertGuidEntry @ 0x180048114
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x1800480A4 (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpGuidEntryCompare @ 0x180082E38 (EtwpGuidEntryCompare.c)
 */

signed __int64 __fastcall EtwpInsertGuidEntry(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rdi
  bool v6; // bl
  int v7; // esi
  __int64 v8; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v5 = EtwpGuidEntryTable;
  v6 = 0;
  if ( (qword_18016D5F0 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable )
      v5 = (unsigned __int64)&EtwpGuidEntryTable ^ EtwpGuidEntryTable;
    else
      v5 = 0LL;
  }
  v7 = qword_18016D5F0 & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)EtwpGuidEntryCompare(a1 + 24, v5) < 0 )
      {
        v8 = *(_QWORD *)v5;
        if ( v7 )
        {
          if ( !v8 )
            break;
          v8 ^= v5;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 8);
        if ( v7 )
        {
          if ( !v8 )
            goto LABEL_17;
          v8 ^= v5;
        }
        if ( !v8 )
        {
LABEL_17:
          v6 = 1;
          break;
        }
      }
      v5 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&EtwpGuidEntryTable, v5, v6, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
