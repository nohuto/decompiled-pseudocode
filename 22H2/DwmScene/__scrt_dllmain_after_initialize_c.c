/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x18011E1F0
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18011E800 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     ?raw_length@charNode@@UEBAHXZ @ 0x180024830 (-raw_length@charNode@@UEBAHXZ.c)
 *     _o__configure_narrow_argv @ 0x18011E005 (_o__configure_narrow_argv.c)
 *     _o__initialize_narrow_environment @ 0x18011E01D (_o__initialize_narrow_environment.c)
 *     __isa_available_init @ 0x18011F0E0 (__isa_available_init.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18011F25C (-__uncaught_exception@@YA_NXZ.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  int v0; // eax
  charNode *v1; // rcx

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    _isa_available_init();
  }
  else
  {
    charNode::raw_length(v1);
    if ( (unsigned int)o__configure_narrow_argv() )
      return 0;
    o__initialize_narrow_environment();
  }
  return 1;
}
