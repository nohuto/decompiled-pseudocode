__int64 __fastcall DpiGetDbgInfoAdapters(__int64 a1)
{
  unsigned int v1; // r10d
  _QWORD *v3; // r9
  __int64 *v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // ecx

  v1 = 0;
  v3 = (_QWORD *)qword_1C013B4C8;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      if ( v1 >= 7 )
        break;
      v4 = (__int64 *)v3[7];
      if ( (__int64 *)*v4 != v4 )
      {
        do
        {
          if ( *((_DWORD *)v4 + 4) == 1953656900 && *((_DWORD *)v4 + 5) == 2 && *((_DWORD *)v4 + 59) == 2 )
          {
            if ( v1 >= 7 )
              break;
            v5 = 2LL * v1;
            *(_DWORD *)(a1 + 8 * v5) = *(_DWORD *)(v4[489] + 2820);
            *(_DWORD *)(a1 + 8 * v5 + 4) = *((_DWORD *)v4 + 281);
            *(_DWORD *)(a1 + 8 * v5 + 8) = *((_DWORD *)v4 + 282);
            v6 = (*(_DWORD *)(v4[489] + 200) == 1) | *(_DWORD *)(a1 + 16LL * v1 + 12) & 0xFFFFFFFE;
            *(_DWORD *)(a1 + 8 * v5 + 12) = v6;
            *(_DWORD *)(a1 + 8 * v5 + 12) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * *((_BYTE *)v4 + 1152))) & 2;
            ++v1;
          }
          v4 = (__int64 *)*v4;
        }
        while ( *v4 != v3[7] );
      }
      v3 = (_QWORD *)*v3;
    }
    while ( *v3 != qword_1C013B4C8 );
  }
  return 0LL;
}
