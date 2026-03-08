/*
 * XREFs of SymCryptFdefRawIsEqualUint32 @ 0x1403FFF04
 * Callers:
 *     SymCryptFdefModNegGeneric @ 0x1403FF0D0 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefIntIsEqualUint32 @ 0x1403FFD50 (SymCryptFdefIntIsEqualUint32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawIsEqualUint32(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r8d
  unsigned int v4; // edx
  _DWORD *v5; // rcx
  __int64 v6; // rdx

  v3 = *a1 ^ a3;
  v4 = 16 * a2;
  if ( v4 > 1 )
  {
    v5 = a1 + 1;
    v6 = v4 - 1;
    do
    {
      v3 |= *v5++;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)~((unsigned __int64)-(__int64)v3 >> 32);
}
