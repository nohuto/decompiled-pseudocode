/*
 * XREFs of MiIsPfn @ 0x14025F1D0
 * Callers:
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 *     MmQueryPfnList @ 0x1406E0A60 (MmQueryPfnList.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A2E748 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECE4 (MiRotateToFrameBufferNoCopy.c)
 *     MiIsExtentDangling @ 0x140A31284 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x140A39D10 (MmRelocatePfnList.c)
 *     MiConvertHiberPhasePte @ 0x140AA8FB0 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x140AA91D0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140AA93D0 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x140AE5198 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140AE5264 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140AE536C (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_140C65820 )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
}
