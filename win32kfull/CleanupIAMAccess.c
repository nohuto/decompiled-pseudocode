void __fastcall CleanupIAMAccess(struct tagDESKTOP *this)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 i; // rbx
  __int64 j; // rdi
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *Blink; // rax

  Flink = gIAMThreadList.Flink;
  while ( Flink != &gIAMThreadList )
  {
    v5 = Flink;
    Flink = Flink->Flink;
    if ( !this || (struct tagDESKTOP *)v5[1].Blink == this )
    {
      if ( Flink->Blink != v5 || (Blink = v5->Blink, Blink->Flink != v5) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      Win32FreePool(v5);
    }
  }
  if ( this )
  {
    CleanupShellWindowManagement(this);
  }
  else
  {
    for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
    {
      for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
        CleanupShellWindowManagement((struct tagDESKTOP *)j);
    }
  }
}
