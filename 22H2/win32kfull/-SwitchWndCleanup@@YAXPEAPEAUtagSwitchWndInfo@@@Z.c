/*
 * XREFs of ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01C9428
 * Callers:
 *     RemoveResidualSwitchWindowInfos @ 0x1C013BE00 (RemoveResidualSwitchWindowInfos.c)
 *     RemoveSwitchWindowInfo @ 0x1C01CA0C0 (RemoveSwitchWindowInfo.c)
 * Callees:
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 */

void __fastcall SwitchWndCleanup(struct tagSwitchWndInfo **a1)
{
  struct tagBWL *v2; // rcx

  v2 = (struct tagBWL *)*((_QWORD *)*a1 + 2);
  if ( v2 )
  {
    FreeHwndList(v2);
    *((_QWORD *)*a1 + 2) = 0LL;
  }
  Win32FreePool(*a1);
  *a1 = 0LL;
}
