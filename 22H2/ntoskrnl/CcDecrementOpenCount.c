/*
 * XREFs of CcDecrementOpenCount @ 0x14029CA00
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x140298124 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindPreProcess @ 0x14029B740 (CcWriteBehindPreProcess.c)
 *     CcFlushCachePostProcess @ 0x14029DC1C (CcFlushCachePostProcess.c)
 *     CcCompleteAsyncRead @ 0x1402C1400 (CcCompleteAsyncRead.c)
 *     CcPurgeCacheSection @ 0x1402F07D0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1402F0A50 (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x1402F0FA0 (CcSetFileSizesEx.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402F4158 (CcNotifyOfMappedWriteComplete.c)
 *     CcPerformReadAhead @ 0x14030E840 (CcPerformReadAhead.c)
 *     CcMdlWriteComplete2 @ 0x14036B23C (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538490 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x140538AA0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140299784 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1402998D8 (CcScheduleLazyWriteScan.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1)
{
  char v1; // dl
  __int64 *v2; // rax
  __int64 v3; // r8
  _BYTE *v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // r11
  char v8; // r9

  v1 = CcEnablePerVolumeLazyWriter;
  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 544);
  v2 = (__int64 *)(a1 + 600);
  v3 = *(unsigned int *)(a1 + 4);
  v4 = *(_BYTE **)(a1 + 536);
  if ( v1 )
    v5 = *v2;
  else
    v5 = 0LL;
  if ( !(_DWORD)v3 )
  {
    if ( v1 )
      v2 = (__int64 *)(*v2 + 986);
    else
      v2 = (__int64 *)(v4 + 1050);
    *(_BYTE *)v2 = 1;
    v6 = *(_DWORD *)(a1 + 152);
    LODWORD(v2) = *(_DWORD *)(a1 + 112);
    if ( (v6 & 0x10000) != 0 )
    {
      if ( !(_DWORD)v2 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v8 = 1;
      LOBYTE(v3) = 1;
    }
    else
    {
      if ( (_DWORD)v2 || (v6 & 0x20) != 0 )
        return (char)v2;
      CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(v3) = v7 != 0;
      v8 = 0;
    }
    LOBYTE(v2) = CcScheduleLazyWriteScan(v4, v5, v3, v8);
  }
  return (char)v2;
}
