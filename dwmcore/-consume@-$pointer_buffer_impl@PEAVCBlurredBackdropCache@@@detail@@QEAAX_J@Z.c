/*
 * XREFs of ?consume@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_J@Z @ 0x18002DE10
 * Callers:
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002DD90 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x18002DE58 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030FB4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::consume(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (*a1 & 3) == 0 )
      goto LABEL_8;
    if ( (*a1 & 3) == 1 )
    {
      v3 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
      *(_QWORD *)(v3 - 16) += a2;
      return;
    }
    if ( (*a1 & 3) != 2 )
    {
      if ( (*a1 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( a2 != 1 )
LABEL_8:
        *(_QWORD *)a1 = 2LL;
    }
  }
}
