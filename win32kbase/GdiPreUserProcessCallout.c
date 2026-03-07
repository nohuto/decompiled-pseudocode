_QWORD *__fastcall GdiPreUserProcessCallout(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    a1[10] = 0LL;
    result = a1 + 28;
    a1[29] = a1 + 28;
    a1[28] = a1 + 28;
  }
  return result;
}
