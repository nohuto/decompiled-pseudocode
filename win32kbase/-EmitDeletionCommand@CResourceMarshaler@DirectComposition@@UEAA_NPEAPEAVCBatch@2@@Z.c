/*
 * XREFs of ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5160
 * Callers:
 *     ?EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B0A0 (-EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitDeletionCommand@CVisualTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5110 (-EmitDeletionCommand@CVisualTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0264580 (-EmitDeletionCommand@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDeletionCommand(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CBatchSharedMemoryPool **v2; // r8
  DirectComposition::CBatchSharedMemoryPool *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  char *v8; // rcx
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v10 = 0LL;
  v5 = v2[17];
  v6 = *((_QWORD *)v5 + 5);
  if ( (unsigned __int64)(4096 - v6) >= 0xC )
  {
    v7 = *((_QWORD *)v5 + 7);
    *((_QWORD *)v5 + 5) = v6 + 12;
    v8 = (char *)(v6 + v7);
    if ( v8 )
    {
      v2[19] = (DirectComposition::CBatchSharedMemoryPool *)((char *)v2[19] + 12);
LABEL_4:
      *(_DWORD *)v8 = 12;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 1) = 45;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      return 1;
    }
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
  {
    if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0xCuLL, &v10) )
      KeBugCheck(0xC000000D);
    v8 = (char *)v10;
    goto LABEL_4;
  }
  return 0;
}
