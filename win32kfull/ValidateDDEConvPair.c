struct tagWND *__fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *result; // rax
  unsigned int v4; // ebx

  result = (struct tagWND *)ValidateHwnd(a1);
  v4 = 0;
  if ( result )
  {
    LOBYTE(v4) = FindDdeConv(result, a2) != 0LL;
    return (struct tagWND *)v4;
  }
  return result;
}
