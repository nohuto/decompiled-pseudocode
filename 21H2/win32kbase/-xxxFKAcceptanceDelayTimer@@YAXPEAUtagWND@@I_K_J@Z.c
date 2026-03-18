/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B9A90
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E7BD0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostRitSound @ 0x1C020AA7C (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C020B760 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (xmmword_1C0295A4C & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, a2, 0LL);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((unsigned __int8 *)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL, 0LL);
  v4 = HIDWORD(xmmword_1C0295A4C);
  if ( HIDWORD(xmmword_1C0295A4C) )
  {
    if ( DWORD2(xmmword_1C0295A4C) )
      v4 = DWORD2(xmmword_1C0295A4C);
    v5 = ApiSetEditionSetAccessibilityTimer(a3, v4, xxxFKRepeatRateTimer);
    gtmridFKAcceptanceDelay = 0LL;
    gtmridFKResponse = v5;
  }
  else
  {
    gdwPUDFlags |= 0x800u;
  }
}
