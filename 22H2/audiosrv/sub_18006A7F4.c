/*
 * XREFs of sub_18006A7F4 @ 0x18006A7F4
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180069738 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void sub_18006A7F4()
{
  void (**i)(void); // rbx

  for ( i = qword_1801799E8; i < qword_1801799E8; ++i )
  {
    if ( *i )
      (*i)();
  }
}
