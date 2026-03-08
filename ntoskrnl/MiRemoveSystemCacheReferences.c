/*
 * XREFs of MiRemoveSystemCacheReferences @ 0x14062CB5C
 * Callers:
 *     MmMapViewInSystemCache @ 0x140334FD0 (MmMapViewInSystemCache.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveViewsFromSection @ 0x140334A28 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveSystemCacheReferences(__int64 *BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r14
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax

  v2 = *BugCheckParameter2;
  v5 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*BugCheckParameter2 + 60) & 0x3FF));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v7 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2, a2, 4);
  --*(_QWORD *)(v2 + 40);
  --*(_DWORD *)(v2 + 88);
  v8 = v7;
  result = MiCheckControlArea(v2, v6);
  if ( v8 )
    return MiReturnCrossPartitionSectionCharges(v5, 1LL, v8);
  return result;
}
