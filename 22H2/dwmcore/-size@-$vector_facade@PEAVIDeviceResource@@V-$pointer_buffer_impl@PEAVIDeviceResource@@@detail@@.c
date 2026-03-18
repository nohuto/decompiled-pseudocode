/*
 * XREFs of ?size@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@QEBA_KXZ @ 0x1800A9E2C
 * Callers:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180079760 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?clear_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800A9C30 (-clear_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@.c)
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800A9C90 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007BA9C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800A9F64 (-last@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 */

__int64 __fastcall detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::size(
        _QWORD *a1)
{
  unsigned __int64 v2; // rbx

  v2 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
  return (__int64)(detail::pointer_buffer_impl<IDeviceResource *>::last(a1) - v2) >> 3;
}
