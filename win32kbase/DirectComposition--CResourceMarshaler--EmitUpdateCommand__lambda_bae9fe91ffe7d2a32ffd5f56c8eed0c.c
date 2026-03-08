/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___ @ 0x1C005F64C
 * Callers:
 *     ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005F700 (-EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 *a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm1
  char result; // al
  _DWORD *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, (void **)&v10) )
    return 0;
  v5 = v10;
  *v10 = 76;
  v6 = v5 + 1;
  memset(v5 + 1, 0, 0x48uLL);
  *v6 = 74;
  v6[1] = *(_DWORD *)(a1 + 32);
  v7 = *a3;
  *(_OWORD *)(v6 + 2) = *(_OWORD *)(*a3 + 148);
  *(_OWORD *)(v6 + 6) = *(_OWORD *)(v7 + 164);
  *(_OWORD *)(v6 + 10) = *(_OWORD *)(v7 + 180);
  v8 = *(_OWORD *)(v7 + 196);
  result = 1;
  *(_OWORD *)(v6 + 14) = v8;
  return result;
}
