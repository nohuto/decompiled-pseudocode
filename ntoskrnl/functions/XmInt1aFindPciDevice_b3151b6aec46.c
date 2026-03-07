__int64 __fastcall XmInt1aFindPciDevice(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int8 i; // bp
  int v6; // esi
  unsigned int j; // r14d
  int v8; // ecx
  int v9; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v9 = 0;
  result = 0xFFFFLL;
  if ( *(_WORD *)(a1 + 24) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -125;
  }
  else
  {
    v4 = 0;
    for ( i = 0; i < (unsigned __int8)XmNumberPciBusses; ++i )
    {
      v6 = 0;
      while ( 2 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v4 = v6 & 0x1F | v4 & 0xFFFFFF00 | (32 * (j & 7));
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, int))XmGetPciData)(i, v4, &v9, 0LL, 4);
          v8 = v9;
          if ( (_DWORD)result != 4 )
            v8 = -1;
          v9 = v8;
          if ( v8 == __PAIR32__(*(_WORD *)(a1 + 28), *(_WORD *)(a1 + 32)) )
          {
            result = v1++;
            if ( (_DWORD)result == *(unsigned __int16 *)(a1 + 48) )
            {
              *(_BYTE *)(a1 + 37) = i;
              *(_DWORD *)(a1 + 16) &= ~1u;
              *(_BYTE *)(a1 + 36) = j | (8 * v6);
              *(_BYTE *)(a1 + 25) = 0;
              return result;
            }
          }
        }
        if ( (unsigned int)++v6 < 0x20 )
          continue;
        break;
      }
    }
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -122;
  }
  return result;
}
