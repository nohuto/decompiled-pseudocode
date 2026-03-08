/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E49D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C007EE00 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00F1F00 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostRitSound @ 0x1C0241DC8 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C0242AAC (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (dword_1C02D159C & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, a2, 0LL);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((unsigned __int8 *)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL, 0LL);
  v4 = dword_1C02D15A8;
  if ( dword_1C02D15A8 )
  {
    if ( dword_1C02D15A4 )
      v4 = dword_1C02D15A4;
    v5 = ApiSetEditionSetAccessibilityTimer(a3, v4, xxxFKRepeatRateTimer);
    gtmridFKAcceptanceDelay = 0LL;
    gtmridFKResponse = v5;
  }
  else
  {
    gdwPUDFlags |= 0x800u;
  }
}
