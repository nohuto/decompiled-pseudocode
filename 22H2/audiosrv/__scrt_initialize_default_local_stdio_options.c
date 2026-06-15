/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x18006A65C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180069738 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     sub_18006954C @ 0x18006954C (sub_18006954C.c)
 *     sub_180069694 @ 0x180069694 (sub_180069694.c)
 */

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_18006954C();
  *v0 |= 4uLL;
  result = sub_180069694();
  *result |= 2uLL;
  return result;
}
