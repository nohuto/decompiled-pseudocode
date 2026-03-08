/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18007B90C
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18007B750 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1801FA558 (-last@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18007B894 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::size(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)a1 & 3) == 0 )
    return 1LL;
  if ( (*(_DWORD *)a1 & 3) == 1 )
    return *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16);
  if ( (*(_DWORD *)a1 & 3u) - 2 > 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  return 0LL;
}
