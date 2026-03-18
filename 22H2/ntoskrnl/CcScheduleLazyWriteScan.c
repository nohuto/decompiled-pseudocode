/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1402998D8
 * Callers:
 *     CcCanIWrite @ 0x14020F1A0 (CcCanIWrite.c)
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     CcNotifyOfMappedWrite @ 0x140298124 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindPostProcess @ 0x14029AF18 (CcWriteBehindPostProcess.c)
 *     CcUninitializeCacheMap @ 0x14029BB20 (CcUninitializeCacheMap.c)
 *     CcDecrementOpenCount @ 0x14029CA00 (CcDecrementOpenCount.c)
 *     CcSetDirtyInMask @ 0x1402C8FC0 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x1402FC580 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPagesInternal @ 0x1402FCAF0 (CcChargeDirtyPagesInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1403CF500 (CcAddDirtyPagesToExternalCache.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403D3FB0 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcCoalescingCallBackHelper @ 0x140535580 (CcCoalescingCallBackHelper.c)
 *     CcRescheduleLazyWriteScan @ 0x1405373D8 (CcRescheduleLazyWriteScan.c)
 *     CcDeferWrite @ 0x140537530 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x140539004 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     CcScheduleLazyWriteScanVolume @ 0x140299918 (CcScheduleLazyWriteScanVolume.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     CcNotifyWriteBehindInternal @ 0x140536B4C (CcNotifyWriteBehindInternal.c)
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
            KeBugCheckEx(0x34u, 0x363uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          result = KiSetTimerEx((__int64)(a1 + 984), CcFirstDelay, 0, 0, 0LL);
        }
      }
      if ( !a1[1292] )
        *v9 = 1;
    }
  }
  return result;
}
