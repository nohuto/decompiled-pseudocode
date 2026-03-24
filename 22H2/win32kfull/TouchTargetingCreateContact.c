/*
 * XREFs of TouchTargetingCreateContact @ 0x1C025F244
 * Callers:
 *     xxxPerformTargetingWithinPwnd @ 0x1C02171EC (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerSpeedHitTest @ 0x1C021741C (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C0217734 (xxxPointerWindowHitTest.c)
 * Callees:
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C025EA8C (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 */

__int64 __fastcall TouchTargetingCreateContact(__int64 a1, int *a2, __int64 a3, _DWORD *a4)
{
  int *v4; // rdi
  unsigned int v8; // r9d
  unsigned int *v9; // rbp
  int *v10; // r12
  int *v11; // r8
  BOOL v12; // eax
  bool v13; // zf
  int v14; // r15d
  int v15; // r9d
  int v16; // r10d
  int v17; // r8d
  int v18; // r13d
  int v19; // ebp
  int v20; // r8d
  int v21; // esi
  int v22; // ebx
  int v23; // r11d
  int v24; // r10d
  int v25; // ecx
  int v26; // r8d
  __int64 result; // rax
  int v28; // ebp
  int v29; // ecx
  int v30; // [rsp+60h] [rbp+18h]

  v4 = a4 + 4;
  a4[8] = *(_DWORD *)(a1 + 4);
  a4[9] = *(_DWORD *)(a1 + 8);
  a4[45] = 1;
  a4[10] = *(_DWORD *)(a1 + 44);
  *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)a4 = *(_OWORD *)(a1 + 28);
  v8 = a4[46];
  if ( !v8 )
  {
    a4[47] = 26458;
    v8 = 26458;
    a4[46] = 26458;
  }
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), v4, a4 + 6, v8);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), a4, a4 + 2, a4[46]);
  v9 = a4 + 7;
  v10 = a4 + 5;
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 5, a4 + 7, a4[47]);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 1, a4 + 3, a4[47]);
  if ( a2 )
  {
    if ( (unsigned int)IntersectRect(v4, v4, a2) )
      IntersectRect(a4, a4, v11);
    else
      a4[45] = 0;
  }
  v12 = PtInRect(a4, *(_QWORD *)(a1 + 4));
  v13 = a4[46] == 0;
  a4[44] = v12;
  if ( v13 )
  {
    a4[47] = 26458;
    a4[46] = 26458;
  }
  v14 = a4[6];
  v15 = *v4;
  v16 = v14 - *v4;
  a4[11] = 12;
  if ( v16 < 4 || (v17 = *v10, v18 = *v9, v30 = *v10, (int)(*v9 - *v10) < 4) )
  {
    v29 = *v10;
    result = *v9;
    a4[11] = 4;
    a4[12] = v15;
    a4[13] = v29;
    a4[14] = v15;
    a4[15] = result;
    a4[16] = v14;
    a4[17] = result;
    a4[18] = v14;
    a4[19] = v29;
  }
  else
  {
    v19 = v17 + v18;
    a4[12] = v15;
    v20 = v17 - v18;
    a4[19] = v18;
    a4[24] = v14;
    a4[13] = v19 / 2;
    a4[25] = v19 / 2;
    v21 = v15 + 7 * v16 / 100;
    a4[14] = v21;
    a4[34] = v21;
    v22 = v18 + 25 * v20 / 100;
    a4[15] = v22;
    a4[23] = v22;
    v23 = v15 + 25 * v16 / 100;
    a4[16] = v23;
    a4[32] = v23;
    v24 = v18 + 7 * v20 / 100;
    v25 = v15 + v14 - v23;
    a4[18] = (v15 + v14) / 2;
    a4[20] = v25;
    v26 = v15 + v14 - v21;
    a4[28] = v25;
    result = (unsigned int)(v19 - v22);
    a4[17] = v24;
    v28 = v19 - v24;
    a4[21] = v24;
    a4[29] = v28;
    a4[33] = v28;
    a4[22] = v26;
    a4[26] = v26;
    a4[27] = result;
    a4[30] = (v15 + v14) / 2;
    a4[31] = v30;
    a4[35] = result;
  }
  return result;
}
