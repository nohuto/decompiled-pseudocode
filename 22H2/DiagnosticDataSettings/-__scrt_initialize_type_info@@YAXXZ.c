/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x1000432B
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void __cdecl __scrt_initialize_type_info()
{
  InitializeSListHead(&__type_info_root_node);
}
