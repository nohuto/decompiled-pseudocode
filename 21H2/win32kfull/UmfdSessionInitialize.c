/*
 * XREFs of UmfdSessionInitialize @ 0x1C00F6DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00F6EF4 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00F74F0 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C00F7C74 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     bEnableFontDriver @ 0x1C00F7DB0 (bEnableFontDriver.c)
 */

__int64 UmfdSessionInitialize()
{
  _QWORD *Pool2; // rbx
  __int64 v1; // rax

  GreInitializePushLock(&UmfdLookupPushLock);
  GreInitializePushLock(&UmfdWinLogonRequestLock);
  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 56LL, 1665758037LL);
  if ( !Pool2 )
    goto LABEL_10;
  v1 = ExAllocatePool2(262LL, 0x2000LL, 1665758037LL);
  if ( !v1 )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_10:
    UmfdFontFileLookup = 0LL;
    return 3221225473LL;
  }
  Pool2[5] = 0LL;
  Pool2[6] = v1;
  Pool2[4] = 512LL;
  *((_DWORD *)Pool2 + 6) = 0;
  *((_DWORD *)Pool2 + 7) = 0;
  *Pool2 = 0LL;
  *((_DWORD *)Pool2 + 4) = 0;
  UmfdFontFileLookup = Pool2;
  if ( (unsigned int)bEnableFontDriver(UmfdEnableDriver, 5LL)
    && UmfdHostLifeTimeManager::SessionInitialize()
    && UmfdAllocation::Initialize()
    && (int)UmfdCallSessionInitialize() >= 0 )
  {
    return 0LL;
  }
  return 3221225473LL;
}
