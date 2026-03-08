/*
 * XREFs of SymCryptWidthNafRecoding @ 0x140404004
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 * Callees:
 *     SymCryptIntAddUint32 @ 0x1403F3720 (SymCryptIntAddUint32.c)
 *     SymCryptIntDivPow2 @ 0x1403F380C (SymCryptIntDivPow2.c)
 *     SymCryptIntGetValueLsbits32 @ 0x1403F3884 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntSubUint32 @ 0x1403F39AC (SymCryptIntSubUint32.c)
 */

__int64 __fastcall SymCryptWidthNafRecoding(char a1, __int64 a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  __int64 result; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // r15d
  int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned int v12; // eax

  result = a5;
  v6 = a4;
  v7 = 1 << (a1 - 1);
  v9 = ~(-1 << a1);
  if ( a5 )
  {
    v10 = a3 - (_QWORD)a4;
    v11 = a5;
    do
    {
      v12 = v9 & SymCryptIntGetValueLsbits32(a2);
      if ( (v12 & 1) != 0 )
      {
        if ( v12 <= v7 )
        {
          *v6 = 1;
          *(_DWORD *)((char *)v6 + v10) = v12;
          SymCryptIntSubUint32();
        }
        else
        {
          *v6 = -1;
          *(_DWORD *)((char *)v6 + v10) = v9 + 1 - v12;
          SymCryptIntAddUint32();
        }
      }
      else
      {
        *(_DWORD *)((char *)v6 + v10) = 0;
        *v6 = 0;
      }
      result = SymCryptIntDivPow2();
      ++v6;
      --v11;
    }
    while ( v11 );
  }
  return result;
}
