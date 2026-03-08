/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___ @ 0x1C02515E0
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0251BB0 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _lambda_e7288af00cdd6f7af065feb83fd33220_::operator() @ 0x1C025165C (_lambda_e7288af00cdd6f7af065feb83fd33220_--operator().c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3)
{
  char *v5; // rax
  void *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v7) )
    return 0;
  v5 = (char *)v7;
  *(_DWORD *)v7 = 32;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 1) = 250;
  *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 32);
  lambda_e7288af00cdd6f7af065feb83fd33220_::operator()(a3);
  return 1;
}
