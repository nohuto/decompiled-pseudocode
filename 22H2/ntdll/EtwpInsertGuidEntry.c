/*
 * XREFs of EtwpInsertGuidEntry @ 0x180048114
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x1800480A4 (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpGuidEntryCompare @ 0x180082E38 (EtwpGuidEntryCompare.c)
 */

void __fastcall EtwpInsertGuidEntry(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 Root; // rdi
  BOOLEAN v3; // bl
  int v4; // esi
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  v3 = 0;
  if ( (*(_BYTE *)&EtwpGuidEntryTable.0 & 1) != 0 )
  {
    if ( EtwpGuidEntryTable.Root )
      Root = (unsigned __int64)&EtwpGuidEntryTable ^ (unsigned __int64)EtwpGuidEntryTable.Root;
    else
      Root = 0LL;
  }
  v4 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)EtwpGuidEntryCompare(&Node[1], Root) < 0 )
      {
        v5 = *(_QWORD *)Root;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= Root;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(Root + 8);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_17;
          v5 ^= Root;
        }
        if ( !v5 )
        {
LABEL_17:
          v3 = 1;
          break;
        }
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)Root, v3, Node);
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
