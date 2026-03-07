__int64 __fastcall ShouldComposeWindow(struct tagWND *const a1, struct tagDESKTOP *const a2)
{
  struct tagDESKTOP *v2; // rax
  unsigned int v3; // r9d
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax

  v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 3);
  v3 = 0;
  if ( v2 )
  {
    if ( v2 == a2
      && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
      && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) != 0 )
    {
      if ( IsTopLevelWindow(v5) )
        return 1;
      LOBYTE(v7) = IsDesktopWindow(v6);
      if ( v7 )
        return 1;
    }
  }
  return v3;
}
