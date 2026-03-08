/*
 * XREFs of ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C030294C
 * Callers:
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0151EE0 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0302050 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C03021C0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0302400 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C03025B0 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C03027F0 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdvXDDA(struct _PLGDDA *a1)
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

  v2 = *((_DWORD *)a1 + 17) + *((_DWORD *)a1 + 33);
  *((_DWORD *)a1 + 17) = v2;
  v3 = *((_DWORD *)a1 + 18) + *((_DWORD *)a1 + 34);
  v4 = *((_DWORD *)a1 + 35);
  *((_DWORD *)a1 + 18) = v3;
  if ( v3 >= v4 )
  {
    v5 = v3 - v4;
    v6 = *((_DWORD *)a1 + 26) + *((_DWORD *)a1 + 94);
    v7 = v2 + 1;
    v8 = *((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 18) = v5;
    v9 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 17) = v7;
    *((_DWORD *)a1 + 25) = v8;
    *((_DWORD *)a1 + 26) = v6;
    if ( v6 >= v9 )
    {
      *((_DWORD *)a1 + 25) = v8 + 1;
      *((_DWORD *)a1 + 26) = v6 - v9;
    }
    v10 = *((_DWORD *)a1 + 27) + *((_DWORD *)a1 + 96);
    v11 = *((_DWORD *)a1 + 28) + *((_DWORD *)a1 + 97);
    v12 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 27) = v10;
    *((_DWORD *)a1 + 28) = v11;
    if ( v11 >= v12 )
    {
      *((_DWORD *)a1 + 27) = v10 + 1;
      *((_DWORD *)a1 + 28) = v11 - v12;
    }
  }
  v13 = *((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 36);
  v14 = *((_DWORD *)a1 + 20) + *((_DWORD *)a1 + 37);
  v15 = *((_DWORD *)a1 + 38);
  *((_DWORD *)a1 + 19) = v13;
  *((_DWORD *)a1 + 20) = v14;
  if ( v14 >= v15 )
  {
    v16 = *((_DWORD *)a1 + 98);
    v17 = v14 - v15;
    v18 = v13 + 1;
    *((_DWORD *)a1 + 20) = v17;
    v19 = *((_DWORD *)a1 + 30) + *((_DWORD *)a1 + 97);
    v20 = *((_DWORD *)a1 + 29) + *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 19) = v18;
    *((_DWORD *)a1 + 29) = v20;
    *((_DWORD *)a1 + 30) = v19;
    if ( v19 >= v16 )
    {
      *((_DWORD *)a1 + 29) = v20 + 1;
      *((_DWORD *)a1 + 30) = v19 - v16;
    }
  }
  v21 = *((_DWORD *)a1 + 21) + *((_DWORD *)a1 + 39);
  v22 = *((_DWORD *)a1 + 22) + *((_DWORD *)a1 + 40);
  v23 = *((_DWORD *)a1 + 41);
  *((_DWORD *)a1 + 21) = v21;
  *((_DWORD *)a1 + 22) = v22;
  if ( v22 >= v23 )
  {
    v24 = *((_DWORD *)a1 + 95);
    v25 = v22 - v23;
    v26 = v21 + 1;
    *((_DWORD *)a1 + 22) = v25;
    v27 = *((_DWORD *)a1 + 32) + *((_DWORD *)a1 + 94);
    v28 = *((_DWORD *)a1 + 31) + *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 21) = v26;
    *((_DWORD *)a1 + 31) = v28;
    *((_DWORD *)a1 + 32) = v27;
    if ( v27 >= v24 )
    {
      *((_DWORD *)a1 + 31) = v28 + 1;
      *((_DWORD *)a1 + 32) = v27 - v24;
    }
  }
  v29 = *((_DWORD *)a1 + 23) + *((_DWORD *)a1 + 42);
  v30 = *((_DWORD *)a1 + 24) + *((_DWORD *)a1 + 43);
  v31 = *((_DWORD *)a1 + 44);
  *((_DWORD *)a1 + 23) = v29;
  *((_DWORD *)a1 + 24) = v30;
  if ( v30 >= v31 )
  {
    *((_DWORD *)a1 + 23) = v29 + 1;
    *((_DWORD *)a1 + 24) = v30 - v31;
  }
  v32 = *((_DWORD *)a1 + 25) + *((_DWORD *)a1 + 57);
  v33 = *((_DWORD *)a1 + 26) + *((_DWORD *)a1 + 58);
  v34 = *((_DWORD *)a1 + 59);
  *((_DWORD *)a1 + 25) = v32;
  *((_DWORD *)a1 + 26) = v33;
  if ( v33 >= v34 )
  {
    *((_DWORD *)a1 + 25) = v32 + 1;
    *((_DWORD *)a1 + 26) = v33 - v34;
  }
  v35 = *((_DWORD *)a1 + 27) + *((_DWORD *)a1 + 60);
  v36 = *((_DWORD *)a1 + 28) + *((_DWORD *)a1 + 61);
  v37 = *((_DWORD *)a1 + 62);
  *((_DWORD *)a1 + 27) = v35;
  *((_DWORD *)a1 + 28) = v36;
  if ( v36 >= v37 )
  {
    *((_DWORD *)a1 + 27) = v35 + 1;
    *((_DWORD *)a1 + 28) = v36 - v37;
  }
  v38 = *((_DWORD *)a1 + 29) + *((_DWORD *)a1 + 63);
  v39 = *((_DWORD *)a1 + 30) + *((_DWORD *)a1 + 64);
  v40 = *((_DWORD *)a1 + 65);
  *((_DWORD *)a1 + 29) = v38;
  *((_DWORD *)a1 + 30) = v39;
  if ( v39 >= v40 )
  {
    *((_DWORD *)a1 + 29) = v38 + 1;
    *((_DWORD *)a1 + 30) = v39 - v40;
  }
  v41 = *((_DWORD *)a1 + 31) + *((_DWORD *)a1 + 66);
  v42 = *((_DWORD *)a1 + 32) + *((_DWORD *)a1 + 67);
  v43 = *((_DWORD *)a1 + 68);
  *((_DWORD *)a1 + 31) = v41;
  *((_DWORD *)a1 + 32) = v42;
  if ( v42 >= v43 )
  {
    *((_DWORD *)a1 + 31) = v41 + 1;
    *((_DWORD *)a1 + 32) = v42 - v43;
  }
}
