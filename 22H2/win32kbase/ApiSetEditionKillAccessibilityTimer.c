/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x1C0206BD0
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C00A30C0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B5CE0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B5E30 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B6240 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1C01B6460 (-StopFilterKeysTimers@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B64B0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C01B7730 (ResetAccessibilityCountersOnMouseInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C0296428 && (int)qword_1C0296428() >= 0 && qword_1C0296430 )
    return (unsigned int)qword_1C0296430(0LL, a2);
  return v2;
}
