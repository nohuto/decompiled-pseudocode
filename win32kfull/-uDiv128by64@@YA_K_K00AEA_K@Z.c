/*
 * XREFs of ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x1C01C3F3C
 * Callers:
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1C0145DFA (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 * Callees:
 *     ?NumberOfLeadingZeros@@YAH_K@Z @ 0x1C0145E9E (-NumberOfLeadingZeros@@YAH_K@Z.c)
 */

unsigned __int64 __fastcall uDiv128by64(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 result; // rax
  int v7; // eax
  char v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdi
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rax

  if ( a1 < a3 )
  {
    v7 = NumberOfLeadingZeros(a3);
    v8 = v7;
    v9 = a3 << v7;
    v11 = HIDWORD(v9);
    v13 = (v12 << v7) | (-(__int64)v7 >> 63) & (v10 >> (64 - (unsigned __int8)v7));
    v14 = v10 << v7;
    v15 = HIDWORD(v9) << 32;
    v16 = (unsigned int)v14;
    v17 = v13 / HIDWORD(v9);
    v18 = v13 - HIDWORD(v9) * v17;
    v19 = (unsigned int)v9 * v17;
    v20 = HIDWORD(v14) + (v18 << 32);
    do
    {
      if ( v17 < 0x100000000LL && v19 <= v20 )
        break;
      --v17;
      v19 -= (unsigned int)v9;
      v18 += v11;
      v20 += v15;
    }
    while ( v18 < 0x100000000LL );
    v21 = HIDWORD(v14) + (v13 << 32) - v9 * v17;
    v22 = (unsigned int)v9 * (v21 / v11);
    v23 = v21 % v11;
    v24 = v21 / v11;
    v25 = v16 + ((v21 % v11) << 32);
    do
    {
      if ( v24 < 0x100000000LL && v22 <= v25 )
        break;
      --v24;
      v22 -= (unsigned int)v9;
      v23 += v11;
      v25 += v15;
    }
    while ( v23 < 0x100000000LL );
    *a4 = (v16 + (v21 << 32) - v9 * v24) >> v8;
    return v24 + (v17 << 32);
  }
  else
  {
    result = -1LL;
    *a4 = -1LL;
  }
  return result;
}
