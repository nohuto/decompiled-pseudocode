/*
 * XREFs of sub_18006A838 @ 0x18006A838
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x180069854 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void sub_18006A838()
{
  void (**i)(void); // rbx

  for ( i = &qword_1801799F8; i < &qword_1801799F8; ++i )
  {
    if ( *i )
      (*i)();
  }
}
