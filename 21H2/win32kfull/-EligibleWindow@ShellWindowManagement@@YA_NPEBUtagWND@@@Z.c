/*
 * XREFs of ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0109B50
 * Callers:
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0071CD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0109AC4 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C006A184 (_anonymous_namespace_--EligibleWindow.c)
 */

char __fastcall ShellWindowManagement::EligibleWindow(ShellWindowManagement **this, const struct tagWND *a2)
{
  struct tagWND *v2; // r9
  char v3; // bl

  if ( !ShellWindowManagement::BehaviorEnabled(this[3], (const struct tagDESKTOP *)0x1FF) )
    return 0;
  v3 = 1;
  if ( !anonymous_namespace_::EligibleWindow(v2, 1) )
    return 0;
  return v3;
}
