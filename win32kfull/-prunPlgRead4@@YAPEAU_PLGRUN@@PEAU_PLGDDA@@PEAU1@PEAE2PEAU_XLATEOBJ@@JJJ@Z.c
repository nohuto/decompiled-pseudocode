/*
 * XREFs of ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C03025B0
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0152040 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C030294C (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead4(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  struct _PLGRUN *v9; // r10
  __int64 v10; // rbp
  unsigned __int8 *v12; // rsi
  int v13; // r11d
  __int64 v14; // rdi
  unsigned int v15; // eax
  char v16; // dl
  __int64 v17; // r8
  int *v18; // rax
  int v19; // eax
  int v20; // edi
  unsigned __int8 *v21; // r14
  int v22; // edx
  __int64 v23; // r12
  __int64 v24; // r13
  unsigned int v25; // eax
  char v26; // dl
  __int64 v27; // r8
  int v28; // r9d
  unsigned __int8 *v29; // rax
  int v30; // r8d
  unsigned __int8 *v31; // rax
  int v34; // [rsp+70h] [rbp+18h]
  __int64 v35; // [rsp+78h] [rbp+20h]
  int v36; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v9 = a2;
  v10 = a6 & 7;
  v12 = &a3[4 * ((__int64)a6 >> 3)];
  v13 = *(_DWORD *)v12;
  v36 = *(_DWORD *)v12;
  if ( a4 )
  {
    v20 = a8 & 0x1F;
    v21 = &a4[4 * ((__int64)a8 >> 5)];
    v22 = *(_DWORD *)v21;
    v34 = *(_DWORD *)v21;
    if ( v8 < a7 )
    {
      v23 = v10;
      v24 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v22 & dword_1C032B830[v24]) != 0 )
        {
          v25 = (v13 & (unsigned int)dword_1C032B808[v23]) >> dword_1C032B8B8[v23];
          if ( a5 )
            v25 = a5->pulXlate[v25];
          *(_DWORD *)v9 = v25;
          prunPumpDDA(a1, v9);
        }
        vAdvXDDA(a1);
        ++v8;
        v26 = v10 + 1;
        v35 = v24 + 1;
        v27 = v23 + 1;
        v28 = v20 + 1;
        if ( v8 >= a7 )
          break;
        v29 = v12 + 4;
        if ( (v26 & 8) != 0 )
          v13 = *(_DWORD *)v29;
        v23 = 0LL;
        if ( (v26 & 8) == 0 )
          v23 = v27;
        v30 = 0;
        if ( (v26 & 8) == 0 )
        {
          v29 = v12;
          v30 = v10 + 1;
        }
        v12 = v29;
        v31 = v21 + 4;
        if ( (v28 & 0x20) != 0 )
        {
          v22 = *(_DWORD *)v31;
          v34 = *(_DWORD *)v31;
        }
        else
        {
          v22 = v34;
        }
        LODWORD(v10) = v30;
        if ( (v28 & 0x20) == 0 )
          v31 = v21;
        v20 = 0;
        v21 = v31;
        if ( (v28 & 0x20) == 0 )
          v20 = v28;
        v24 = 0LL;
        if ( (v28 & 0x20) == 0 )
          v24 = v35;
      }
    }
  }
  else if ( v8 < a7 )
  {
    v14 = (unsigned int)v10;
    while ( 1 )
    {
      v15 = (v13 & (unsigned int)dword_1C032B808[v14]) >> dword_1C032B8B8[v14];
      if ( a5 )
        v15 = a5->pulXlate[v15];
      *(_DWORD *)v9 = v15;
      prunPumpDDA(a1, v9);
      vAdvXDDA(a1);
      ++v8;
      v16 = v10 + 1;
      v17 = v14 + 1;
      if ( v8 >= a7 )
        break;
      v18 = (int *)(v12 + 4);
      if ( (v16 & 8) != 0 )
      {
        v13 = *v18;
        v36 = *v18;
      }
      else
      {
        v13 = v36;
      }
      if ( (v16 & 8) == 0 )
        v18 = (int *)v12;
      v12 = (unsigned __int8 *)v18;
      v19 = 0;
      if ( (v16 & 8) == 0 )
        v19 = v10 + 1;
      v14 = 0LL;
      LODWORD(v10) = v19;
      if ( (v16 & 8) == 0 )
        v14 = v17;
    }
  }
  return v9;
}
