/*
 * XREFs of MiAweControlArea @ 0x1402966C8
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140294C48 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14054DB8C (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x140621350 (MmGetSectionInformation.c)
 *     MiDeletePageFileSectionNodes @ 0x1406359B8 (MiDeletePageFileSectionNodes.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiDereferenceFailedControlArea @ 0x1406A5E24 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
