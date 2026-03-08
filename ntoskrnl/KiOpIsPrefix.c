/*
 * XREFs of KiOpIsPrefix @ 0x140361F90
 * Callers:
 *     KiOpDecode @ 0x140361E00 (KiOpDecode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpIsPrefix(__int64 a1, char a2, char *a3)
{
  unsigned int v3; // r9d
  char v6; // bl
  int v7; // r11d
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v11; // r8d
  int v12; // eax
  int v13; // ecx

  v3 = 0;
  v6 = 0;
  v7 = 0;
  if ( !*(_BYTE *)(a1 + 58) && (a2 & 0xF0) == 0x40 )
  {
    v11 = 2048;
    *(_BYTE *)(a1 + 64) = a2;
  }
  else
  {
    v8 = 0LL;
    v9 = KiOpPrefixTable;
    while ( *(_BYTE *)v9 != a2 )
    {
      v8 = (unsigned int)(v8 + 1);
      v9 = (__int64 *)((char *)v9 + 12);
      if ( (unsigned int)v8 >= 0xB )
        goto LABEL_6;
    }
    v11 = *((_DWORD *)KiOpPrefixTable + 3 * v8 + 1);
    v7 = *((_DWORD *)&KiOpPrefixTable[1] + 3 * v8);
    if ( !v11 )
      goto LABEL_6;
  }
  v12 = *(_DWORD *)(a1 + 48);
  if ( (v12 & v11) != 0 )
    return (unsigned int)-1073741795;
  v13 = *(_DWORD *)(a1 + 52);
  if ( (v13 & v7) != 0 )
    return (unsigned int)-1073741795;
  v6 = 1;
  *(_DWORD *)(a1 + 48) = v11 | v12;
  *(_DWORD *)(a1 + 52) = v7 | v13;
LABEL_6:
  *a3 = v6;
  return v3;
}
