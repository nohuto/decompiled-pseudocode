/*
 * XREFs of __scrt_initialize_crt @ 0x180069ECC
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180069738 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     __isa_available_init @ 0x18006A88C (__isa_available_init.c)
 *     sub_18006CAC8 @ 0x18006CAC8 (sub_18006CAC8.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = byte_18019E191;
  if ( !a1 )
    v1 = 1;
  byte_18019E191 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)sub_18006CAC8(v2) )
    return 0;
  if ( !(unsigned __int8)sub_18006CAC8(v3) )
  {
    sub_18006CAC8(0LL);
    return 0;
  }
  return 1;
}
