/*
 * XREFs of CcAdjustThrottleForPartition @ 0x14053360C
 * Callers:
 *     CcLazyWriteScan @ 0x140533B4C (CcLazyWriteScan.c)
 * Callees:
 *     CcAdjustCurrentThresholdWrtTop @ 0x1405335AC (CcAdjustCurrentThresholdWrtTop.c)
 */

unsigned __int64 __fastcall CcAdjustThrottleForPartition(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v7; // r14
  unsigned int v8; // ecx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_DWORD *)(a2 + 16) - a4;
  v9 = *(_QWORD *)a3;
  v10 = a1[145];
  v11 = *(unsigned int *)(a3 + 24);
  v12 = *(_QWORD *)(a3 + 8);
  v13 = *(_QWORD *)(a3 + 16);
  v22 = *(_QWORD *)a3;
  if ( v10 )
  {
    if ( v10 > 0xFFFFFFFF || v8 <= v10 )
      v8 = 0;
    else
      v8 -= v10;
    a1[145] = 0LL;
  }
  v14 = v8;
  if ( v8 < 0x200 )
    v14 = 512;
  v15 = v14 >> 2;
  if ( v15 > v9 )
    v15 = v9;
  if ( v4 < v11 + ((3 * (v9 - v11)) >> 2) )
  {
    if ( v12 < v9 )
    {
      CcAdjustCurrentThresholdWrtTop(&v22, v12, v15, v8 < 0x200);
      v9 = v22;
    }
    else if ( v4 < v9 - v15 && v7 <= v9 )
    {
      v16 = v12 - v9;
      v17 = (v9 - v4) >> 3;
      if ( v17 <= v15 )
      {
        if ( v16 > v15 )
        {
          v9 += v15;
          goto LABEL_25;
        }
      }
      else if ( v16 > v17 )
      {
        v9 += v17;
        goto LABEL_25;
      }
      v9 = v12;
    }
  }
  else
  {
    v9 -= v15;
    if ( v9 <= v13 )
      v9 = v13;
  }
LABEL_25:
  *(_QWORD *)(a3 + 8) = v12;
  v18 = (v9 >> 1) + (v9 >> 2);
  *(_QWORD *)(a3 + 16) = v13;
  *(_QWORD *)a3 = v9;
  if ( v18 > 0xFFFFFFFF )
    LODWORD(v18) = -1;
  *(_DWORD *)(a3 + 24) = v18;
  v19 = (unsigned __int8)dword_140D1D1EC;
  result = (a1[143] + a1[144]) >> 1;
  *(_QWORD *)(a3 + 8) = result;
  v21 = result >> 2;
  *(_QWORD *)(a3 + 16) = result >> 2;
  if ( result >> 2 < 0x200 )
  {
    *(_QWORD *)(a3 + 16) = 512LL;
    v21 = 512LL;
  }
  if ( result >= v21 && v19 || (*(_QWORD *)(a3 + 8) = v21, v19) )
  {
    if ( (unsigned int)CcAzure_TopBottomDPTEqual <= 1 )
    {
      *(_QWORD *)(a3 + 16) = result;
      *(_QWORD *)(a3 + 8) = result;
    }
  }
  return result;
}
