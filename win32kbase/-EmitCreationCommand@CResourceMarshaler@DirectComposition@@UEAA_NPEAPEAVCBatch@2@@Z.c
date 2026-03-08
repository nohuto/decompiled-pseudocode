/*
 * XREFs of ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A0F20
 * Callers:
 *     ?EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A0E80 (-EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitCreationCommand(
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
  if ( (unsigned __int64)(4096 - v6) >= 0x10 )
  {
    v7 = *((_QWORD *)v5 + 7);
    *((_QWORD *)v5 + 5) = v6 + 16;
    v8 = (char *)(v6 + v7);
    if ( v8 )
    {
      v2[19] = (DirectComposition::CBatchSharedMemoryPool *)((char *)v2[19] + 16);
LABEL_4:
      *(_DWORD *)v8 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 44;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v8 + 3) = *((_DWORD *)this + 9);
      return 1;
    }
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
  {
    if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &v10) )
      KeBugCheck(0xC000000D);
    v8 = (char *)v10;
    goto LABEL_4;
  }
  return 0;
}
