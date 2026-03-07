__int64 __fastcall IsOwnee(struct tagWND **a1, struct tagWND *a2)
{
  struct tagWND *v2; // rax
  struct tagWND *v3; // rax

  if ( a1 )
  {
    do
    {
      v2 = (struct tagWND *)a1;
      do
      {
        if ( v2 == a2 )
          return 1LL;
        v2 = (struct tagWND *)*((_QWORD *)v2 + 13);
      }
      while ( v2 );
      v3 = a1[15];
      if ( v3 == (struct tagWND *)a1 )
        break;
      a1 = (struct tagWND **)a1[15];
    }
    while ( v3 );
  }
  return 0LL;
}
