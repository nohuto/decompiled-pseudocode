struct tagWND *__fastcall GetNextLayeredWindowSubtree(struct tagWND *a1)
{
  struct tagWND *result; // rax
  struct tagWND *i; // rbx

  result = 0LL;
  for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    result = GetNextLayeredWindowSubtree(*((struct tagWND **)i + 14));
    if ( result )
      break;
    if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 26LL) & 8) != 0 )
      return i;
  }
  return result;
}
