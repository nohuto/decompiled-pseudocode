/*
 * XREFs of SymCryptFixedWindowRecoding @ 0x140403EA8
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     SymCryptIntAddUint32 @ 0x1403F3720 (SymCryptIntAddUint32.c)
 *     SymCryptIntDivPow2 @ 0x1403F380C (SymCryptIntDivPow2.c)
 *     SymCryptIntGetValueLsbits32 @ 0x1403F3884 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntMaskedCopy @ 0x1403F38CC (SymCryptIntMaskedCopy.c)
 *     SymCryptIntSubUint32 @ 0x1403F39AC (SymCryptIntSubUint32.c)
 */

__int64 __fastcall SymCryptFixedWindowRecoding(char a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  unsigned int v8; // esi
  int v9; // r15d
  __int64 v10; // rbp
  unsigned int v11; // edi
  _DWORD *v12; // r13
  __int64 v13; // r12
  __int64 v14; // r14
  int ValueLsbits32; // eax
  int v16; // edx
  unsigned __int64 v17; // r8
  unsigned int v18; // ebx
  int v19; // eax
  __int64 result; // rax
  __int64 v21; // [rsp+88h] [rbp+10h]

  v21 = a2;
  v6 = (__int64)a5;
  v7 = a4;
  v8 = ~(-1 << a1);
  v9 = 1 << (a1 - 1);
  v10 = (unsigned int)(a6 - 1);
  v11 = ~v9;
  if ( a6 != 1 )
  {
    v12 = a5;
    v13 = a4 - (_QWORD)a5;
    v14 = a2;
    do
    {
      ValueLsbits32 = SymCryptIntGetValueLsbits32(v14);
      v16 = v8 & ValueLsbits32 & v11;
      v17 = (unsigned __int64)-(__int64)(v8 & ValueLsbits32 & v9) >> 32;
      v18 = v9 - (v8 & ValueLsbits32);
      v19 = ~((unsigned __int64)-(__int64)(v8 & ValueLsbits32 & v9) >> 32);
      *v12 = v19;
      *(_DWORD *)((char *)v12 + v13) = (v16 & (unsigned int)v17 | v18 & v19) >> 1;
      SymCryptIntSubUint32();
      SymCryptIntAddUint32();
      SymCryptIntMaskedCopy();
      SymCryptIntDivPow2();
      ++v12;
      --v10;
    }
    while ( v10 );
    v10 = (unsigned int)(a6 - 1);
    v6 = (__int64)a5;
    v7 = a4;
    a2 = v21;
  }
  *(_DWORD *)(v6 + 4 * v10) = 0;
  result = (v8 >> 1) & (v11 >> 1) & ((unsigned int)SymCryptIntGetValueLsbits32(a2) >> 1);
  *(_DWORD *)(v7 + 4 * v10) = result;
  return result;
}
