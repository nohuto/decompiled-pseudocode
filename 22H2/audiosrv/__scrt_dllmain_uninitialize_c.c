/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180069E78
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x180069854 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18006AA1C (-__uncaught_exception@@YA_NXZ.c)
 *     _o__cexit @ 0x18006AAC6 (_o__cexit.c)
 *     sub_18006CAD4 @ 0x18006CAD4 (sub_18006CAD4.c)
 */

__int64 _scrt_dllmain_uninitialize_c()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
    return o__execute_onexit_table(&qword_18019E160);
  result = sub_18006CAD4();
  if ( !(_DWORD)result )
    return o__cexit();
  return result;
}
