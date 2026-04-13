/*
 * XREFs of ___scrt_initialize_default_local_stdio_options @ 0x10004343
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 * Callees:
 *     ___local_stdio_printf_options @ 0x10003ED1 (___local_stdio_printf_options.c)
 *     ___local_stdio_scanf_options @ 0x10003EFF (___local_stdio_scanf_options.c)
 */

unsigned __int64 *__scrt_initialize_default_local_stdio_options()
{
  unsigned __int64 *v0; // eax
  int v1; // ecx
  unsigned __int64 *result; // eax
  int v3; // ecx

  v0 = __local_stdio_printf_options();
  v1 = *((_DWORD *)v0 + 1);
  *(_DWORD *)v0 |= 4u;
  *((_DWORD *)v0 + 1) = v1;
  result = __local_stdio_scanf_options();
  v3 = *((_DWORD *)result + 1);
  *(_DWORD *)result |= 2u;
  *((_DWORD *)result + 1) = v3;
  return result;
}
