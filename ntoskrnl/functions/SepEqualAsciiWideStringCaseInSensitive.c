char __fastcall SepEqualAsciiWideStringCaseInSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r8
  char *v3; // rcx
  char *v4; // r9
  char *v5; // r10
  signed __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // edx

  v2 = *a1;
  if ( (_DWORD)v2 == *a2 )
  {
    v3 = (char *)*((_QWORD *)a1 + 1);
    v4 = (char *)*((_QWORD *)a2 + 1);
    v5 = &v3[v2];
    if ( v2 >= 8 )
    {
      do
      {
        if ( *(_QWORD *)v3 != *(_QWORD *)v4 )
          break;
        LODWORD(v2) = v2 - 8;
        if ( !(_DWORD)v2 )
          return 1;
        v3 += 8;
        v4 += 8;
      }
      while ( (unsigned int)v2 >= 8 );
    }
    if ( v3 >= v5 )
      return 1;
    v6 = v4 - v3;
    while ( 1 )
    {
      v7 = *(unsigned __int16 *)v3;
      v8 = *(unsigned __int16 *)&v3[v6];
      if ( v7 != v8 )
      {
        if ( v7 >= 0x61 && v7 <= 0x7A )
          v7 -= 32;
        if ( v8 >= 0x61 && v8 <= 0x7A )
          v8 -= 32;
        if ( v7 != v8 )
          break;
      }
      v3 += 2;
      if ( v3 >= v5 )
        return 1;
    }
  }
  return 0;
}
