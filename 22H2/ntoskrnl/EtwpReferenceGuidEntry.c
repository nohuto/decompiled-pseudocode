/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1406BF964
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x140368FC4 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetNextGuidEntry @ 0x1406BF130 (EtwpGetNextGuidEntry.c)
 *     EtwpInitializeRegEntry @ 0x1406BF610 (EtwpInitializeRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406BF870 (EtwpFindGuidEntryByGuid.c)
 *     EtwpCreateUmReplyObject @ 0x14077EFDC (EtwpCreateUmReplyObject.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140780D88 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140781D88 (EtwpAddGuidEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
