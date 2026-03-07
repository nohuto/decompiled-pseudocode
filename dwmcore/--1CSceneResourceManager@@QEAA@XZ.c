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
