__int64 __fastcall EtwpPrepareHeader(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rcx

  v3 = *(_DWORD *)(a2 + 4);
  v4 = 0;
  if ( !v3 )
    v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v3;
  if ( a3 != 1 && v3 == 72 )
    return 2147483682LL;
  *(_WORD *)(a2 + 52) = a3 | 0x20;
  if ( *(_QWORD *)(a1 + 800) || (a3 & 0x40) == 0 )
  {
    v6 = *(unsigned int *)(a2 + 48);
    if ( *(_DWORD *)a2 - (int)v6 > 0 )
      memset((void *)(a2 + v6), 255, *(_DWORD *)a2 - (int)v6);
  }
  if ( *(_DWORD *)(a2 + 48) == 72 )
    return (unsigned int)-2147483614;
  return v4;
}
