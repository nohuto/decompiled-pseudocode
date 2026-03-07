bool __fastcall CitpProgramIdIsEqual(const struct _CIT_PROGRAM_ID *a1, const struct _CIT_PROGRAM_ID *a2)
{
  unsigned __int16 *v2; // r10
  unsigned __int16 *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r11
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  int v10; // eax

  if ( *((_QWORD *)a1 + 2) != *((_QWORD *)a2 + 2) )
    return 0;
  if ( *((_DWORD *)a1 + 6) != *((_DWORD *)a2 + 6) )
    return 0;
  if ( *((_DWORD *)a1 + 7) != *((_DWORD *)a2 + 7) )
    return 0;
  if ( *((_DWORD *)a1 + 8) != *((_DWORD *)a2 + 8) )
    return 0;
  v2 = *(unsigned __int16 **)a1;
  if ( (*(_QWORD *)a1 == 0LL) != (*(_QWORD *)a2 == 0LL) )
    return 0;
  v3 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a2 + 1);
  if ( (v3 == 0LL) != (v4 == 0) )
    return 0;
  if ( v2 )
  {
    v5 = *(_QWORD *)a2 - (_QWORD)v2;
    do
    {
      v6 = *(unsigned __int16 *)((char *)v2 + v5);
      v7 = *v2 - v6;
      if ( v7 )
        break;
      ++v2;
    }
    while ( v6 );
    if ( v7 )
      return 0;
  }
  if ( !v3 )
    return 1;
  v8 = v4 - (_QWORD)v3;
  do
  {
    v9 = *(unsigned __int16 *)((char *)v3 + v8);
    v10 = *v3 - v9;
    if ( v10 )
      break;
    ++v3;
  }
  while ( v9 );
  return !v10;
}
