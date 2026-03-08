/*
 * XREFs of ??1CSceneWorld@@MEAA@XZ @ 0x180260250
 * Callers:
 *     ??_GCSceneWorld@@MEAAPEAXI@Z @ 0x180260380 (--_GCSceneWorld@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA31C (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801BB140 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@s.c)
 */

void __fastcall CSceneWorld::~CSceneWorld(CSceneWorld *this)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rcx
  void *v6; // rcx

  v2 = (unsigned __int64)this + 72;
  *(_QWORD *)this = &CSceneWorld::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CSceneWorld::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CSceneWorld::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CSceneWorld::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 112;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 128;
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 19);
  v5 = (__int64 *)*((_QWORD *)this + 16);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>>(
      v5,
      *((__int64 **)this + 17));
    std::_Deallocate<16,0>(
      *((void **)this + 16),
      (*((_QWORD *)this + 18) - *((_QWORD *)this + 16)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 15) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 12);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  CResource::~CResource(this);
}
