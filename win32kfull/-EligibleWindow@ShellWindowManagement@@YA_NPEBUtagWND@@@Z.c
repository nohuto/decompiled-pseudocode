/*
 * XREFs of ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0097B88
 * Callers:
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0041C80 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0097C84 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::EligibleWindow @ 0x1C0097B28 (_anonymous_namespace_--EligibleWindow.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00FAA10 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

char __fastcall ShellWindowManagement::EligibleWindow(
        ShellWindowManagement **this,
        const struct tagWND *a2,
        unsigned int a3)
{
  struct tagWND *v3; // r9
  char v4; // bl

  if ( !ShellWindowManagement::BehaviorEnabled(this[3], (const struct tagDESKTOP *)0x1FF, a3) )
    return 0;
  v4 = 1;
  if ( !anonymous_namespace_::EligibleWindow(v3, 1) )
    return 0;
  return v4;
}
