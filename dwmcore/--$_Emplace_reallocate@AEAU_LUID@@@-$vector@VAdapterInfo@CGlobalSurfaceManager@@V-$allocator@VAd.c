/*
 * XREFs of ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800CD4AC
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CDDA8 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034A84 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800BC3DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAXQEAVAdapterInfo@CGlobalSurfaceManager@@_K1@Z @ 0x1800CC9A4 (-_Change_array@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSur.c)
 *     ??$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@0PEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x1800CD608 (--$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalS.c)
 *     ?OpenRenderFence@CD3DDevice@@QEBAPEAXXZ @ 0x1800CDF8C (-OpenRenderFence@CD3DDevice@@QEBAPEAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

struct _LUID *__fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(
        __int64 *a1,
        __int64 a2,
        struct _LUID *a3)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  struct _LUID v14; // rdx
  __int64 v15; // r14
  struct _LUID *v16; // r12
  int ExistingDevice; // eax
  CD3DDevice *v18; // rbx
  void *v19; // rax
  __int64 v20; // rdx
  struct _LUID *v21; // r8
  __int64 v22; // rcx
  CD3DDevice *v24; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = *a3;
  v15 = v13;
  v16 = (struct _LUID *)(v13 + 24 * v7);
  v16[1] = 0LL;
  v16[2] = 0LL;
  *v16 = v14;
  v24 = 0LL;
  ExistingDevice = CDeviceManager::GetExistingDevice((CDeviceManager *)(3 * v7), v14, &v24);
  v18 = v24;
  if ( ExistingDevice >= 0 )
  {
    v19 = CD3DDevice::OpenRenderFence(v24);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v16[1],
      v19);
  }
  if ( v18 )
    CD3DDevice::Release(v18);
  v20 = a1[1];
  v21 = (struct _LUID *)v15;
  v22 = *a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<CGlobalSurfaceManager::AdapterInfo *>(v22, a2, v15);
    v20 = a1[1];
    v21 = v16 + 3;
    v22 = a2;
  }
  std::_Uninitialized_move<CGlobalSurfaceManager::AdapterInfo *>(v22, v20, v21);
  std::vector<CGlobalSurfaceManager::AdapterInfo>::_Change_array(a1, v15, v9, v4);
  return v16;
}
