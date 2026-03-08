/*
 * XREFs of SmcCacheReference @ 0x1409D8000
 * Callers:
 *     SmcGetCacheStats @ 0x1409D82F0 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x1409D8464 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1409D86C8 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1409D8984 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x1409D8EC0 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

__int64 __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi

  v3 = 0LL;
  v4 = a1 + 32LL * (a2 & 0xF);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 8)) )
  {
    if ( (*(_DWORD *)(v4 + 24) & 0xFFF) == a2 >> 4 )
      return *(_QWORD *)v4;
    else
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 8));
  }
  return v3;
}
