/*
 * XREFs of ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800A9744
 * Callers:
 *     ?AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z @ 0x1800A9690 (-AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z.c)
 *     ?AddDeviceResourcesToCache@CCommonRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z @ 0x1800DF290 (-AddDeviceResourcesToCache@CCommonRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007B8CC (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800A9570 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 *     ?last@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800A9844 (-last@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawListCache::AddDeviceResource(CDrawListCache *this, struct IDeviceResource *a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // rdi
  struct IDeviceResource **i; // rbx
  char *v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rax

  v2 = (_QWORD *)((char *)this + 56);
  v5 = detail::pointer_buffer_impl<IDeviceResource *>::last((char *)this + 56);
  for ( i = (struct IDeviceResource **)detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
        i != (struct IDeviceResource **)v5 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == (struct IDeviceResource **)detail::pointer_buffer_impl<IDeviceResource *>::last(v2) )
  {
    v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(struct IDeviceResource *, unsigned __int64))(*(_QWORD *)a2 + 40LL))(
      a2,
      ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    v8 = detail::pointer_buffer_impl<IDeviceResource *>::last(v2);
    v9 = detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
    *(_QWORD *)detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::reserve_region(
                 v2,
                 (__int64)(v8 - v9) >> 3) = a2;
    detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
  }
}
