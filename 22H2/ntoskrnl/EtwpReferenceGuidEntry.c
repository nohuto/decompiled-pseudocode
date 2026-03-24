/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1405EBAA4
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14039E928 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddUmRegEntry @ 0x1405EAD90 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405EB9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpCreateUmReplyObject @ 0x14068051C (EtwpCreateUmReplyObject.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BC360 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetNextGuidEntry @ 0x1407148AC (EtwpGetNextGuidEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1407167F8 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140717450 (EtwpAddGuidEntry.c)
 *     EtwpAddKmRegEntry @ 0x140762630 (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
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
