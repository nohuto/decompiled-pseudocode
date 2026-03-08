/*
 * XREFs of ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C0042880
 * Callers:
 *     ?bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0019D64 (-bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0050600 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall XEPALOBJ::FreePaletteMemory(XEPALOBJ *this)
{
  void *v2; // rdx
  void *v3; // rsi
  __int64 v4; // rdi

  v2 = *(void **)(*(_QWORD *)this + 128LL);
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
  v3 = *(void **)this;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 8LL);
  if ( v4 )
  {
    memset(v3, 0, 0x90uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v4 + 48), v3);
  }
  *(_QWORD *)this = 0LL;
}
