/*
 * XREFs of ?EmitCreationCommand@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C023A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C000FCA4 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

char __fastcall DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::EmitCreationCommand(
        DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           a2,
           *(_DWORD *)(*((_QWORD *)this + 14) + 24LL));
}
