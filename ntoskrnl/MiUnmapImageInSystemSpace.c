/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1406A556C
 * Callers:
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x1407F4604 (MiParseComAndCetHeaders.c)
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiOpenHotPatchFile @ 0x140A376D4 (MiOpenHotPatchFile.c)
 *     MiCreateSessionDriverProtos @ 0x140A4316C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, v1, 0, 0);
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)(a1 + 32));
  }
  else
  {
    MiRemoveFromSystemSpace(v1, 1);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
