/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800A9844
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800A9570 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 *     ?size@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@QEBA_KXZ @ 0x1800A970C (-size@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@.c)
 *     ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800A9744 (-AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007B8CC (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@AEBA_KXZ @ 0x18007B944 (-size@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@AEBA_KXZ.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<IDeviceResource *>::last(_QWORD *a1)
{
  __int64 v2; // rbx

  v2 = 8 * detail::pointer_buffer_impl<IDeviceResource *>::size(a1);
  return v2 + detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
}
