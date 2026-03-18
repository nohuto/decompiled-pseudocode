/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x14029F78C
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14020F0D0 (MmGetImageFileSignatureInformation.c)
 *     MiSectionDelete @ 0x140721C30 (MiSectionDelete.c)
 *     MiCreateImageOrDataSection @ 0x1407233C0 (MiCreateImageOrDataSection.c)
 *     MiDereferenceFailedControlArea @ 0x140863600 (MiDereferenceFailedControlArea.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35650 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  LOBYTE(v5) = v4;
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, v5);
}
