/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801B974C
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$map@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCResource@@@Z @ 0x1801B9680 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$map@PEAVCResource@@V-$com_ptr_t@UISpectreTexture@@Uerr_r.c)
 *     ??$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@?$map@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCProjectedShadowCaster@@@Z @ 0x180248594 (--$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@-$map@PEAVCProjectedShadowCaster@@V-$com_ptr_.c)
 *     ??$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@?$map@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCSceneMeshRendererComponent@@@Z @ 0x18024C590 (--$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@-$map@PEAVCSceneMeshRendererComponent@@V.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v2 + 40));
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 0x30uLL);
}
