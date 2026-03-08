/*
 * XREFs of ?_Change_array@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAXQEAVDeviceInfo@CDeviceManager@@_K1@Z @ 0x1800CCA38
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1800CD348 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180103AE4 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 */

__int64 __fastcall std::vector<CDeviceManager::DeviceInfo>::_Change_array(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(v6, a1[1]);
    result = std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
