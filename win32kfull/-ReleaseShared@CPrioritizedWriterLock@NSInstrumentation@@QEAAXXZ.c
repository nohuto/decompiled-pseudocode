/*
 * XREFs of ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00D7674
 * Callers:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00BC9E4 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00C3FAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C00C4600 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00C46E0 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00D9840 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01188EC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ??1?$CAutoSharedCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C0130000 (--1-$CAutoSharedCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@.c)
 *     ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1C029BB4C (-LookUp@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(
        NSInstrumentation::CPrioritizedWriterLock *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) <= 1
    && *((_DWORD *)this + 7)
    && _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 1, 0) == -1 )
  {
    _InterlockedExchange((volatile __int32 *)this + 4, 1);
    KeSetEvent(*((PRKEVENT *)this + 1), 0, 0);
  }
}
