/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38e___ @ 0x1C02541F0
 * Callers:
 *     ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5DB0 (-EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a48ca398a10ed819118b82cb8db7e38e___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 16;
  *(_QWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 1) = 359;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  v5[12] = *(_DWORD *)(*(_QWORD *)a3 + 132LL) != 0;
  return 1;
}
