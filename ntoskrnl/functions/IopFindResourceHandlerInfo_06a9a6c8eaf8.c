char __fastcall IopFindResourceHandlerInfo(int a1, _WORD *a2, unsigned __int8 a3, _QWORD *a4)
{
  int v5; // ecx
  unsigned __int16 v6; // r10
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  __int64 **v9; // r9
  __int64 *i; // rax

  *a4 = 0LL;
  v5 = a1 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 0;
    v6 = a2[262];
    v7 = 244LL;
    v8 = a2[263];
  }
  else
  {
    v6 = a2[260];
    v7 = 252LL;
    v8 = a2[261];
  }
  v9 = (__int64 **)&a2[v7];
  if ( (v6 & (unsigned __int16)(1 << a3)) != 0 )
    return 1;
  if ( (v8 & (unsigned __int16)(1 << a3)) != 0 || a3 > 0xFu )
  {
    for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
    {
      if ( *((_BYTE *)i + 16) == a3 )
      {
        if ( a3 <= 0xFu || i[3] )
          *a4 = i;
        return 1;
      }
    }
  }
  return 0;
}
