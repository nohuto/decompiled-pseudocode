/*
 * XREFs of CcDecrementOpenCount @ 0x14021B85C
 * Callers:
 *     CcCompleteAsyncRead @ 0x14020A77C (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14020B9E0 (CcPerformReadAhead.c)
 *     CcNotifyOfMappedWrite @ 0x140215670 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindPreProcess @ 0x140219A70 (CcWriteBehindPreProcess.c)
 *     CcFlushCachePostProcess @ 0x14021AF2C (CcFlushCachePostProcess.c)
 *     CcSetFileSizesEx @ 0x14029F9B0 (CcSetFileSizesEx.c)
 *     CcPurgeCacheSection @ 0x1402A0EA0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1402A1120 (CcGetFlushedValidData.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402A42CC (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x1403002DC (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1405365D0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140242BEC (CcInsertIntoDirtySharedCacheMapList.c)
 */

__int64 __fastcall CcDecrementOpenCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // dl
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rbx
  _BYTE *v9; // rax
  int v10; // edx
  __int64 v11; // r11

  v4 = CcEnablePerVolumeLazyWriter;
  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 544);
  result = a1 + 600;
  v6 = *(unsigned int *)(a1 + 4);
  v7 = *(_QWORD *)(a1 + 536);
  if ( v4 )
    v8 = *(_QWORD *)result;
  else
    v8 = 0LL;
  if ( !(_DWORD)v6 )
  {
    if ( v4 )
      v9 = (_BYTE *)(*(_QWORD *)result + 986LL);
    else
      v9 = (_BYTE *)(v7 + 1050);
    *v9 = 1;
    v10 = *(_DWORD *)(a1 + 152);
    result = *(unsigned int *)(a1 + 112);
    if ( (v10 & 0x10000) != 0 )
    {
      if ( !(_DWORD)result )
        CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(a4) = 1;
      LOBYTE(v6) = 1;
    }
    else
    {
      if ( (_DWORD)result || (v10 & 0x20) != 0 )
        return result;
      CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(v6) = v11 != 0;
      a4 = 0LL;
    }
    return CcScheduleLazyWriteScan(v7, v8, v6, a4);
  }
  return result;
}
