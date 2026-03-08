/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5cb463a5da8e155d664ecb81f54d32f___ @ 0x1C00BFCB4
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C1A0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b5cb463a5da8e155d664ecb81f54d32f___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 16;
  *(_QWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 1) = 17;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 1) = 17;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a3 + 32LL);
  result = 1;
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 260LL);
  return result;
}
