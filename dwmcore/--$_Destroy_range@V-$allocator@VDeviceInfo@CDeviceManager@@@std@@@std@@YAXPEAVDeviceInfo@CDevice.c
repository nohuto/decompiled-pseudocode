/*
 * XREFs of ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180103AE4
 * Callers:
 *     ?_Change_array@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAXQEAVDeviceInfo@CDeviceManager@@_K1@Z @ 0x1800CCA38 (-_Change_array@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@st.c)
 *     ??$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAPEAVDeviceInfo@CDeviceManager@@QEAV12@0PEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800CD444 (--$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@.c)
 *     ??1CDeviceManager@@QEAA@XZ @ 0x18010DF90 (--1CDeviceManager@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x180103EFC (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = ReleaseInterface<CD3DDevice>(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
