/*
 * XREFs of ?size@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ @ 0x180030FF4
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x18002DE58 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030F7C (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030FB4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::size(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_DWORD *)a1 & 3) == 0 )
    return 1LL;
  if ( (*(_DWORD *)a1 & 3) == 1 )
    return *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16);
  if ( (*(_DWORD *)a1 & 3u) - 2 > 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  return 0LL;
}
