struct tagWND *__fastcall GetRealOwner(struct tagWND *a1)
{
  struct tagWND *v1; // rax
  struct tagWND *v2; // rdx
  bool i; // zf

  v1 = (struct tagWND *)*((_QWORD *)a1 + 15);
  v2 = (struct tagWND *)*((_QWORD *)a1 + 13);
  for ( i = a1 == v1; !i; i = v1 == v2 )
  {
    a1 = v1;
    if ( !v1 )
      break;
    v1 = (struct tagWND *)*((_QWORD *)v1 + 13);
  }
  return a1;
}
