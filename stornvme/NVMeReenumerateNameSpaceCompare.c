__int64 __fastcall NVMeReenumerateNameSpaceCompare(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rsi
  unsigned int v10; // r9d
  __int64 v11; // rbp
  bool IsLunActive; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v4 = 0;
  v6 = 0LL;
  do
  {
    v10 = *(_DWORD *)(a2 + 4 * v6 + 2048);
    if ( !v10 )
      break;
    if ( v10 <= a3 )
    {
      _mm_lfence();
      v11 = v10 - 1;
      IsLunActive = NVMeIsLunActive(*(_QWORD *)(a1 + 8 * v11 + 1952));
      if ( v14 )
      {
        if ( !IsLunActive )
        {
          *(_DWORD *)(v14 + 20) |= 8u;
          goto LABEL_20;
        }
        if ( *(_DWORD *)(v13 + 52) != *(_DWORD *)(v14 + 52) )
        {
          *(_DWORD *)(v14 + 20) |= 0x50u;
          goto LABEL_20;
        }
        if ( *(_QWORD *)(v13 + 56) != *(_QWORD *)(v14 + 56)
          || *(_WORD *)(v13 + 92) != *(_WORD *)(v14 + 92)
          || *(_BYTE *)(v13 + 64) != *(_BYTE *)(v14 + 64)
          || *(_DWORD *)(v13 + 48) != *(_DWORD *)(v14 + 48)
          || *(_BYTE *)(v13 + 65) != *(_BYTE *)(v14 + 65)
          || *(_BYTE *)(v13 + 66) != *(_BYTE *)(v14 + 66)
          || *(_BYTE *)(v13 + 10) != *(_BYTE *)(v14 + 10) )
        {
          *(_DWORD *)(v14 + 20) |= 0x10u;
LABEL_20:
          ++v4;
          if ( a4 )
            *a4 = v15;
          goto LABEL_22;
        }
        StorPortExtendedFunction(1LL, a1, v14, v15);
        *(_QWORD *)(a2 + 8 * v11 + 8) = 0LL;
      }
      else if ( IsLunActive )
      {
        *(_DWORD *)(v13 + 20) |= 0x20u;
        goto LABEL_20;
      }
    }
LABEL_22:
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 0x400 );
  if ( v4 != 1 )
    *a4 = 0;
  return v4;
}
