/*
 * XREFs of SmcCacheReference @ 0x14092D754
 * Callers:
 *     SmcGetCacheStats @ 0x14092DA30 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x14092DBA0 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x14092DE00 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x14092E0C8 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x14092E620 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  BOOLEAN v5; // dl

  v3.Count = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  v5 = ExAcquireRundownProtection(v4 + 1);
  if ( v5 )
  {
    if ( (v4[3].Count & 0xFFF) == a2 >> 4 )
    {
      v3.Count = v4->Count;
      v5 = 0;
    }
    if ( v5 )
      ExReleaseRundownProtection(v4 + 1);
  }
  return v3;
}
