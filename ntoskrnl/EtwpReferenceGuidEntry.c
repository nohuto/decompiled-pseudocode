/*
 * XREFs of EtwpReferenceGuidEntry @ 0x140695054
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1402FDB04 (EtwGetProviderIdFromHandle.c)
 *     EtwpUpdateGuidEnableInfo @ 0x14068FA30 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140690A30 (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetNextGuidEntry @ 0x140693F10 (EtwpGetNextGuidEntry.c)
 *     EtwpInitializeRegEntry @ 0x140694D00 (EtwpInitializeRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140694F60 (EtwpFindGuidEntryByGuid.c)
 *     EtwpCreateUmReplyObject @ 0x14078BE14 (EtwpCreateUmReplyObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall EtwpReferenceGuidEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v1 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 32), v1 + 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
    if ( !v2 )
      return 0;
  }
  if ( v1 < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
