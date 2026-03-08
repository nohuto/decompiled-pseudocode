/*
 * XREFs of SymCryptFdefIntBitsizeOfValue @ 0x1403FFB50
 * Callers:
 *     SymCryptIntBitsizeOfValue @ 0x1403F3750 (SymCryptIntBitsizeOfValue.c)
 * Callees:
 *     SymCryptFdefBitsizeOfUint32 @ 0x1403FF94C (SymCryptFdefBitsizeOfUint32.c)
 */

__int64 __fastcall SymCryptFdefIntBitsizeOfValue(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // r11d
  unsigned int v5; // r9d
  _DWORD *v6; // r10

  v2 = 0;
  v3 = 0;
  v4 = -1;
  v5 = *(_DWORD *)(a1 + 4) << 6 >> 2;
  if ( v5 )
  {
    v6 = (_DWORD *)(a1 + 4 * (v5 + 8LL));
    do
    {
      v2 |= --v5 & v4 & ((unsigned __int64)-(__int64)(unsigned int)*--v6 >> 32);
      v3 |= *v6 & v4 & ((unsigned __int64)-(__int64)(unsigned int)*v6 >> 32);
      v4 &= ~(v4 & ((unsigned __int64)-(__int64)(unsigned int)*v6 >> 32));
    }
    while ( v5 );
  }
  return 32 * v2 + (unsigned int)SymCryptFdefBitsizeOfUint32(v3);
}
