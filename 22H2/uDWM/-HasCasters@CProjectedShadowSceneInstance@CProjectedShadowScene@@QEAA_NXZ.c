/*
 * XREFs of ?HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ @ 0x1800BBF4C
 * Callers:
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC6DC (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::HasCasters(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this)
{
  return RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 16)) == 0;
}
