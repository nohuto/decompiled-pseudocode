/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x1409C63C0
 * Callers:
 *     IovpCompleteRequest2 @ 0x1409D0600 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1409D125C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D58B0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D5B34 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E093C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x1409C6394 (VfUtilAddressRangeRemove.c)
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  result = a2 + 208;
  if ( a2 + 208 != a1[1] )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
