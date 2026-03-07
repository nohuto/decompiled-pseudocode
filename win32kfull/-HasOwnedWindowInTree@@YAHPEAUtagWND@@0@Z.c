__int64 __fastcall HasOwnedWindowInTree(struct tagWND **a1, struct tagWND *a2)
{
  struct tagWND *i; // rbx

  if ( (unsigned int)IsOwnee((struct tagWND *)a1, a2) )
    return 1LL;
  for ( i = a1[14]; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( (unsigned int)HasOwnedWindowInTree(i, a2) )
      return 1LL;
  }
  return 0LL;
}
