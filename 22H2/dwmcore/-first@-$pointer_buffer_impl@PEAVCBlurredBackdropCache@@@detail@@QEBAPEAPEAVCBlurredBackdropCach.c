/*
 * XREFs of ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1800310A4
 * Callers:
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x18002DE20 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002DE80 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?consume@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_J@Z @ 0x18002DF00 (-consume@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAAX_J@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x18002DF48 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x180030F18 (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x180030FB8 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180030FF0 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18003106C (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?size@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ @ 0x1800310E4 (-size@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ.c)
 *     ??1?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ @ 0x1800A6044 (--1-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ.c)
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x1800D1C78 (--1CBlurredBackdropCache@@QEAA@XZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(_QWORD *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 3) == 0 )
    return (unsigned __int64)a1;
  if ( (*(_DWORD *)a1 & 3) != 1 )
  {
    if ( (*(_DWORD *)a1 & 3) == 2 )
      return 0LL;
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    return (unsigned __int64)a1;
  }
  return *a1 & 0xFFFFFFFFFFFFFFFCuLL;
}
