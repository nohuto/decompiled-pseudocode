/*
 * XREFs of ApiSetEditionSetAccessibilityTimer @ 0x1C0207894
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C00A30C0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C00E3A90 (-AccessTimeOut@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B5CE0 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B5E30 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B64B0 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B67B0 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6870 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01B69F0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6B80 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionSetAccessibilityTimer(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx

  v4 = 0LL;
  if ( qword_1C0296418 && (int)qword_1C0296418() >= 0 && qword_1C0296420 )
    return qword_1C0296420(a1, a2, a3, a4);
  return v4;
}
