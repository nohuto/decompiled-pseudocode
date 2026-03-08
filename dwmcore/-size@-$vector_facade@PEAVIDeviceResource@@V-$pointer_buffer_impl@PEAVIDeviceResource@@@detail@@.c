/*
 * XREFs of ?size@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@QEBA_KXZ @ 0x1800A970C
 * Callers:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180079590 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?clear_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800A9510 (-clear_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@.c)
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800A9570 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007B8CC (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800A9844 (-last@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 */

__int64 __fastcall detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::size(
        _QWORD *a1)
{
  unsigned __int64 v2; // rbx

  v2 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
  return (__int64)(detail::pointer_buffer_impl<IDeviceResource *>::last(a1) - v2) >> 3;
}
