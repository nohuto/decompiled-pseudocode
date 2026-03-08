/*
 * XREFs of ??1CSceneResourceManager@@QEAA@XZ @ 0x1801B9788
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800F0E64 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801B960C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAVCResource@@V-$com_ptr_t@UISpectreTexture@@.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801BA1EC (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x1801BA420 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

void __fastcall CSceneResourceManager::~CSceneResourceManager(void **this)
{
  void *v2; // rcx
  CD3DDevice *v3; // rcx
  volatile signed __int32 *v4; // rcx
  HMODULE v5; // rcx

  *this = &CSceneResourceManager::`vftable';
  CSceneResourceManager::ReleaseSceneCompositor((CSceneResourceManager *)this);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>,void *>>>(
    (__int64)(this + 8),
    (__int64)(this + 8),
    *((_QWORD *)this[8] + 1));
  std::_Deallocate<16,0>(this[8], 0x30uLL);
  v2 = this[5];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, ((_BYTE *)this[7] - (_BYTE *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[5] = 0LL;
    this[6] = 0LL;
    this[7] = 0LL;
  }
  v3 = (CD3DDevice *)this[4];
  if ( v3 )
    CD3DDevice::Release(v3);
  v4 = (volatile signed __int32 *)this[3];
  if ( v4 )
    CMILRefCountBaseT<IDeviceResource>::InternalRelease(v4);
  v5 = (HMODULE)this[2];
  if ( v5 )
    FreeLibrary(v5);
}
