/*
 * XREFs of ?EmitCreationCommand@?$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024CA30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C006AF08 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

char __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionPointLightMarshaler,2>::EmitCreationCommand(
        __int64 a1,
        __int64 *a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 160) + 16LL));
}
