/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x180030D70
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180030C00 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030E04 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?OpenRenderFence@CD3DDevice@@QEBAPEAXXZ @ 0x180030E78 (-OpenRenderFence@CD3DDevice@@QEBAPEAXXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005FC34 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 */

__int64 __fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_back_with_unused_capacity<_LUID &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  CDeviceManager *v6; // rcx
  int ExistingDevice; // eax
  CD3DDevice *v8; // rbx
  void *v9; // rax
  __int64 result; // rax
  CD3DDevice *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *a2;
  v11 = 0LL;
  v5 = v2 + 8;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)v2 = v4;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v11);
  ExistingDevice = CDeviceManager::GetExistingDevice(v6, *(struct _LUID *)v2, &v11);
  v8 = v11;
  if ( ExistingDevice >= 0 )
  {
    v9 = CD3DDevice::OpenRenderFence(v11);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v5,
      v9);
  }
  if ( v8 )
    CD3DDevice::Release(v8);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 24;
  return result;
}
