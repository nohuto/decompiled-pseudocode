/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3550f6b9f18b02d2e39c02f22e868a9___ @ 0x1C026B2F4
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026B430 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3550f6b9f18b02d2e39c02f22e868a9___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 *a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 24;
  *(_OWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 1) = 262;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 1) = 262;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*a3 + 32);
  v6 = *a3;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*a3 + 152);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(v6 + 160);
  return 1;
}
