void __fastcall _GhostOwnerWindowAndOwnees(struct tagWND **a1)
{
  struct tagWND *i; // rbx
  struct tagWND *j; // rax

  if ( ShouldProcessHungWindow((struct tagWND *)a1) )
    _GhostWindow((struct tagWND *)a1);
  if ( IsNonImmersiveBand((__int64)a1) )
  {
    for ( i = a1[12]; i; i = (struct tagWND *)*((_QWORD *)i + 12) )
    {
      for ( j = (struct tagWND *)*((_QWORD *)i + 15); j; j = (struct tagWND *)*((_QWORD *)j + 15) )
      {
        if ( j == (struct tagWND *)a1 )
        {
          if ( ShouldProcessHungWindow(i) == i )
            _GhostWindow(i);
          break;
        }
      }
    }
  }
}
