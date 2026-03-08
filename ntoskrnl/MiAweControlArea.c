/*
 * XREFs of MiAweControlArea @ 0x14034C968
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14034C8D8 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14064976C (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x140720B20 (MmGetSectionInformation.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiDeletePageFileSectionNodes @ 0x1407F349C (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x14085F4AC (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAweControlArea(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
    return 0LL;
  else
    return (*(_DWORD *)(a1 + 92) >> 17) & 1;
}
