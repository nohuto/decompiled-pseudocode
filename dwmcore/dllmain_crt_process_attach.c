/*
 * XREFs of dllmain_crt_process_attach @ 0x18010E9E8
 * Callers:
 *     dllmain_crt_dispatch @ 0x18010E990 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18010E590 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18010E5D0 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x18010E60C (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18010E738 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x18010E81C (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18010E8BC (__scrt_release_startup_lock.c)
 *     __scrt_fastfail @ 0x18010F204 (__scrt_fastfail.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x18010F420 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18010F448 (__scrt_initialize_default_local_stdio_options.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x18010F46C (__scrt_get_dyn_tls_init_callback.c)
 *     _RTC_Initialize @ 0x18010F47C (_RTC_Initialize.c)
 *     _initterm_0 @ 0x18010F576 (_initterm_0.c)
 *     _initterm_e_0 @ 0x18010F582 (_initterm_e_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 dllmain_crt_process_attach()
{
  char v0; // bl
  char v1; // di
  _QWORD *dyn_tls_init_callback; // rax

  if ( !_scrt_initialize_crt(0) )
    return 0LL;
  v0 = _scrt_acquire_startup_lock();
  v1 = 1;
  if ( _scrt_current_native_startup_state )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18010EB08LL);
  }
  _scrt_current_native_startup_state = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    RTC_Initialize();
    __scrt_initialize_type_info();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
        _scrt_current_native_startup_state = 2;
        v1 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v0);
  if ( v1 )
    return 0LL;
  dyn_tls_init_callback = (_QWORD *)_scrt_get_dyn_tls_init_callback();
  if ( *dyn_tls_init_callback )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)dyn_tls_init_callback) )
      _guard_xfg_dispatch_icall_fptr();
  }
  ++dword_1803E2684;
  return 1LL;
}
