_QWORD *__fastcall DxLddmFindProcessEntry(_QWORD *a1, int a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  while ( *((_DWORD *)v2 + 4) != a2 )
  {
    v2 = (_QWORD *)*v2;
    if ( v2 == a1 )
      return 0LL;
  }
  return v2;
}
