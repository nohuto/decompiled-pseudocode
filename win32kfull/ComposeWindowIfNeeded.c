__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1, int a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  void *v8; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (LOBYTE(v4) = IsDesktopWindow((__int64)a1), v4) && (unsigned int)IsWindowDesktopComposed(v5)
    || IsChildWindowDpiBoundaryDesktopComposed(a1) )
  {
    v6 = ComposeWindow(a1, a2 != 0 ? 13 : 5);
    DirtyVisRgnTrackers(a1);
    v8 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v8);
  }
  else
  {
    return 4063234;
  }
  return v6;
}
