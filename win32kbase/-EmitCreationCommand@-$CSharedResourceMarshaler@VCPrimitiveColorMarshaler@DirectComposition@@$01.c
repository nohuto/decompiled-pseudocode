/*
 * XREFs of ?EmitCreationCommand@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024CA90
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C006AF08 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

char __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CPrimitiveColorMarshaler,2>::EmitCreationCommand(
        __int64 a1,
        __int64 *a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL));
}
