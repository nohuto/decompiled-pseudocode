/*
 * XREFs of ?consume@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z @ 0x1801FA500
 * Callers:
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801FA470 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18007B894 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::consume(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_8;
    if ( (*(_DWORD *)a1 & 3) == 1 )
    {
      v3 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      *(_QWORD *)(v3 - 16) += a2;
      return;
    }
    if ( (*(_DWORD *)a1 & 3) != 2 )
    {
      if ( (*(_DWORD *)a1 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( a2 != 1 )
LABEL_8:
        *a1 = 2LL;
    }
  }
}
