/*
 * XREFs of vSrcOpaqCopyS4D24 @ 0x1C02794E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C0118648 (-pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z.c)
 */

void __fastcall vSrcOpaqCopyS4D24(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  int *v14; // r15
  unsigned __int8 *v15; // rsi
  _BYTE *v16; // rdi
  signed int v17; // ecx
  unsigned int v18; // r9d
  int v19; // r10d
  int v20; // r8d
  int v21; // r13d
  int v22; // edx
  unsigned __int8 *v23; // r14
  _DWORD *v24; // rbx
  int *v25; // rcx
  int *v26; // rcx
  _BYTE *v27; // rbx
  int *v28; // rcx
  _BYTE *v29; // rbx
  int i; // r12d
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // r9d
  unsigned int v34; // r10d
  int v35; // edx
  _DWORD *v36; // rbx
  int *v37; // rcx
  _BYTE *v38; // rbx
  _BYTE *v39; // rbx
  int *v40; // rcx
  _BYTE *v41; // rbx
  _BYTE *v42; // rbx
  unsigned __int8 *v43; // r14
  int *v44; // rcx
  _BYTE *v45; // rbx
  int *v46; // rcx
  _BYTE *v47; // rdi
  int *v48; // rcx
  _BYTE *v49; // rdi
  int v50; // [rsp+48h] [rbp-70h]
  int v51; // [rsp+4Ch] [rbp-6Ch]
  _QWORD v52[10]; // [rsp+68h] [rbp-50h] BYREF

  v52[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  v14 = pvFillOpaqTable(4, a9, a10, a11);
  v52[1] = v14;
  v15 = (unsigned __int8 *)(a2 / 2 + a1);
  v16 = (_BYTE *)(3 * a5 + a4);
  v17 = (a5 + 3) & 0xFFFFFFFC;
  v18 = a6 & 0xFFFFFFFC;
  if ( v17 <= (int)(a6 & 0xFFFFFFFC) )
  {
    v19 = v17 - a5;
    v51 = v17 - a5;
    v20 = (int)(v18 - v17) / 4;
    v50 = v20;
    v21 = a6 - v18;
    v22 = a8;
    while ( 1 )
    {
      if ( !v22 )
        goto LABEL_24;
      v23 = v15;
      v24 = v16;
      if ( v19 == 1 )
        goto LABEL_9;
      if ( v19 == 2 )
        goto LABEL_8;
      if ( v19 == 3 )
        break;
LABEL_10:
      for ( i = 0; i < v20; ++i )
      {
        v31 = *v23;
        v32 = v23[1];
        v23 += 2;
        v33 = v14[v31 & 0xF];
        v34 = v14[(unsigned __int64)v32 >> 4];
        v35 = v14[v32 & 0xF];
        *v24 = v14[v31 >> 4] + (v33 << 24);
        v36 = v24 + 1;
        *v36++ = (v33 >> 8) + (v34 << 16);
        *v36 = HIWORD(v34) + (v35 << 8);
        v24 = v36 + 1;
        v20 = v50;
      }
      if ( v21 )
      {
        v37 = &v14[(unsigned __int64)*v23 >> 4];
        *(_BYTE *)v24 = *(_BYTE *)v37;
        v38 = (char *)v24 + 1;
        v37 = (int *)((char *)v37 + 1);
        *v38++ = *(_BYTE *)v37;
        *v38 = *((_BYTE *)v37 + 1);
        v39 = v38 + 1;
        if ( v21 != 1 )
        {
          v40 = &v14[*v23 & 0xF];
          *v39 = *(_BYTE *)v40;
          v41 = v39 + 1;
          v40 = (int *)((char *)v40 + 1);
          *v41++ = *(_BYTE *)v40;
          *v41 = *((_BYTE *)v40 + 1);
          v42 = v41 + 1;
          v43 = v23 + 1;
          if ( v21 != 2 )
          {
            v44 = &v14[(unsigned __int64)*v43 >> 4];
            *v42 = *(_BYTE *)v44;
            v45 = v42 + 1;
            v44 = (int *)((char *)v44 + 1);
            *v45 = *(_BYTE *)v44;
            v45[1] = *((_BYTE *)v44 + 1);
          }
        }
      }
      v22 = --a8;
      v15 += a3;
      v16 += a7;
      v19 = v51;
    }
    v25 = &v14[*v15 & 0xF];
    *v16 = *(_BYTE *)v25;
    v16[1] = *((_BYTE *)v25 + 1);
    v16[2] = *((_BYTE *)v25 + 2);
    v24 = v16 + 3;
    v23 = v15 + 1;
LABEL_8:
    v26 = &v14[(unsigned __int64)*v23 >> 4];
    *(_BYTE *)v24 = *(_BYTE *)v26;
    v27 = (char *)v24 + 1;
    *v27++ = *((_BYTE *)v26 + 1);
    *v27 = *((_BYTE *)v26 + 2);
    v24 = v27 + 1;
LABEL_9:
    v28 = &v14[*v23 & 0xF];
    *(_BYTE *)v24 = *(_BYTE *)v28;
    v29 = (char *)v24 + 1;
    v28 = (int *)((char *)v28 + 1);
    *v29++ = *(_BYTE *)v28;
    *v29 = *((_BYTE *)v28 + 1);
    v24 = v29 + 1;
    ++v23;
    goto LABEL_10;
  }
  if ( (a5 & 3) == 1 )
  {
    v46 = &v14[*v15 & 0xF];
    *v16 = *(_BYTE *)v46;
    v47 = v16 + 1;
    v46 = (int *)((char *)v46 + 1);
    *v47++ = *(_BYTE *)v46;
    *v47 = *((_BYTE *)v46 + 1);
    v16 = v47 + 1;
    if ( a5 + 1 != a6 )
    {
      ++v15;
LABEL_23:
      v48 = &v14[(unsigned __int64)*v15 >> 4];
      *v16 = *(_BYTE *)v48;
      v49 = v16 + 1;
      v48 = (int *)((char *)v48 + 1);
      *v49 = *(_BYTE *)v48;
      v49[1] = *((_BYTE *)v48 + 1);
    }
  }
  else if ( (a5 & 3) == 2 )
  {
    goto LABEL_23;
  }
LABEL_24:
  SEMOBJ::vUnlock((SEMOBJ *)v52);
}
