/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3840c43712c8b40effe27ed20e64dbf___ @ 0x1C00C13EC
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C1A0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3840c43712c8b40effe27ed20e64dbf___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 12;
  *(_QWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 1) = 12;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 1) = 12;
  result = 1;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a3 + 32LL);
  return result;
}
