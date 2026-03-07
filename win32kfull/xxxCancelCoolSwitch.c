__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  __int64 *v1; // rax

  if ( gspwndAltTab )
    v0 = *((_QWORD *)gspwndAltTab + 2);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, gspwndAltTab, -4, 0, 1);
  v1 = (__int64 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v1 )
    return 0LL;
  xxxDestroyWindow(v1);
  return 1LL;
}
