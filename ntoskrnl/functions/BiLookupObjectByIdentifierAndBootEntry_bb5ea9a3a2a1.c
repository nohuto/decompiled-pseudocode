__int64 __fastcall BiLookupObjectByIdentifierAndBootEntry(_QWORD *a1, _QWORD *a2, int a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  int v6; // r11d
  __int64 v7; // rcx

  v4 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return 3221226021LL;
  while ( 1 )
  {
    v6 = *((_DWORD *)v4 + 12);
    if ( (v6 & 4) != 0 )
    {
      v7 = *a2 - v4[2];
      if ( *a2 == v4[2] )
        v7 = a2[1] - v4[3];
      if ( !v7 && (v6 & 3) != 0 && *((_DWORD *)v4 + 8) == a3 )
        break;
    }
    v4 = (_QWORD *)*v4;
    if ( v4 == a1 )
      return 3221226021LL;
  }
  *a4 = v4;
  return 0LL;
}
