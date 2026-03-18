/*
 * XREFs of CmpRemoveKeyHashFromTableEntry @ 0x1406D93A8
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1406D85C0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpRemoveKeyHash @ 0x14076B1C0 (CmpRemoveKeyHash.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x14076B47C (CmpRemoveKeyHashFromDeletedKcbTable.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRemoveKeyHashFromTableEntry(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rax

  v2 = (__int64 *)(a2 + 16);
  if ( v2 )
  {
    do
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      if ( v3 == a1 )
      {
        *v2 = *(_QWORD *)(v3 + 8);
        return;
      }
      v2 = (__int64 *)(v3 + 8);
    }
    while ( v3 != -8 );
  }
}
