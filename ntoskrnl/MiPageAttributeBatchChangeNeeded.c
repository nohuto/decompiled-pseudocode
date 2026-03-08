/*
 * XREFs of MiPageAttributeBatchChangeNeeded @ 0x1402B49B4
 * Callers:
 *     MiUpdateCacheAttributeListsForPage @ 0x1402B4948 (MiUpdateCacheAttributeListsForPage.c)
 *     MiConvertContiguousPages @ 0x1403B7B48 (MiConvertContiguousPages.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 * Callees:
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14029A144 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiPageAttributeBatchChangeNeeded(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned int v5; // r10d
  __int64 v6; // r8
  __int64 v7; // rax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v3 = a1;
  if ( v2 != (_DWORD)a2 )
  {
    if ( v2 == 1 )
      return 1LL;
    if ( v2 == 3 )
    {
      v6 = 0LL;
    }
    else
    {
      v7 = (*(_QWORD *)(a1 + 24) >> 59) & 7LL;
      if ( ((*(_QWORD *)(a1 + 24) >> 59) & 7) == 0 )
        return 1LL;
      _InterlockedOr(v8, 0);
      if ( MiTbFlushTimeStampMayNeedFlush(v7, KiTbFlushTimeStamp, 7) )
        return 1LL;
      v6 = 4LL;
      a2 = v5;
      a1 = v3;
    }
    MiChangePageAttribute(a1, a2, v6, v3);
  }
  return 0LL;
}
