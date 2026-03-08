/*
 * XREFs of ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C03021C0
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0152040 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C030294C (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead1(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edi
  struct _PLGRUN *v9; // r10
  unsigned int v10; // ebx
  unsigned __int8 *v12; // r14
  int v13; // r8d
  ULONG v14; // ecx
  int v15; // r11d
  ULONG *pulXlate; // rax
  __int64 v17; // rbp
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r9
  int *v21; // rax
  int v22; // esi
  unsigned __int8 *v23; // r12
  int v24; // edx
  __int64 v25; // r15
  int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // r9
  int v29; // r11d
  int *v30; // rax
  unsigned __int8 *v31; // rax
  int v32; // ecx
  bool v33; // zf
  __int64 v35; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+80h] [rbp+18h]
  int v38; // [rsp+88h] [rbp+20h]
  ULONG v39; // [rsp+90h] [rbp+28h]
  int v40; // [rsp+98h] [rbp+30h]

  v8 = a6;
  v9 = a2;
  v10 = a6 & 0x1F;
  v12 = &a3[4 * ((__int64)a6 >> 5)];
  v13 = *(_DWORD *)v12;
  v40 = *(_DWORD *)v12;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v14 = *pulXlate;
    v15 = pulXlate[1];
  }
  else
  {
    v14 = 0;
    v15 = 1;
  }
  v37 = v15;
  v39 = v14;
  v17 = v10;
  if ( a4 )
  {
    v22 = a8 & 0x1F;
    v23 = &a4[4 * ((__int64)a8 >> 5)];
    v24 = *(_DWORD *)v23;
    v38 = *(_DWORD *)v23;
    if ( v8 < a7 )
    {
      v25 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v24 & dword_1C032B830[v25]) != 0 )
        {
          v26 = v15;
          if ( (v13 & dword_1C032B830[v17]) == 0 )
            v26 = v14;
          *(_DWORD *)v9 = v26;
          prunPumpDDA(a1, v9);
        }
        vAdvXDDA(a1);
        ++v8;
        v27 = v10 + 1;
        v35 = v25 + 1;
        v28 = v17 + 1;
        v29 = v22 + 1;
        if ( v8 >= a7 )
          break;
        v30 = (int *)(v12 + 4);
        if ( (v27 & 0x20) != 0 )
        {
          v13 = *v30;
          v40 = *v30;
        }
        else
        {
          v13 = v40;
        }
        v17 = 0LL;
        if ( (v27 & 0x20) == 0 )
          v17 = v28;
        v10 = 0;
        if ( (v27 & 0x20) == 0 )
        {
          v30 = (int *)v12;
          v10 = v27;
        }
        v12 = (unsigned __int8 *)v30;
        v31 = v23 + 4;
        v32 = v29 & 0x20;
        if ( (v29 & 0x20) != 0 )
        {
          v24 = *(_DWORD *)v31;
          v38 = *(_DWORD *)v31;
        }
        else
        {
          v24 = v38;
        }
        if ( (v29 & 0x20) == 0 )
          v31 = v23;
        v22 = 0;
        v23 = v31;
        if ( (v29 & 0x20) == 0 )
          v22 = v29;
        v15 = v37;
        v25 = 0LL;
        v33 = v32 == 0;
        v14 = v39;
        if ( v33 )
          v25 = v35;
      }
    }
  }
  else if ( v8 < a7 )
  {
    while ( 1 )
    {
      v18 = v15;
      if ( (v13 & dword_1C032B830[v17]) == 0 )
        v18 = v14;
      *(_DWORD *)v9 = v18;
      prunPumpDDA(a1, v9);
      vAdvXDDA(a1);
      ++v8;
      v19 = v10 + 1;
      v20 = v17 + 1;
      if ( v8 >= a7 )
        break;
      v21 = (int *)(v12 + 4);
      if ( (v19 & 0x20) != 0 )
      {
        v13 = *v21;
        v40 = *v21;
      }
      else
      {
        v13 = v40;
      }
      v15 = v37;
      if ( (v19 & 0x20) == 0 )
        v21 = (int *)v12;
      v10 = 0;
      v12 = (unsigned __int8 *)v21;
      if ( (v19 & 0x20) == 0 )
        v10 = v19;
      v17 = 0LL;
      v14 = v39;
      if ( (v19 & 0x20) == 0 )
        v17 = v20;
    }
  }
  return v9;
}
