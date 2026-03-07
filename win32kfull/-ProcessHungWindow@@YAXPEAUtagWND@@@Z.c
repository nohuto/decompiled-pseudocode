void __fastcall ProcessHungWindow(struct tagWND *a1)
{
  struct tagWND *v2; // rbx
  const struct tagTHREADINFO **v3; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v4);
  v2 = ShouldProcessHungWindow(a1);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (const struct tagTHREADINFO **)*((_QWORD *)v2 + 15);
      if ( !v3 || !IsHungWindow(v3) )
        break;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 15);
    }
    _GhostOwnerWindowAndOwnees(v2);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v4);
}
