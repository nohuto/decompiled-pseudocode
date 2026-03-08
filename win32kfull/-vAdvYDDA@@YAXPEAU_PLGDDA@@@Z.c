/*
 * XREFs of ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0302BFC
 * Callers:
 *     EngPlgBlt @ 0x1C0292140 (EngPlgBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdvYDDA(struct _PLGDDA *a1)
{
  int v2; // r9d
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // eax
  int v8; // r9d
  unsigned int v9; // ecx
  int v10; // r9d
  unsigned int v11; // edx
  unsigned int v12; // ecx
  int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  int v20; // r9d
  int v21; // r9d
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // eax
  unsigned int v27; // edx
  int v28; // r9d
  int v29; // r9d
  unsigned int v30; // edx
  unsigned int v31; // ecx
  int v32; // r9d
  unsigned int v33; // edx
  unsigned int v34; // ecx
  int v35; // r9d
  unsigned int v36; // edx
  unsigned int v37; // ecx
  int v38; // r9d
  unsigned int v39; // edx
  unsigned int v40; // ecx
  int v41; // r9d
  unsigned int v42; // edx
  unsigned int v43; // ecx

  v2 = *((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 45);
  *((_DWORD *)a1 + 1) = v2;
  v3 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 46);
  v4 = *((_DWORD *)a1 + 47);
  *((_DWORD *)a1 + 2) = v3;
  if ( v3 >= v4 )
  {
    v5 = v3 - v4;
    v6 = *((_DWORD *)a1 + 10) + *((_DWORD *)a1 + 94);
    v7 = v2 + 1;
    v8 = *((_DWORD *)a1 + 9) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 2) = v5;
    v9 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 1) = v7;
    *((_DWORD *)a1 + 9) = v8;
    *((_DWORD *)a1 + 10) = v6;
    if ( v6 >= v9 )
    {
      *((_DWORD *)a1 + 9) = v8 + 1;
      *((_DWORD *)a1 + 10) = v6 - v9;
    }
    v10 = *((_DWORD *)a1 + 11) + *((_DWORD *)a1 + 96);
    v11 = *((_DWORD *)a1 + 12) + *((_DWORD *)a1 + 97);
    v12 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 11) = v10;
    *((_DWORD *)a1 + 12) = v11;
    if ( v11 >= v12 )
    {
      *((_DWORD *)a1 + 11) = v10 + 1;
      *((_DWORD *)a1 + 12) = v11 - v12;
    }
  }
  v13 = *((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 48);
  v14 = *((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 49);
  v15 = *((_DWORD *)a1 + 50);
  *((_DWORD *)a1 + 3) = v13;
  *((_DWORD *)a1 + 4) = v14;
  if ( v14 >= v15 )
  {
    v16 = *((_DWORD *)a1 + 98);
    v17 = v14 - v15;
    v18 = v13 + 1;
    *((_DWORD *)a1 + 4) = v17;
    v19 = *((_DWORD *)a1 + 14) + *((_DWORD *)a1 + 97);
    v20 = *((_DWORD *)a1 + 13) + *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 3) = v18;
    *((_DWORD *)a1 + 13) = v20;
    *((_DWORD *)a1 + 14) = v19;
    if ( v19 >= v16 )
    {
      *((_DWORD *)a1 + 13) = v20 + 1;
      *((_DWORD *)a1 + 14) = v19 - v16;
    }
  }
  v21 = *((_DWORD *)a1 + 5) + *((_DWORD *)a1 + 51);
  v22 = *((_DWORD *)a1 + 6) + *((_DWORD *)a1 + 52);
  v23 = *((_DWORD *)a1 + 53);
  *((_DWORD *)a1 + 5) = v21;
  *((_DWORD *)a1 + 6) = v22;
  if ( v22 >= v23 )
  {
    v24 = *((_DWORD *)a1 + 95);
    v25 = v22 - v23;
    v26 = v21 + 1;
    *((_DWORD *)a1 + 6) = v25;
    v27 = *((_DWORD *)a1 + 16) + *((_DWORD *)a1 + 94);
    v28 = *((_DWORD *)a1 + 15) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 5) = v26;
    *((_DWORD *)a1 + 15) = v28;
    *((_DWORD *)a1 + 16) = v27;
    if ( v27 >= v24 )
    {
      *((_DWORD *)a1 + 15) = v28 + 1;
      *((_DWORD *)a1 + 16) = v27 - v24;
    }
  }
  v29 = *((_DWORD *)a1 + 7) + *((_DWORD *)a1 + 54);
  v30 = *((_DWORD *)a1 + 8) + *((_DWORD *)a1 + 55);
  v31 = *((_DWORD *)a1 + 56);
  *((_DWORD *)a1 + 7) = v29;
  *((_DWORD *)a1 + 8) = v30;
  if ( v30 >= v31 )
  {
    *((_DWORD *)a1 + 7) = v29 + 1;
    *((_DWORD *)a1 + 8) = v30 - v31;
  }
  v32 = *((_DWORD *)a1 + 9) + *((_DWORD *)a1 + 69);
  v33 = *((_DWORD *)a1 + 10) + *((_DWORD *)a1 + 70);
  v34 = *((_DWORD *)a1 + 71);
  *((_DWORD *)a1 + 9) = v32;
  *((_DWORD *)a1 + 10) = v33;
  if ( v33 >= v34 )
  {
    *((_DWORD *)a1 + 9) = v32 + 1;
    *((_DWORD *)a1 + 10) = v33 - v34;
  }
  v35 = *((_DWORD *)a1 + 11) + *((_DWORD *)a1 + 72);
  v36 = *((_DWORD *)a1 + 12) + *((_DWORD *)a1 + 73);
  v37 = *((_DWORD *)a1 + 74);
  *((_DWORD *)a1 + 11) = v35;
  *((_DWORD *)a1 + 12) = v36;
  if ( v36 >= v37 )
  {
    *((_DWORD *)a1 + 11) = v35 + 1;
    *((_DWORD *)a1 + 12) = v36 - v37;
  }
  v38 = *((_DWORD *)a1 + 13) + *((_DWORD *)a1 + 75);
  v39 = *((_DWORD *)a1 + 14) + *((_DWORD *)a1 + 76);
  v40 = *((_DWORD *)a1 + 77);
  *((_DWORD *)a1 + 13) = v38;
  *((_DWORD *)a1 + 14) = v39;
  if ( v39 >= v40 )
  {
    *((_DWORD *)a1 + 13) = v38 + 1;
    *((_DWORD *)a1 + 14) = v39 - v40;
  }
  v41 = *((_DWORD *)a1 + 15) + *((_DWORD *)a1 + 78);
  v42 = *((_DWORD *)a1 + 16) + *((_DWORD *)a1 + 79);
  v43 = *((_DWORD *)a1 + 80);
  *((_DWORD *)a1 + 15) = v41;
  *((_DWORD *)a1 + 16) = v42;
  if ( v42 >= v43 )
  {
    *((_DWORD *)a1 + 15) = v41 + 1;
    *((_DWORD *)a1 + 16) = v42 - v43;
  }
}
