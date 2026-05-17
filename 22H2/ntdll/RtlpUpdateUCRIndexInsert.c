/*
 * XREFs of RtlpUpdateUCRIndexInsert @ 0x18000EB34
 * Callers:
 *     RtlpInsertUCRBlock @ 0x18000EA8C (RtlpInsertUCRBlock.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x18001E1AC (RtlpHeapAddListEntry.c)
 */

void __fastcall RtlpUpdateUCRIndexInsert(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 *v6; // rax

  v3 = *(__int64 **)(a1 + 320);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 + 2);
    v5 = *(_QWORD *)(a2 + 40) >> 12;
    while ( v5 >= v4 )
    {
      v6 = (__int64 *)*v3;
      if ( !*v3 )
      {
        LODWORD(v5) = *((_DWORD *)v3 + 2) - 1;
        break;
      }
      v3 = (__int64 *)*v3;
      v4 = *((unsigned int *)v6 + 2);
    }
    RtlpHeapAddListEntry(a1, (_DWORD)v3, 0, a2, v5, *(_QWORD *)(a2 + 40));
  }
}
