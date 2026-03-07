unsigned __int64 __fastcall PfSnFindImageFileName(unsigned __int16 *a1, _DWORD *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r11
  int v4; // r8d
  __int64 v5; // r10
  _WORD *v6; // rax

  v2 = 0LL;
  v3 = *((_QWORD *)a1 + 1);
  v4 = 0;
  v5 = *a1 >> 1;
  v6 = (_WORD *)(v3 - 2 + 2 * v5);
  if ( (unsigned __int64)v6 >= v3 )
  {
    do
    {
      if ( *v6 == 92 )
        break;
      ++v4;
      --v6;
    }
    while ( (unsigned __int64)v6 >= v3 );
    if ( v4 )
    {
      *a2 = v4;
      return v3 + 2LL * (unsigned int)(v5 - v4);
    }
  }
  return v2;
}
