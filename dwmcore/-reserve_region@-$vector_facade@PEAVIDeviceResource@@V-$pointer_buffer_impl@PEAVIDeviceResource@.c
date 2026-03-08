/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800A9570
 * Callers:
 *     ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800A9744 (-AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007B8CC (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?size@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@QEBA_KXZ @ 0x1800A970C (-size@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@.c)
 *     ?last@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800A9844 (-last@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?consume@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z @ 0x1800A987C (-consume@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_J@Z.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z @ 0x1800A98CC (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B026C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

unsigned __int64 __fastcall detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::reserve_region(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  _QWORD *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-38h] BYREF

  detail::pointer_buffer_impl<IDeviceResource *>::ensure_extra_capacity(a1, 1LL);
  v4 = detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::size(a1);
  v5 = v4 - a2;
  v6 = v4;
  v7 = detail::pointer_buffer_impl<IDeviceResource *>::last(a1);
  v8 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
  v9 = (_QWORD *)(v8 + 8 * v6);
  if ( !v9 )
    goto LABEL_8;
  v10 = v5;
  if ( v5 > 1 )
    v10 = 1LL;
  v11 = v7 - 8 * v10;
  if ( v7 != v11 )
  {
    *v9 = *(_QWORD *)(v7 - 8);
    if ( v7 - 8 != v11 )
LABEL_8:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v5 > 1 )
  {
    if ( v6 && (!v8 || v6 < 0) )
      goto LABEL_8;
    v13[0] = v8;
    v13[1] = v6;
    v13[2] = v6;
    ((void (__fastcall *)(_BYTE *, unsigned __int64, unsigned __int64, _QWORD *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      v14,
      v8 + 8 * a2,
      v8 + 8 * (v6 - 1),
      v13);
  }
  detail::pointer_buffer_impl<IDeviceResource *>::consume(a1, 1LL);
  return v8 + 8 * a2;
}
