/*
 * XREFs of MiDereferenceControlArea @ 0x14036CC30
 * Callers:
 *     MiRefillPurgedExtents @ 0x14063CD7C (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1406438D0 (MiFaultGetFileExtents.c)
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 *     MiReleaseVadEventBlocks @ 0x1406ECE8C (MiReleaseVadEventBlocks.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2);
}
