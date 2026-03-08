/*
 * XREFs of ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180260750
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x18024D7D8 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneWorld::OnSceneLost(CSceneWorld *this, struct ISpectreRenderer *a2)
{
  CSceneNode::DehydrateSpectreResources(*((CSceneNode **)this + 3));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  return 0LL;
}
