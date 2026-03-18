/*
 * XREFs of ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007BA9C
 * Callers:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180079760 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18007B920 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?size@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@AEBA_KXZ @ 0x18007BB14 (-size@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@AEBA_KXZ.c)
 *     ?clear_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800A9C30 (-clear_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@.c)
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800A9C90 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 *     ?size@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@QEBA_KXZ @ 0x1800A9E2C (-size@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@.c)
 *     ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800A9E64 (-AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800A9F64 (-last@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?consume@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z @ 0x1800A9F9C (-consume@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z @ 0x1800A9FEC (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<IDeviceResource *>::first(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
    return (unsigned __int64)a1;
  if ( (*(_DWORD *)a1 & 3) != 1 )
  {
    if ( (*(_DWORD *)a1 & 3) == 2 )
      return 0LL;
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    return (unsigned __int64)a1;
  }
  return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
}
