__int64 __fastcall IopLiveDumpLookupProcessFilter(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  _QWORD *v3; // rcx
  char v4; // r8
  _QWORD *i; // rax

  v2 = 0LL;
  v3 = (_QWORD *)(a1 + 1200);
  v4 = 0;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v2 = (unsigned __int64)i;
    if ( i[2] == a2 )
    {
      v4 = 1;
      return v2 & -(__int64)(v4 != 0);
    }
  }
  return v2 & -(__int64)(v4 != 0);
}
