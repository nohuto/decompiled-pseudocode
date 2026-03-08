/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___ @ 0x1C026B234
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026B430 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  int v6; // eax
  char result; // al
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 44;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_OWORD *)(v5 + 20) = 0LL;
  *(_QWORD *)(v5 + 36) = 0LL;
  *((_DWORD *)v5 + 1) = 259;
  v6 = *(_DWORD *)(a1 + 32);
  *((_DWORD *)v5 + 1) = 259;
  *((_DWORD *)v5 + 2) = v6;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(*(_QWORD *)a3 + 32LL);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)a3 + 184LL);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)a3 + 188LL);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)a3 + 192LL);
  *(_QWORD *)(v5 + 28) = *(_QWORD *)(*(_QWORD *)a3 + 176LL);
  result = 1;
  v5[36] = (*(_DWORD *)(*(_QWORD *)a3 + 16LL) & 0x40000) == 0;
  return result;
}
