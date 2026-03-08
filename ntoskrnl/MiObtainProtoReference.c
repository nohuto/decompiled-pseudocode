/*
 * XREFs of MiObtainProtoReference @ 0x1402A304C
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x1402A2AC4 (MiHandleCollidedFault.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiFlushWaitForReadInProgress @ 0x140633B18 (MiFlushWaitForReadInProgress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, char a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    MiLockNestedPageAtDpcInline(a1);
  }
  else
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v4);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  MiAddLockedPageCharge(a1, 1LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
