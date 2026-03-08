/*
 * XREFs of TouchTargetingCreateContact @ 0x1C0250C6C
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1C01E5EF0 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBU.c)
 *     EditionNeedsTouchTargeting @ 0x1C01E74E0 (EditionNeedsTouchTargeting.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01E7FFC (xxxPerformTargetingWithinPwnd.c)
 * Callees:
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C02503A0 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 */

__int64 __fastcall TouchTargetingCreateContact(__int64 a1, int *a2, __int64 a3, _DWORD *a4)
{
  int *v4; // rsi
  int *v8; // rdi
  int v9; // r9d
  unsigned int *v10; // r14
  int *v11; // r15
  int *v12; // r8
  BOOL v13; // eax
  bool v14; // zf
  int v15; // r12d
  int v16; // r9d
  int v17; // r10d
  int v18; // eax
  int v19; // edi
  int v20; // r15d
  int v21; // esi
  int v22; // ebp
  int v23; // ebx
  int v24; // r8d
  int v25; // r11d
  int v26; // r10d
  int v27; // ecx
  int v28; // r9d
  int v29; // ecx
  int v30; // r8d
  __int64 result; // rax
  int v32; // r15d
  int v33; // ecx

  v4 = a4 + 4;
  a4[8] = *(_DWORD *)(a1 + 4);
  a4[9] = *(_DWORD *)(a1 + 8);
  a4[45] = 1;
  v8 = a4 + 47;
  a4[10] = *(_DWORD *)(a1 + 44);
  *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)a4 = *(_OWORD *)(a1 + 28);
  v9 = a4[46];
  if ( !v9 )
  {
    *v8 = 26458;
    v9 = 26458;
    a4[46] = 26458;
  }
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), v4, a4 + 6, v9);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), a4, a4 + 2, a4[46]);
  v10 = a4 + 7;
  v11 = a4 + 5;
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 5, a4 + 7, *v8);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 1, a4 + 3, *v8);
  if ( a2 )
  {
    if ( (unsigned int)IntersectRect(v4, v4, a2) )
      IntersectRect(a4, a4, v12);
    else
      a4[45] = 0;
  }
  v13 = PtInRect(a4, *(_QWORD *)(a1 + 4));
  v14 = a4[46] == 0;
  a4[44] = v13;
  if ( v14 )
  {
    *v8 = 26458;
    a4[46] = 26458;
  }
  v15 = a4[6];
  v16 = *v4;
  v17 = v15 - *v4;
  a4[11] = 12;
  if ( v17 < 4 || (v18 = *v11, (int)(*v10 - *v11) < 4) )
  {
    v33 = *v11;
    result = *v10;
    a4[11] = 4;
    a4[12] = v16;
    a4[13] = v33;
    a4[14] = v16;
    a4[15] = result;
    a4[16] = v15;
    a4[17] = result;
    a4[18] = v15;
    a4[19] = v33;
  }
  else
  {
    v19 = *v10;
    a4[12] = v16;
    a4[19] = v19;
    a4[24] = v15;
    v20 = v18 + v19;
    a4[31] = v18;
    v21 = (v18 + v19) / 2;
    a4[13] = v21;
    a4[25] = v21;
    v22 = v16 + 7 * v17 / 100;
    a4[14] = v22;
    a4[34] = v22;
    v23 = v19 + 25 * (v18 - v19) / 100;
    a4[15] = v23;
    a4[23] = v23;
    v24 = v16 + v15;
    v25 = v16 + 25 * v17 / 100;
    a4[16] = v25;
    a4[32] = v25;
    v26 = v19 + 7 * (v18 - v19) / 100;
    v27 = v16 + v15;
    v28 = (v16 + v15) / 2;
    a4[18] = v28;
    v29 = v27 - v25;
    a4[17] = v26;
    v30 = v24 - v22;
    a4[20] = v29;
    a4[21] = v26;
    result = (unsigned int)(v18 - 25 * (v18 - v19) / 100);
    a4[22] = v30;
    v32 = v20 - v26;
    a4[26] = v30;
    a4[29] = v32;
    a4[33] = v32;
    a4[27] = result;
    a4[28] = v29;
    a4[30] = v28;
    a4[35] = result;
  }
  return result;
}
