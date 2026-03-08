/*
 * XREFs of ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x18024C23C
 * Callers:
 *     ?ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL@@@Z @ 0x18024C040 (-ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMES.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x18024BE50 (-ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@?$map@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCSceneMeshRendererComponent@@@Z @ 0x18024C590 (--$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@-$map@PEAVCSceneMeshRendererComponent@@V.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCSceneMeshRendererComponent@@@Z @ 0x18024CB6C (-erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@@.c)
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x180267E8C (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::SetMaterial(
        CSceneMeshRendererComponent *this,
        struct CSceneMaterial *a2)
{
  struct CSceneMaterial *v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CSceneComponent *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct CSceneMaterial *)*((_QWORD *)this + 10);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      v11 = this;
      std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
        (char *)v4 + 72,
        &v11);
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( a2 )
    {
      v5 = CResource::RegisterNotifier(this, a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
      v11 = this;
      v8 = std::map<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>::_Try_emplace<CSceneMeshRendererComponent * const &,>(
             (char *)a2 + 72,
             v9,
             &v11);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)v8 + 40LL));
      CSceneComponent::AddDirtySceneObject(v11, a2);
      *((_QWORD *)this + 10) = a2;
    }
    CSceneMeshRendererComponent::ApplyMaterialToSpectreResources(this);
  }
  return 0LL;
}
