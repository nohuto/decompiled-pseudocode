/*
 * XREFs of AdjustSrcDevGamma @ 0x1C00950A4
 * Callers:
 *     pDCIAdjClr @ 0x1C0094724 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C00945F0 (MulFD6.c)
 *     DivFD6 @ 0x1C00952E0 (DivFD6.c)
 *     RaisePower @ 0x1C0095584 (RaisePower.c)
 *     Log @ 0x1C00957B4 (Log.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  int v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // r15d
  int v12; // ebx
  int v13; // r14d
  int v14; // esi
  int v15; // edx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // r13d
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // [rsp+20h] [rbp-30h]
  unsigned int v28; // [rsp+20h] [rbp-30h]
  int v29; // [rsp+24h] [rbp-2Ch]
  __int64 v30; // [rsp+30h] [rbp-20h]
  __int64 v31; // [rsp+40h] [rbp-10h]
  int v32; // [rsp+98h] [rbp+48h]
  int v33; // [rsp+A0h] [rbp+50h]
  unsigned int v34; // [rsp+B0h] [rbp+60h]

  v9 = 0;
  LODWORD(v31) = DivFD6(a3[3], 10000LL);
  HIDWORD(v31) = DivFD6(a3[4], 10000LL);
  v10 = DivFD6(a3[5], 10000LL);
  *(_DWORD *)a2 &= ~0x1000u;
  v11 = 1;
  v32 = 1000000;
  v27 = v10;
  if ( (a5 & 8) == 0 )
  {
    v17 = 1000000;
    v33 = 1000000;
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( a4 )
      {
        if ( a4 <= 2u )
        {
LABEL_29:
          v13 = 1325000;
          a3[6] += 550;
          v12 = 1325000;
          a3[7] -= 300;
          v14 = 1325000;
          v30 = 0x1437C8001437C8LL;
          goto LABEL_24;
        }
        if ( a4 > 4u )
        {
          if ( a4 <= 6u )
          {
LABEL_22:
            v13 = 1000000;
            HIDWORD(v30) = 1000000;
            v14 = 1000000;
            v12 = 1000000;
LABEL_23:
            LODWORD(v30) = v12;
            goto LABEL_24;
          }
          if ( a4 > 0xFBu )
          {
            if ( a4 <= 0xFDu )
              goto LABEL_22;
            if ( a4 == 0xFE )
            {
              v13 = 1025000;
              v14 = 1025000;
              HIDWORD(v30) = 1025000;
              v12 = 1025000;
              goto LABEL_23;
            }
            goto LABEL_29;
          }
        }
      }
      return 0LL;
    }
    v18 = RaisePower(1050000LL, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2LL);
    v19 = MulFD6(932500, v18);
    v13 = *(_DWORD *)(a1 + 152);
    v34 = v19;
    v30 = *(_QWORD *)(a1 + 144);
    v29 = *(_DWORD *)a2 | 0x1000;
    *(_DWORD *)a2 = v29;
    v20 = *(unsigned __int8 *)(a1 + 161);
    if ( (unsigned __int8)v20 > 0xFu )
    {
      v21 = 1000000;
    }
    else
    {
      v21 = 25000 * ((v20 >> 1) + 41);
      if ( a4 == 1 )
        v21 = MulFD6(v21, 1125000);
    }
    v22 = *(_DWORD *)(a1 + 192);
    if ( v22 <= 1000000 )
    {
      if ( v22 >= 1000000 )
        goto LABEL_46;
      v25 = (unsigned int)Log((unsigned int)(v22 / 3));
      v24 = 4294490175LL;
    }
    else
    {
      v23 = DivFD6(333333LL, (unsigned int)v22);
      v24 = (unsigned int)Log(v23);
      v25 = 4294490175LL;
    }
    v32 = DivFD6(v25, v24);
LABEL_46:
    if ( !a4 )
      return 0LL;
    if ( a4 > 2u )
    {
      if ( a4 <= 4u )
        return 0LL;
      if ( a4 <= 6u )
        goto LABEL_57;
      if ( a4 <= 0xFBu )
        return 0LL;
      if ( a4 <= 0xFDu )
      {
LABEL_57:
        if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
        {
          *(_DWORD *)a2 = v29 & 0xFFFFEFFF;
          v26 = 1000000;
          goto LABEL_54;
        }
      }
      else if ( a4 == 0xFE && (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
      {
        v26 = DivFD6(v34, 932500LL);
        v32 = 1000000;
        goto LABEL_54;
      }
    }
    v26 = v34;
LABEL_54:
    v14 = HIDWORD(v30);
    v17 = MulFD6(v21, v26);
    v12 = v30;
    v33 = v17;
LABEL_24:
    LODWORD(v31) = MulFD6(v31, v17);
    HIDWORD(v31) = MulFD6(SHIDWORD(v31), v33);
    v10 = MulFD6(v27, v33);
    v28 = v10;
    if ( v32 != 1000000 )
    {
      LODWORD(v30) = MulFD6(v12, v32);
      v12 = v30;
      HIDWORD(v30) = MulFD6(v14, v32);
      v14 = HIDWORD(v30);
      v13 = MulFD6(v13, v32);
      v10 = v28;
    }
    goto LABEL_3;
  }
  v12 = 1000000;
  v30 = 4294967297000000LL;
  v9 = 1;
  v13 = 1000000;
  v14 = 1000000;
LABEL_3:
  if ( (_DWORD)v31 != 1000000 || __PAIR64__(HIDWORD(v31), 1000000) != (v10 | 0xF424000000000LL) )
    v9 |= 2u;
  if ( (_DWORD)v31 == *(_DWORD *)(a2 + 4) && __PAIR64__(v10, HIDWORD(v31)) == *(_QWORD *)(a2 + 8) )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    *(_QWORD *)(a2 + 4) = v31;
    *(_DWORD *)(a2 + 12) = v10;
  }
  if ( v12 != 1000000 || v14 != 1000000 || v13 != 1000000 )
    v9 |= 4u;
  if ( v12 != *(_DWORD *)(a2 + 16) || v14 != *(_DWORD *)(a2 + 20) || v13 != *(_DWORD *)(a2 + 24) )
  {
    v15 = 1;
    *(_QWORD *)(a2 + 16) = v30;
    *(_DWORD *)(a2 + 24) = v13;
  }
  if ( (*(_DWORD *)a2 & 7) != v9 || (v11 = v15) != 0 )
    *(_DWORD *)a2 = v9 | *(_DWORD *)a2 & 0xFFFFFFF8;
  return v11;
}
