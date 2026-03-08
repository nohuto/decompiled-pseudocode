/*
 * XREFs of MiControlAreaRequiresCharge @ 0x14034C4DC
 * Callers:
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiReferenceControlArea @ 0x140331908 (MiReferenceControlArea.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiMapImageInSystemSpace @ 0x1406A53F8 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14034C584 (MiControlAreaExemptFromCrossPartitionCharges.c)
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // r8d
  __int64 v4; // r9
  void *v5; // rdx

  if ( (unsigned int)MiControlAreaExemptFromCrossPartitionCharges(a1, a2, (unsigned int)a2) )
    return 1LL;
  if ( v2 > 1 )
    v5 = v3 == 2
       ? *(void **)(qword_140C67048
                  + 8LL
                  * *(unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 366))
       : &MiSystemPartition;
  else
    v5 = *(void **)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  if ( v5 == *(void **)(qword_140C67048 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)) )
    return 1LL;
  if ( (*(_BYTE *)(v4 + 62) & 1) == 0 || v3 == 1 || v3 == 4 )
    return 2LL;
  ++dword_140C67A50;
  return 0LL;
}
