/*
 * XREFs of AdjustSrcDevGamma @ 0x1C001CAF0
 * Callers:
 *     pDCIAdjClr @ 0x1C001C170 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C001C03C (MulFD6.c)
 *     DivFD6 @ 0x1C001CD3C (DivFD6.c)
 *     RaisePower @ 0x1C001F468 (RaisePower.c)
 *     Log @ 0x1C001F69C (Log.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  unsigned int v9; // r12d
  int v10; // r15d
  int v11; // eax
  int v12; // edx
  int v13; // r9d
  int v14; // ebx
  int v15; // r14d
  int v16; // esi
  int v17; // r13d
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // xmm0_8
  int v23; // r13d
  unsigned int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // [rsp+20h] [rbp-30h]
  int v33; // [rsp+24h] [rbp-2Ch]
  int v34; // [rsp+24h] [rbp-2Ch]
  __int64 v35; // [rsp+28h] [rbp-28h]
  __int64 v36; // [rsp+38h] [rbp-18h]
  int v37; // [rsp+98h] [rbp+48h]
  unsigned int v38; // [rsp+A0h] [rbp+50h]
  int v39; // [rsp+B0h] [rbp+60h]

  v9 = 0;
  v10 = 0;
  LODWORD(v36) = DivFD6(a3[3], 10000LL);
  v32 = DivFD6(a3[4], 10000LL);
  HIDWORD(v36) = v32;
  v11 = DivFD6(a3[5], 10000LL);
  *(_DWORD *)a2 &= ~0x1000u;
  v12 = v11;
  v37 = 1000000;
  v33 = v11;
  if ( (a5 & 8) == 0 )
  {
    v19 = 1000000;
    v39 = 1000000;
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( a4 )
      {
        if ( a4 <= 2u )
          goto LABEL_32;
        if ( a4 > 4u )
        {
          if ( a4 <= 6u )
          {
LABEL_25:
            v15 = 1000000;
            HIDWORD(v35) = 1000000;
            v16 = 1000000;
            v14 = 1000000;
LABEL_26:
            LODWORD(v35) = v14;
LABEL_27:
            LODWORD(v36) = MulFD6(v36, v19);
            v17 = MulFD6(v32, v39);
            HIDWORD(v36) = v17;
            v11 = MulFD6(v33, v39);
            v34 = v11;
            v12 = v11;
            if ( v37 != 1000000 )
            {
              v14 = MulFD6(v14, v37);
              LODWORD(v35) = v14;
              v16 = MulFD6(v16, v37);
              HIDWORD(v35) = v16;
              v31 = MulFD6(v15, v37);
              v12 = v34;
              v15 = v31;
              v11 = v34;
            }
            v13 = v17;
            goto LABEL_3;
          }
          if ( a4 > 0xFBu )
          {
            if ( a4 <= 0xFDu )
              goto LABEL_25;
            if ( a4 == 0xFE )
            {
              v15 = 1025000;
              v16 = 1025000;
              HIDWORD(v35) = 1025000;
              v14 = 1025000;
              goto LABEL_26;
            }
LABEL_32:
            v15 = 1325000;
            a3[6] += 550;
            v14 = 1325000;
            a3[7] -= 300;
            v16 = 1325000;
            v35 = 0x1437C8001437C8LL;
            goto LABEL_27;
          }
        }
      }
      return 0LL;
    }
    v20 = RaisePower(1050000LL, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2LL);
    v21 = MulFD6(932500, v20);
    v22 = *(_QWORD *)(a1 + 144);
    v23 = *(_DWORD *)a2 | 0x1000;
    v15 = *(_DWORD *)(a1 + 152);
    *(_DWORD *)a2 = v23;
    v38 = v21;
    v24 = *(unsigned __int8 *)(a1 + 161);
    v35 = v22;
    if ( (unsigned __int8)v24 <= 0xFu )
    {
      v25 = 25000 * ((v24 >> 1) + 41);
      v39 = v25;
      if ( a4 == 1 )
        v39 = MulFD6(v25, 1125000);
    }
    v26 = *(_DWORD *)(a1 + 192);
    if ( v26 <= 1000000 )
    {
      if ( v26 >= 1000000 )
        goto LABEL_48;
      v29 = (unsigned int)Log((unsigned int)(v26 / 3));
      v28 = 4294490175LL;
    }
    else
    {
      v27 = DivFD6(333333LL, (unsigned int)v26);
      v28 = (unsigned int)Log(v27);
      v29 = 4294490175LL;
    }
    v37 = DivFD6(v29, v28);
LABEL_48:
    if ( !a4 )
      return 0LL;
    if ( a4 > 2u )
    {
      if ( a4 <= 4u )
        return 0LL;
      if ( a4 <= 6u )
        goto LABEL_59;
      if ( a4 <= 0xFBu )
        return 0LL;
      if ( a4 <= 0xFDu )
      {
LABEL_59:
        if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
        {
          v30 = 1000000;
          *(_DWORD *)a2 = v23 & 0xFFFFEFFF;
          goto LABEL_56;
        }
      }
      else if ( a4 == 0xFE && (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
      {
        v30 = DivFD6(v38, 932500LL);
        v37 = 1000000;
        goto LABEL_56;
      }
    }
    v30 = v38;
LABEL_56:
    v16 = HIDWORD(v22);
    v19 = MulFD6(v39, v30);
    v14 = v22;
    v39 = v19;
    goto LABEL_27;
  }
  v13 = v32;
  v14 = 1000000;
  v10 = 1;
  v35 = 4294967297000000LL;
  v15 = 1000000;
  v16 = 1000000;
  v17 = v32;
LABEL_3:
  if ( (_DWORD)v36 != 1000000 || v17 != 1000000 || v11 != 1000000 )
    v10 |= 2u;
  if ( (_DWORD)v36 != *(_DWORD *)(a2 + 4) || v13 != *(_DWORD *)(a2 + 8) || v12 != *(_DWORD *)(a2 + 12) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 4) = v36;
    *(_DWORD *)(a2 + 12) = v12;
  }
  if ( v14 != 1000000 || v16 != 1000000 || v15 != 1000000 )
    v10 |= 4u;
  if ( v14 != *(_DWORD *)(a2 + 16) || v16 != *(_DWORD *)(a2 + 20) || v15 != *(_DWORD *)(a2 + 24) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 16) = v35;
    *(_DWORD *)(a2 + 24) = v15;
  }
  if ( (*(_DWORD *)a2 & 7) != v10 )
    v9 = 1;
  if ( v9 )
    *(_DWORD *)a2 = v10 | *(_DWORD *)a2 & 0xFFFFFFF8;
  return v9;
}
