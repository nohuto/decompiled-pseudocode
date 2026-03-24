/*
 * XREFs of MiScrubInterrupted @ 0x140563998
 * Callers:
 *     MiScrubNodeLargePageList @ 0x140556D78 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140563F8C (MiScrubNode.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6690 (MiScrubProcessPhysicalPages.c)
 *     MiScrubProcesses @ 0x1408DC060 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1296LL) & 1) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL);
}
