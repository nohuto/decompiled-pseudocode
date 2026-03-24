/*
 * XREFs of MiDereferenceControlArea @ 0x14032CAF8
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiRefillPurgedExtents @ 0x140541F90 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x140548330 (MiFaultGetFileExtents.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiMapViewInSystemSpace @ 0x140635F9C (MiMapViewInSystemSpace.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     MiReleaseVadEventBlocks @ 0x14063AAB0 (MiReleaseVadEventBlocks.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  _DWORD *v3; // r8

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2, v3);
}
