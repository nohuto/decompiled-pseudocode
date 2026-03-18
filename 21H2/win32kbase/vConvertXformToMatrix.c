/*
 * XREFs of vConvertXformToMatrix @ 0x1C0031F70
 * Callers:
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0031514 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall vConvertXformToMatrix(__int64 a1, __int64 a2)
{
  EFLOAT *v2; // r11
  __int64 v3; // r8
  float v4; // xmm2_4
  float v5; // xmm1_4
  int v6; // xmm0_4
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 result; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  bool v17; // zf
  float v18; // xmm0_4
  int v19; // edx

  v2 = (EFLOAT *)(a2 + 20);
  *(_DWORD *)a2 = *(_DWORD *)a1;
  v3 = a2;
  v4 = *(float *)(a1 + 4);
  *(float *)(a2 + 4) = v4;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  v5 = *(float *)(a1 + 16);
  *(float *)(a2 + 16) = v5;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = (unsigned __int8)(SLODWORD(v5) >> 23);
  *(_DWORD *)(a2 + 20) = v6;
  if ( v7 > 0x9E )
  {
    v10 = 0;
  }
  else
  {
    v8 = LODWORD(v5) & 0x7FFFFF | 0x800000LL;
    if ( v7 < 0x76 )
      v9 = v8 >> (118 - (unsigned __int8)v7);
    else
      v9 = v8 << ((unsigned __int8)v7 - 118);
    v10 = -((unsigned __int64)(v9 + 0x80000000LL) >> 32);
    if ( v5 >= 0.0 )
      v10 = (unsigned __int64)(v9 + 0x80000000LL) >> 32;
  }
  result = (unsigned int)(v6 >> 23);
  *(_DWORD *)(v3 + 24) = v10;
  v12 = (unsigned __int8)result;
  if ( (unsigned __int8)result > 0x9Eu )
  {
    v15 = 0;
  }
  else
  {
    v13 = v6 & 0x7FFFFF | 0x800000LL;
    if ( v12 < 0x76 )
      v14 = v13 >> (118 - (unsigned __int8)v12);
    else
      v14 = v13 << ((unsigned __int8)v12 - 118);
    result = (v14 + 0x80000000LL) >> 32;
    v15 = -(int)result;
    if ( v6 >= 0 )
      v15 = result;
  }
  *(_DWORD *)(v3 + 28) = v15;
  v16 = 32;
  v17 = v5 == *(float *)v2;
  *(_DWORD *)(v3 + 32) = 32;
  if ( v17 )
  {
    result = EFLOAT::bIsZero(v2);
    if ( (_DWORD)result )
    {
      v16 = 96;
      *(_DWORD *)(v3 + 32) = 96;
    }
  }
  if ( v4 == 0.0 && *(float *)(v3 + 8) == 0.0 )
  {
    v18 = *(float *)v3;
    v19 = v16 | 1;
    *(_DWORD *)(v3 + 32) = v19;
    if ( v18 == 1.0 && *(float *)(v3 + 12) == 1.0 )
      *(_DWORD *)(v3 + 32) = v19 | 2;
  }
  return result;
}
