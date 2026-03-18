/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C00320F0
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0031514 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0031EE0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(float **this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  float *v4; // r10
  int v6; // ecx
  float v8; // xmm4_4
  unsigned int v9; // ecx
  float v10; // xmm5_4
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v4 = *this;
  if ( *((float *)a2 + 1) == 0.0 && *((float *)a2 + 2) == 0.0 && *((float *)a3 + 1) == 0.0 && *((float *)a3 + 2) == 0.0 )
  {
    *v4 = *(float *)a3 * *(float *)a2;
    v4[3] = *((float *)a3 + 3) * *((float *)a2 + 3);
    v4[1] = 0.0;
    v4[2] = 0.0;
  }
  else
  {
    *v4 = (float)(*((float *)a3 + 2) * *((float *)a2 + 1)) + (float)(*(float *)a3 * *(float *)a2);
    v4[1] = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
    v4[2] = (float)(*((float *)a3 + 2) * *((float *)a2 + 3)) + (float)(*(float *)a3 * *((float *)a2 + 2));
    v4[3] = (float)(*((float *)a3 + 3) * *((float *)a2 + 3)) + (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  }
  if ( *((float *)a2 + 4) == 0.0 && EFLOAT::bIsZero((struct MATRIX *)((char *)a2 + 20)) )
  {
    v4[4] = *((float *)a3 + 4);
    v4[5] = *((float *)a3 + 5);
    v4[6] = *((float *)a3 + 6);
    v6 = *((_DWORD *)a3 + 7);
  }
  else
  {
    v8 = (float)((float)(*((float *)a3 + 2) * *((float *)a2 + 5)) + *((float *)a3 + 4))
       + (float)(*(float *)a3 * *((float *)a2 + 4));
    v4[4] = v8;
    v9 = (unsigned __int8)(SLODWORD(v8) >> 23);
    v10 = (float)((float)(*((float *)a3 + 3) * *((float *)a2 + 5)) + *((float *)a3 + 5))
        + (float)(*((float *)a3 + 1) * *((float *)a2 + 4));
    v4[5] = v10;
    if ( v9 > 0x9E )
      return 0LL;
    v11 = LODWORD(v8) & 0x7FFFFF | 0x800000LL;
    if ( v9 < 0x76 )
      v12 = v11 >> (118 - (unsigned __int8)v9);
    else
      v12 = v11 << ((unsigned __int8)v9 - 118);
    v13 = -((unsigned __int64)(v12 + 0x80000000LL) >> 32);
    if ( v8 >= 0.0 )
      v13 = (unsigned __int64)(v12 + 0x80000000LL) >> 32;
    *((_DWORD *)v4 + 6) = v13;
    v14 = (unsigned __int8)(SLODWORD(v10) >> 23);
    if ( v14 > 0x9E )
      return 0LL;
    v15 = LODWORD(v10) & 0x7FFFFF | 0x800000LL;
    if ( v14 < 0x76 )
      v16 = v15 >> (118 - (unsigned __int8)v14);
    else
      v16 = v15 << ((unsigned __int8)v14 - 118);
    v17 = (v16 + 0x80000000LL) >> 32;
    v6 = -(int)v17;
    if ( v10 >= 0.0 )
      v6 = v17;
  }
  *((_DWORD *)v4 + 7) = v6;
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(this, a4 & 0x38);
  return 1LL;
}
