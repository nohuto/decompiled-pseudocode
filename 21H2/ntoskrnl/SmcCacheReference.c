/*
 * XREFs of SmcCacheReference @ 0x1409D7C2C
 * Callers:
 *     SmcGetCacheStats @ 0x1409D7F04 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x1409D8074 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1409D82D4 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1409D8588 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x1409D8AB0 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi

  v3 = 0LL;
  v4 = a1 + 32LL * (a2 & 0xF);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v4 + 8)) )
  {
    if ( (*(_DWORD *)(v4 + 24) & 0xFFF) == a2 >> 4 )
      return *(_QWORD *)v4;
    else
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v4 + 8));
  }
  return v3;
}
