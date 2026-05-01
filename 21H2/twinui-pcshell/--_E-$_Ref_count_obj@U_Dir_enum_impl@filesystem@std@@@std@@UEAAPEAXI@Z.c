/*
 * XREFs of ??_E?$_Ref_count_obj@U_Dir_enum_impl@filesystem@std@@@std@@UEAAPEAXI@Z @ 0x18011BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<std::filesystem::_Dir_enum_impl>::`vector deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
