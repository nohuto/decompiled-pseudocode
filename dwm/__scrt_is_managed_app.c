/*
 * XREFs of __scrt_is_managed_app @ 0x140005C68
 * Callers:
 *     __scrt_common_main_seh @ 0x140005350 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

bool _scrt_is_managed_app()
{
  HMODULE ModuleHandleW; // rax
  char *v1; // rcx
  bool result; // al

  ModuleHandleW = GetModuleHandleW(0LL);
  result = ModuleHandleW
        && *(_WORD *)ModuleHandleW == 23117
        && (v1 = (char *)ModuleHandleW + *((int *)ModuleHandleW + 15), *(_DWORD *)v1 == 17744)
        && *((_WORD *)v1 + 12) == 523
        && *((_DWORD *)v1 + 33) > 0xEu
        && *((_DWORD *)v1 + 62) != 0;
  return result;
}
