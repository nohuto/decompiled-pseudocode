/*
 * XREFs of MiObtainProtoReference @ 0x1402EF318
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14028B350 (MiCopyDataPageToImagePage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x1402EED90 (MiHandleCollidedFault.c)
 *     MiFlushWaitForReadInProgress @ 0x140635FA8 (MiFlushWaitForReadInProgress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C334 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiAddLockedPageCharge @ 0x1402EF368 (MiAddLockedPageCharge.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348380 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    MiLockNestedPageAtDpcInline(a1, a2, a3, a4);
  }
  else
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
