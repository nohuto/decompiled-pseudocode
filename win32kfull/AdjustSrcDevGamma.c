__int64 __fastcall AdjustSrcDevGamma(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  int v7; // r14d
  int v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // r15d
  int v12; // esi
  int v13; // r14d
  int v14; // edi
  int v15; // r13d
  int v16; // eax
  int v17; // eax
  __int64 v18; // xmm0_8
  int v19; // r13d
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v26; // eax
  int v27; // edx
  __int64 v28; // [rsp+28h] [rbp-28h]
  __int64 v29; // [rsp+38h] [rbp-18h]
  int v30; // [rsp+98h] [rbp+48h]
  int v31; // [rsp+A0h] [rbp+50h]
  unsigned int v32; // [rsp+A0h] [rbp+50h]
  int v34; // [rsp+B0h] [rbp+60h]

  v7 = a4;
  v9 = 0;
  LODWORD(v29) = DivFD6(a3[3], 10000);
  HIDWORD(v29) = DivFD6(a3[4], 10000);
  v10 = DivFD6(a3[5], 10000);
  *(_DWORD *)a2 &= ~0x1000u;
  v11 = 1;
  v30 = 1000000;
  v12 = 1000000;
  v31 = v10;
  if ( (a5 & 8) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( v7 == 1 || v7 == 2 )
        goto LABEL_12;
      if ( v7 != 5 && v7 != 6 && v7 != 252 && v7 != 253 )
      {
        if ( v7 == 254 )
        {
          v13 = 1025000;
          goto LABEL_13;
        }
        if ( v7 == 255 )
        {
LABEL_12:
          v13 = 1325000;
          a3[6] += 550;
          a3[7] -= 300;
LABEL_13:
          LODWORD(v28) = v13;
          v12 = v13;
          HIDWORD(v28) = v13;
          v14 = v13;
          v15 = 1000000;
          goto LABEL_39;
        }
        return 0LL;
      }
      v13 = 1000000;
      v14 = 1000000;
      v28 = 4294967297000000LL;
      v15 = 1000000;
LABEL_39:
      LODWORD(v29) = MulFD6(v29, v15);
      HIDWORD(v29) = MulFD6(SHIDWORD(v29), v15);
      v10 = MulFD6(v31, v15);
      v32 = v10;
      if ( v30 != 1000000 )
      {
        LODWORD(v28) = MulFD6(v12, v30);
        v12 = v28;
        HIDWORD(v28) = MulFD6(v14, v30);
        v14 = HIDWORD(v28);
        v13 = MulFD6(v13, v30);
        v10 = v32;
      }
      goto LABEL_41;
    }
    v16 = RaisePower(1050000, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2);
    v17 = MulFD6(932500, v16);
    v18 = *(_QWORD *)(a1 + 144);
    v19 = *(_DWORD *)a2 | 0x1000;
    v13 = *(_DWORD *)(a1 + 152);
    *(_DWORD *)a2 = v19;
    v34 = v17;
    v20 = *(unsigned __int8 *)(a1 + 161);
    v28 = v18;
    if ( (unsigned __int8)v20 <= 0xFu )
    {
      v12 = 25000 * ((v20 >> 1) + 41);
      if ( a4 == 1 )
        v12 = MulFD6(v12, 1125000);
    }
    v21 = *(_DWORD *)(a1 + 192);
    if ( v21 <= 1000000 )
    {
      if ( v21 >= 1000000 )
      {
LABEL_24:
        if ( a4 != 1 && a4 != 2 )
        {
          switch ( a4 )
          {
            case 5u:
            case 6u:
            case 0xFCu:
            case 0xFDu:
              if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
              {
                v26 = 1000000;
                *(_DWORD *)a2 = v19 & 0xFFFFEFFF;
                goto LABEL_38;
              }
              break;
            case 0xFEu:
              if ( (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
              {
                v26 = DivFD6(v34, 932500);
                v30 = 1000000;
LABEL_38:
                v14 = HIDWORD(v18);
                v15 = MulFD6(v12, v26);
                v12 = v18;
                goto LABEL_39;
              }
              break;
            case 0xFFu:
              break;
            default:
              return 0LL;
          }
        }
        v26 = v34;
        goto LABEL_38;
      }
      v24 = Log(v21 / 3);
      v23 = -477121;
    }
    else
    {
      v22 = DivFD6(333333, v21);
      v23 = Log(v22);
      v24 = -477121;
    }
    v30 = DivFD6(v24, v23);
    goto LABEL_24;
  }
  v9 = 1;
  v13 = 1000000;
  v28 = 4294967297000000LL;
  v14 = 1000000;
LABEL_41:
  if ( (_DWORD)v29 != 1000000 || __PAIR64__(HIDWORD(v29), 1000000) != (v10 | 0xF424000000000LL) )
    v9 |= 2u;
  if ( (_DWORD)v29 == *(_DWORD *)(a2 + 4) && __PAIR64__(v10, HIDWORD(v29)) == *(_QWORD *)(a2 + 8) )
  {
    v27 = 0;
  }
  else
  {
    v27 = 1;
    *(_QWORD *)(a2 + 4) = v29;
    *(_DWORD *)(a2 + 12) = v10;
  }
  if ( v12 != 1000000 || v14 != 1000000 || v13 != 1000000 )
    v9 |= 4u;
  if ( v12 != *(_DWORD *)(a2 + 16) || v14 != *(_DWORD *)(a2 + 20) || v13 != *(_DWORD *)(a2 + 24) )
  {
    v27 = 1;
    *(_QWORD *)(a2 + 16) = v28;
    *(_DWORD *)(a2 + 24) = v13;
  }
  if ( (*(_DWORD *)a2 & 7) != v9 || (v11 = v27) != 0 )
    *(_DWORD *)a2 = v9 | *(_DWORD *)a2 & 0xFFFFFFF8;
  return v11;
}
