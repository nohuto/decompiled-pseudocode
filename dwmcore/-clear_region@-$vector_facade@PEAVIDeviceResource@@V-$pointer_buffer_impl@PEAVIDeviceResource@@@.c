/*
 * XREFs of ?clear_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800A9510
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18007B750 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007B8CC (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?size@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@QEBA_KXZ @ 0x1800A970C (-size@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180129C00 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 */

__int64 __fastcall detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::clear_region(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[40]; // [rsp+40h] [rbp-28h] BYREF

  v5 = detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::size(a1);
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v6 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
  v7 = v6 + 8 * v5;
  if ( a3 != v5 )
  {
LABEL_5:
    v9[2] = 0LL;
    v9[0] = v6;
    v9[1] = v5;
    ((void (__fastcall *)(_BYTE *, unsigned __int64, unsigned __int64, _QWORD *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      v10,
      v6 + 8 * a3,
      v7,
      v9);
  }
  return detail::pointer_buffer_impl<IDeviceResource *>::consume(a1, -(__int64)a3);
}
