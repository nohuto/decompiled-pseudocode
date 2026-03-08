/*
 * XREFs of CcNotifyWriteBehindVolume @ 0x1403BBE2C
 * Callers:
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcScheduleLazyWriteScanVolume @ 0x140242B4C (CcScheduleLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403BBD24 (CcReapPrivateVolumeCachemap.c)
 *     CcNotifyWriteBehindAllVolumesHelper @ 0x1405345E0 (CcNotifyWriteBehindAllVolumesHelper.c)
 *     CcNotifyWriteBehindHelper @ 0x140534650 (CcNotifyWriteBehindHelper.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1405378E0 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
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
