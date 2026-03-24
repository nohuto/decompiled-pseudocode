/*
 * XREFs of UmfdSessionInitialize @ 0x1C00F35D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00F3C04 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00F3EF4 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C00F45A8 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     bEnableFontDriver @ 0x1C00F46E0 (bEnableFontDriver.c)
 */

__int64 UmfdSessionInitialize()
{
  _QWORD *PoolWithTag; // rbx
  PVOID v1; // rax

  GreInitializePushLock(&UmfdLookupPushLock);
  GreInitializePushLock(&UmfdWinLogonRequestLock);
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x63497355u);
  if ( !PoolWithTag )
    goto LABEL_10;
  v1 = ExAllocatePoolWithTag(PagedPoolSession, 0x2000uLL, 0x63497355u);
  if ( !v1 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_10:
    UmfdFontFileLookup = 0LL;
    return 3221225473LL;
  }
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = v1;
  PoolWithTag[4] = 512LL;
  *((_DWORD *)PoolWithTag + 6) = 0;
  *((_DWORD *)PoolWithTag + 7) = 0;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  UmfdFontFileLookup = PoolWithTag;
  if ( (unsigned int)bEnableFontDriver(UmfdEnableDriver, 5LL)
    && UmfdHostLifeTimeManager::SessionInitialize()
    && UmfdAllocation::Initialize()
    && (int)UmfdCallSessionInitialize() >= 0 )
  {
    return 0LL;
  }
  return 3221225473LL;
}
