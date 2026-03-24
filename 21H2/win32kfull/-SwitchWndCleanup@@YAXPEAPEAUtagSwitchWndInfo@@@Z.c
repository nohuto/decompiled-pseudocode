/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F301C
 * Callers:
 *     RemoveResidualSwitchWindowInfos @ 0x1C0169590 (RemoveResidualSwitchWindowInfos.c)
 *     RemoveSwitchWindowInfo @ 0x1C01F3CE0 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagBWL ***a1)
{
  struct tagBWL **v2; // rcx

  v2 = *a1;
  if ( v2[2] )
  {
    FreeHwndList(v2[2]);
    (*a1)[2] = 0LL;
    v2 = *a1;
  }
  Win32FreePool(v2);
  *a1 = 0LL;
}
