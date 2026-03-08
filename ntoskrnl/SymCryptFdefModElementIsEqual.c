/*
 * XREFs of SymCryptFdefModElementIsEqual @ 0x1403FE710
 * Callers:
 *     SymCryptModElementIsEqual @ 0x1403F3B38 (SymCryptModElementIsEqual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModElementIsEqual(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r10
  int v7; // ecx

  v3 = 0;
  v4 = 16 * *(_DWORD *)(a1 + 4);
  if ( v4 )
  {
    v5 = a2 - (_QWORD)a3;
    v6 = v4;
    do
    {
      v7 = *a3 ^ *(_DWORD *)((char *)a3 + v5);
      ++a3;
      v3 |= v7;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)~((unsigned __int64)-(__int64)v3 >> 32);
}
