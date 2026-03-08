/*
 * XREFs of TR_ReleaseSegments @ 0x1C001187C
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_MapStage @ 0x1C0004810 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0004AD0 (Isoch_PrepareStage.c)
 *     Bulk_CompleteTransfers @ 0x1C000E608 (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_MapStage @ 0x1C00122C0 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C001239C (Bulk_PrepareStage.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0043B94 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0043E28 (Isoch_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0046FFC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     memset @ 0x1C0020700 (memset.c)
 */

const signed __int64 *__fastcall TR_ReleaseSegments(__int64 a1, const signed __int64 **a2, char a3)
{
  const signed __int64 *v3; // rdi
  const signed __int64 *result; // rax
  const signed __int64 *v8; // rcx
  signed __int64 v9; // rdx

  v3 = *a2;
  if ( *a2 != (const signed __int64 *)a2 )
  {
    result = *(const signed __int64 **)(a1 + 40);
    if ( _bittest64(result + 42, 0x32u) )
    {
      do
      {
        result = (const signed __int64 *)memset(*((void **)v3 + 2), 0, *((unsigned int *)v3 + 11));
        v3 = (const signed __int64 *)*v3;
      }
      while ( a2 != (const signed __int64 **)v3 );
    }
    v8 = *a2;
    v9 = a1 + 208;
    if ( a3 )
    {
      if ( v8 == (const signed __int64 *)a2 )
        return result;
      *a2[1] = *(_QWORD *)v9;
      *(_QWORD *)(*(_QWORD *)v9 + 8LL) = a2[1];
      *(_QWORD *)v9 = *a2;
      result = *a2;
      *((_QWORD *)*a2 + 1) = v9;
    }
    else
    {
      if ( v8 == (const signed __int64 *)a2 )
        return result;
      **(_QWORD **)(a1 + 216) = v8;
      *((_QWORD *)*a2 + 1) = *(_QWORD *)(a1 + 216);
      *a2[1] = v9;
      result = a2[1];
      *(_QWORD *)(a1 + 216) = result;
    }
    *a2 = (const signed __int64 *)a2;
    a2[1] = (const signed __int64 *)a2;
  }
  return result;
}
