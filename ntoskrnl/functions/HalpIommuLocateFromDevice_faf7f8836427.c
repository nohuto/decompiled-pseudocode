__int64 __fastcall HalpIommuLocateFromDevice(__int64 a1, ULONG_PTR *a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  unsigned int v4; // ebx
  char v6; // al
  ULONG_PTR v7; // rsi
  ULONG_PTR i; // rdi

  v3 = HalpIommuList;
  v4 = 0;
  v6 = 0;
  v7 = 0LL;
  while ( (ULONG_PTR *)v3 != &HalpIommuList )
  {
    v7 = v3;
    if ( *(_QWORD *)(v3 + 208) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v3 + 208))(*(_QWORD *)(v3 + 16), a1, 0LL, 0LL);
      if ( v6 )
        break;
    }
    v3 = *(_QWORD *)v3;
  }
  for ( i = HalpIommuList; (ULONG_PTR *)i != &HalpIommuList; i = *(_QWORD *)i )
  {
    if ( v6 )
      goto LABEL_11;
    v7 = i;
    if ( *(_QWORD *)(i + 208) )
    {
      LOBYTE(a3) = 1;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(i + 208))(*(_QWORD *)(i + 16), a1, a3, 0LL);
      if ( v6 )
        goto LABEL_11;
    }
  }
  if ( v6 )
  {
LABEL_11:
    *a2 = v7;
    return v4;
  }
  return (unsigned int)-1073741275;
}
