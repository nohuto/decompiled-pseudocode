/*
 * XREFs of ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180069738
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1800696E0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180069D2C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180069D6C (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x180069DA8 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x180069ECC (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x180069FD4 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18006A074 (__scrt_release_startup_lock.c)
 *     sub_18006A634 @ 0x18006A634 (sub_18006A634.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18006A65C (__scrt_initialize_default_local_stdio_options.c)
 *     sub_18006A680 @ 0x18006A680 (sub_18006A680.c)
 *     __scrt_fastfail @ 0x18006A6A0 (__scrt_fastfail.c)
 *     sub_18006A7F4 @ 0x18006A7F4 (sub_18006A7F4.c)
 *     _initterm @ 0x18006AA36 (_initterm.c)
 *     _initterm_e @ 0x18006AA42 (_initterm_e.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_crt_process_attach(HINSTANCE a1, void *const a2)
{
  char v2; // bl
  char v3; // di
  __int64 v4; // rcx
  _QWORD *v5; // rax

  if ( !(unsigned __int8)_scrt_initialize_crt(0LL) )
    return 0LL;
  v2 = _scrt_acquire_startup_lock();
  v3 = 1;
  if ( dword_18019E154 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18006984ELL);
  }
  dword_18019E154 = 1;
  if ( (unsigned __int8)_scrt_dllmain_before_initialize_c() )
  {
    sub_18006A7F4();
    sub_18006A634();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( (unsigned __int8)_scrt_dllmain_after_initialize_c() )
      {
        initterm((_PVFV *)&qword_1801575A8, (_PVFV *)&qword_180157718);
        dword_18019E154 = 2;
        v3 = 0;
      }
    }
  }
  LOBYTE(v4) = v2;
  _scrt_release_startup_lock(v4);
  if ( v3 )
    return 0LL;
  v5 = (_QWORD *)sub_18006A680();
  if ( *v5 )
  {
    if ( (unsigned __int8)_scrt_is_nonwritable_in_current_image(v5) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_18019DBD0;
  return 1LL;
}
