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
