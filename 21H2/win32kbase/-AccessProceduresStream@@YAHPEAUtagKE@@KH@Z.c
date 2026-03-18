/*
 * XREFs of ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E7BD0
 * Callers:
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B9A90 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B9B50 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01BAA50 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01BADF0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01BB060 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessProceduresStream(struct tagKE *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rdi

  v3 = a3;
  if ( a3 >= 5 )
    return 1LL;
  for ( i = &off_1C024B530[a3]; (unsigned int)(*i)(a1, a2, ++v3); ++i )
  {
    if ( v3 >= 5 )
      return 1LL;
  }
  return 0LL;
}
