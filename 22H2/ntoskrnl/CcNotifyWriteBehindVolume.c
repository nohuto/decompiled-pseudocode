/*
 * XREFs of CcNotifyWriteBehindVolume @ 0x1403C175C
 * Callers:
 *     CcWorkerThread @ 0x140298820 (CcWorkerThread.c)
 *     CcScheduleLazyWriteScanVolume @ 0x140299918 (CcScheduleLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403C1654 (CcReapPrivateVolumeCachemap.c)
 *     CcNotifyWriteBehindAllVolumesHelper @ 0x140536AB0 (CcNotifyWriteBehindAllVolumesHelper.c)
 *     CcNotifyWriteBehindHelper @ 0x140536B20 (CcNotifyWriteBehindHelper.c)
 *     CcAsyncLazywriteWorkerThread @ 0x140539DB0 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

LONG __fastcall CcNotifyWriteBehindVolume(__int64 a1, char a2)
{
  LONG result; // eax

  if ( *(_BYTE *)(a1 + 1173) && *(_BYTE *)(a1 + 1236) )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
    if ( (a2 & 4) != 0 )
    {
      if ( !*(_BYTE *)(a1 + 984) )
        KeBugCheckEx(0x34u, 0x68CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      result = KiSetTimerEx(a1 + 920, 0LL, 0, 0, 0LL);
    }
    if ( (a2 & 8) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 864), 0, 0);
    if ( (a2 & 0x10) != 0 )
      result = KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    if ( (a2 & 0x20) != 0 )
      return KeSetEvent((PRKEVENT)(a1 + 1560), 0, 0);
  }
  return result;
}
