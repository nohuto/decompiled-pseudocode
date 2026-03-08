/*
 * XREFs of CcScheduleLazyWriteScanVolume @ 0x140242B4C
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x1402EB4A8 (CcRescheduleLazyWriteScanOnVolume.c)
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindVolume @ 0x1403BBE2C (CcNotifyWriteBehindVolume.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall CcScheduleLazyWriteScanVolume(_BYTE *a1, char a2, char a3)
{
  char result; // al
  __int64 v6; // rdx
  _BYTE *v7; // rdi

  result = a1[1172];
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
      result = CcNotifyWriteBehindVolume(a1, v6);
      v7 = a1 + 985;
    }
    else
    {
      v7 = a1 + 985;
      if ( !a1[985] )
      {
        if ( !a1[984] )
          KeBugCheckEx(0x34u, 0x701uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = KiSetTimerEx((int)a1 + 920, CcFirstDelay, 0, 0, 0LL);
      }
    }
    if ( !a1[1172] )
      *v7 = 1;
  }
  return result;
}
