/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af4543a610b17e58df63bc52b09796d8___ @ 0x1C025397C
 * Callers:
 *     ?EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02539F0 (-EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af4543a610b17e58df63bc52b09796d8___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rdx
  char result; // al
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 20;
  *(_OWORD *)(v5 + 4) = 0LL;
  *((_DWORD *)v5 + 1) = 313;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  result = 1;
  *(_QWORD *)(v5 + 12) = *(_QWORD *)(*(_QWORD *)a3 + 112LL);
  return result;
}
