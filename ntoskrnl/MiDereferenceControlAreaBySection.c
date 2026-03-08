/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x1403349EC
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x140361CA0 (MmGetImageFileSignatureInformation.c)
 *     MiSectionDelete @ 0x1407C8780 (MiSectionDelete.c)
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 *     MiDereferenceFailedControlArea @ 0x14085F4AC (MiDereferenceFailedControlArea.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
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
