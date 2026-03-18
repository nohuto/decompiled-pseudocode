/*
 * XREFs of MiControlAreaRequiresCharge @ 0x140214CE4
 * Callers:
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14021BAA0 (MiCreatePrototypePtes.c)
 *     MiReferenceControlArea @ 0x140288198 (MiReferenceControlArea.c)
 *     MiUpControlAreaRefs @ 0x140625F6C (MiUpControlAreaRefs.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiDeleteVad @ 0x1406FA4D0 (MiDeleteVad.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140214D8C (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // r8d
  __int64 v4; // r9
  void *v5; // rdx

  if ( (unsigned int)MiControlAreaExemptFromCrossPartitionCharges(a1, a2, (unsigned int)a2, a1) )
    return 1LL;
  if ( v2 > 1 )
    v5 = v3 == 2
       ? *(void **)(qword_140C674C8
                  + 8LL
                  * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 366))
       : &MiSystemPartition;
  else
    v5 = *(void **)(qword_140C674C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  if ( v5 == *(void **)(qword_140C674C8 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v4 + 62) & 1) == 0 || v3 == 1 || v3 == 4 )
    return 2LL;
  ++dword_140C67ED0;
  return 0LL;
}
