/*
 * XREFs of MiIsPfn @ 0x14023F0A0
 * Callers:
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MmQueryPfnList @ 0x1406EF4F0 (MmQueryPfnList.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A31478 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A31A14 (MiRotateToFrameBufferNoCopy.c)
 *     MiIsExtentDangling @ 0x140A33FB4 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x140A3C9F8 (MmRelocatePfnList.c)
 *     MiConvertHiberPhasePte @ 0x140AAC1E0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x140AAC400 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC600 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x140AE9198 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140AE9264 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140AE936C (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_140C65CA0 )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
}
