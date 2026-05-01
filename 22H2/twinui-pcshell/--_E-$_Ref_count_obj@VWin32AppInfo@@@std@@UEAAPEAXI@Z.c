/*
 * XREFs of ??_E?$_Ref_count_obj@VWin32AppInfo@@@std@@UEAAPEAXI@Z @ 0x1804C8810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<Win32AppInfo>::`vector deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
