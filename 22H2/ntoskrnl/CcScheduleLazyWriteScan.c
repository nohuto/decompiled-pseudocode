/*
 * XREFs of CcScheduleLazyWriteScan @ 0x1402773DC
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14022CFFC (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022D3E0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     CcRescheduleLazyWriteScan @ 0x14025FCB4 (CcRescheduleLazyWriteScan.c)
 *     CcUninitializeCacheMap @ 0x140276F30 (CcUninitializeCacheMap.c)
 *     CcSetDirtyPinnedData @ 0x140279990 (CcSetDirtyPinnedData.c)
 *     CcDecrementOpenCount @ 0x1402937BC (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     CcChargeDirtyPages @ 0x1402B68A0 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380DCC (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x140391F70 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x1404E9600 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x1404E9F80 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x1404EBDC4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x14031B410 (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcScheduleLazyWriteScan(__int64 a1, char a2, char a3)
{
  char result; // al
  __int64 v6; // rdx

  result = *(_BYTE *)(a1 + 964);
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8LL;
    }
    else
    {
      result = -result;
      v6 = result != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = CcNotifyWriteBehindInternal(a1, v6);
    }
    else if ( !*(_BYTE *)(a1 + 632) )
    {
      result = KiSetTimerEx(a1 + 568, CcFirstDelay, 0, 0, a1 + 504);
    }
    if ( !*(_BYTE *)(a1 + 964) )
      *(_BYTE *)(a1 + 632) = 1;
  }
  return result;
}
