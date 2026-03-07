__int64 __fastcall CSceneWorld::OnSceneLost(CSceneWorld *this, struct ISpectreRenderer *a2)
{
  CSceneNode::DehydrateSpectreResources(*((CSceneNode **)this + 3));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  return 0LL;
}
