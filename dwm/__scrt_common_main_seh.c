/*
 * XREFs of __scrt_common_main_seh @ 0x140005350
 * Callers:
 *     wWinMainCRTStartup @ 0x1400054E0 (wWinMainCRTStartup.c)
 * Callees:
 *     wWinMain @ 0x140003430 (wWinMain.c)
 *     __scrt_acquire_startup_lock @ 0x1400056C0 (__scrt_acquire_startup_lock.c)
 *     __scrt_initialize_crt @ 0x140005700 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x1400057E4 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x140005884 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x1400058B0 (__scrt_uninitialize_crt.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x140005A98 (__scrt_get_dyn_tls_init_callback.c)
 *     __scrt_get_dyn_tls_dtor_callback @ 0x140005AA8 (__scrt_get_dyn_tls_dtor_callback.c)
 *     __scrt_fastfail @ 0x140005AC8 (__scrt_fastfail.c)
 *     __scrt_get_show_window_mode @ 0x140005C1C (__scrt_get_show_window_mode.c)
 *     __scrt_is_managed_app @ 0x140005C68 (__scrt_is_managed_app.c)
 *     _initterm_0 @ 0x14000621C (_initterm_0.c)
 *     _initterm_e_0 @ 0x140006228 (_initterm_e_0.c)
 *     _c_exit_0 @ 0x140006234 (_c_exit_0.c)
 *     _register_thread_local_exe_atexit_callback_0 @ 0x140006240 (_register_thread_local_exe_atexit_callback_0.c)
 *     _o__cexit_0 @ 0x140006288 (_o__cexit_0.c)
 *     _o__exit_0 @ 0x1400062B8 (_o__exit_0.c)
 *     _o__get_wide_winmain_command_line_0 @ 0x1400062C4 (_o__get_wide_winmain_command_line_0.c)
 *     _seh_filter_exe @ 0x140006318 (_seh_filter_exe.c)
 *     _o_exit_0 @ 0x140006348 (_o_exit_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _scrt_common_main_seh()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  char v2; // di
  __int64 v3; // rcx
  __int64 v5; // rcx
  _QWORD *dyn_tls_init_callback; // rax
  __int64 v7; // rcx
  void (__fastcall **v8)(_QWORD, __int64); // rbx
  _tls_callback_type *dyn_tls_dtor_callback; // rax
  __int64 v10; // rcx
  _tls_callback_type *v11; // rbx
  int show_window_mode; // ebx
  __int64 v13; // rcx
  WCHAR *wide_winmain_command_line_0; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx

  if ( !(unsigned __int8)_scrt_initialize_crt(1LL) )
  {
    _scrt_fastfail(7LL);
    goto LABEL_19;
  }
  v2 = 0;
  LOBYTE(v0) = _scrt_acquire_startup_lock(v1);
  v3 = (unsigned int)_scrt_current_native_startup_state;
  if ( _scrt_current_native_startup_state == 1 )
  {
LABEL_19:
    _scrt_fastfail(7LL);
    goto LABEL_20;
  }
  if ( _scrt_current_native_startup_state )
  {
    v2 = 1;
  }
  else
  {
    _scrt_current_native_startup_state = 1;
    if ( initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
      return 255LL;
    initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
    _scrt_current_native_startup_state = 2;
  }
  LOBYTE(v3) = v0;
  _scrt_release_startup_lock(v3);
  dyn_tls_init_callback = (_QWORD *)_scrt_get_dyn_tls_init_callback(v5);
  v8 = (void (__fastcall **)(_QWORD, __int64))dyn_tls_init_callback;
  if ( *dyn_tls_init_callback && (unsigned __int8)_scrt_is_nonwritable_in_current_image(dyn_tls_init_callback) )
    (*v8)(0LL, 2LL);
  dyn_tls_dtor_callback = (_tls_callback_type *)_scrt_get_dyn_tls_dtor_callback(v7);
  v11 = dyn_tls_dtor_callback;
  if ( *dyn_tls_dtor_callback && (unsigned __int8)_scrt_is_nonwritable_in_current_image(dyn_tls_dtor_callback) )
    register_thread_local_exe_atexit_callback_0(*v11);
  show_window_mode = (unsigned __int16)_scrt_get_show_window_mode(v10);
  wide_winmain_command_line_0 = (WCHAR *)o__get_wide_winmain_command_line_0(v13);
  v0 = wWinMain(&_ImageBase, 0LL, wide_winmain_command_line_0, show_window_mode);
  if ( !(unsigned __int8)_scrt_is_managed_app(v15) )
LABEL_20:
    o_exit_0(v0);
  if ( !v2 )
    o__cexit_0(v16);
  LOBYTE(v16) = 1;
  _scrt_uninitialize_crt(v16, 0LL);
  return v0;
}
