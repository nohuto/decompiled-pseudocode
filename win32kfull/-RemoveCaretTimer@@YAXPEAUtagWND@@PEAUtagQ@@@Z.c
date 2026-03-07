void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 44) )
  {
    FindTimer(a1, (void *)0xFFFF, 2u, 1, 0LL);
    *((_QWORD *)a2 + 44) = 0LL;
  }
}
