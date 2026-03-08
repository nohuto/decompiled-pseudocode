/*
 * XREFs of ObFastReplaceObject @ 0x140217FC8
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x1402F34E4 (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x140532D48 (CcChangeBackingFileObject.c)
 *     MiEnableImageDirectMap @ 0x14063A850 (MiEnableImageDirectMap.c)
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 *     SeDeassignPrimaryToken @ 0x140705614 (SeDeassignPrimaryToken.c)
 *     ObpCreateSymbolicLinkName @ 0x1407612D4 (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteSymbolicLinkName @ 0x14076F408 (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDeviceMap @ 0x140789BDC (ObpDeleteDeviceMap.c)
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 *     SeExchangePrimaryToken @ 0x14083FA34 (SeExchangePrimaryToken.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140352120 (ObpIncrPointerCountEx.c)
 */

unsigned __int64 __fastcall ObFastReplaceObject(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // ecx

  if ( a2 )
    ObpIncrPointerCountEx(a2 - 48, 15LL);
  v4 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  result = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v4 & 0xF;
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(result - 48), -v6);
  }
  return result;
}
