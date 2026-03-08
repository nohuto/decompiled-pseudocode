/*
 * XREFs of CcScheduleLazyWriteScan @ 0x140242B0C
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x140215670 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     CcDecrementOpenCount @ 0x14021B85C (CcDecrementOpenCount.c)
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x140242420 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPagesInternal @ 0x1402429A0 (CcChargeDirtyPagesInternal.c)
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1403C9F50 (CcAddDirtyPagesToExternalCache.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403CEA10 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcCoalescingCallBackHelper @ 0x1405330B0 (CcCoalescingCallBackHelper.c)
 *     CcRescheduleLazyWriteScan @ 0x140534F08 (CcRescheduleLazyWriteScan.c)
 *     CcDeferWrite @ 0x140535060 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x140536B34 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     CcScheduleLazyWriteScanVolume @ 0x140242B4C (CcScheduleLazyWriteScanVolume.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CcNotifyWriteBehindInternal @ 0x14053467C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcScheduleLazyWriteScan(_BYTE *a1, __int64 a2, __int64 a3, char a4)
{
  char result; // al
  __int64 v5; // r10
  char v7; // cl
  __int64 v8; // rdx
  _BYTE *v9; // rdi

  result = a3;
  v5 = a2;
  if ( CcEnablePerVolumeLazyWriter )
  {
    LOBYTE(a3) = a4;
    LOBYTE(a2) = result;
    return CcScheduleLazyWriteScanVolume(v5, a2, a3);
  }
  else
  {
    v7 = a1[1292];
    if ( !v7 || (_BYTE)a3 )
    {
      if ( a4 )
        v8 = 8LL;
      else
        v8 = v7 != 0 ? 16 : 4;
      if ( (_BYTE)a3 )
      {
        result = CcNotifyWriteBehindInternal(a1, v8);
        v9 = a1 + 1049;
      }
      else
      {
        v9 = a1 + 1049;
        if ( !a1[1049] )
        {
          if ( !a1[1048] )
            KeBugCheckEx(0x34u, 0x364uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          result = KiSetTimerEx((int)a1 + 984, CcFirstDelay, 0, 0, 0LL);
        }
      }
      if ( !a1[1292] )
        *v9 = 1;
    }
  }
  return result;
}
