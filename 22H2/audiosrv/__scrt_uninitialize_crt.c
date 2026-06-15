/*
 * XREFs of __scrt_uninitialize_crt @ 0x18006A0A0
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x180069854 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     sub_18006CAC8 @ 0x18006CAC8 (sub_18006CAC8.c)
 */

char __fastcall _scrt_uninitialize_crt(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  if ( !byte_18019E191 || !a2 )
  {
    sub_18006CAC8(a1);
    LOBYTE(v3) = v2;
    sub_18006CAC8(v3);
  }
  return 1;
}
