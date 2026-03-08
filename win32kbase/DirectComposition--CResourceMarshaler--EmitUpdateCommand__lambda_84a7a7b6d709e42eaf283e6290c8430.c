/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___ @ 0x1C00648A8
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063350 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___(
        __int64 a1,
        DirectComposition::CBatchSharedMemoryPool ***a2,
        __int64 a3)
{
  DirectComposition::CBatchSharedMemoryPool **v3; // r9
  DirectComposition::CBatchSharedMemoryPool *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  char *v10; // rdx
  char result; // al
  void *v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v12 = 0LL;
  v7 = v3[17];
  v8 = *((_QWORD *)v7 + 5);
  if ( (unsigned __int64)(4096 - v8) >= 0x10 )
  {
    v9 = *((_QWORD *)v7 + 7);
    *((_QWORD *)v7 + 5) = v8 + 16;
    v10 = (char *)(v8 + v9);
    if ( v10 )
    {
      v3[19] = (DirectComposition::CBatchSharedMemoryPool *)((char *)v3[19] + 16);
LABEL_4:
      *(_DWORD *)v10 = 16;
      *(_QWORD *)(v10 + 4) = 0LL;
      *((_DWORD *)v10 + 3) = 0;
      *((_DWORD *)v10 + 1) = 224;
      *((_DWORD *)v10 + 2) = *(_DWORD *)(a1 + 32);
      *((_DWORD *)v10 + 1) = 224;
      *((_DWORD *)v10 + 2) = *(_DWORD *)(*(_QWORD *)a3 + 32LL);
      result = 1;
      *((_DWORD *)v10 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 264LL);
      return result;
    }
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
  {
    if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &v12) )
      KeBugCheck(0xC000000D);
    v10 = (char *)v12;
    goto LABEL_4;
  }
  return 0;
}
