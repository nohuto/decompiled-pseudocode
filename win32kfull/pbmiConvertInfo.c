/*
 * XREFs of pbmiConvertInfo @ 0x1C02C7738
 * Callers:
 *     GreSetDIBits @ 0x1C02E0580 (GreSetDIBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pbmiConvertInfo(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  char *v10; // r8
  _BYTE *v11; // rdx
  unsigned __int16 v12; // ax
  char v13; // al

  v4 = a1[5];
  if ( v4 == 1 )
  {
    v6 = 2;
  }
  else if ( a1[5] == 4 )
  {
    v6 = 16;
  }
  else if ( a1[5] == 8 )
  {
    v6 = 256;
  }
  else
  {
    v6 = 0;
    if ( v4 != 16 && v4 != 24 && v4 != 32 )
      return 0LL;
  }
  v7 = Win32AllocPool((unsigned int)(4 * v6 + 40), 1886221383LL, a3, a4);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  *(_DWORD *)v7 = 40;
  v10 = (char *)(a1 + 6);
  v11 = (_BYTE *)(v7 + 40);
  *(_DWORD *)(v7 + 4) = a1[2];
  *(_DWORD *)(v7 + 8) = a1[3];
  *(_WORD *)(v7 + 12) = a1[4];
  v12 = a1[5];
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = 0;
  *(_DWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 28) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 36) = 0;
  for ( *(_WORD *)(v8 + 14) = v12; v6; --v6 )
  {
    v11[2] = v10[2];
    v11[1] = v10[1];
    v13 = *v10;
    v10 += 3;
    *v11 = v13;
    v11[3] = 0;
    v11 += 4;
  }
  return v8;
}
