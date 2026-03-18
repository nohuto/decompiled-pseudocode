/*
 * XREFs of ?vGradientFill8@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02D2290
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0141AA0 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill8(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // ebp
  char *v3; // r15
  __int64 v4; // r12
  struct _TRIANGLEDATA *v5; // rbx
  char *v6; // r13
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // rdx
  __int64 v11; // rdi
  int v12; // eax
  int v13; // edx
  _BYTE *v14; // rdi
  __int64 v15; // rdi
  int v16; // esi
  int v17; // r11d
  int v18; // r10d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  char *v22; // r8
  _BYTE *v23; // r13
  int v24; // r9d
  unsigned __int64 v25; // r12
  int v26; // r13d
  _BYTE *v27; // rbx
  char v28; // r8
  int v29; // r10d
  unsigned __int64 v30; // r8
  unsigned __int8 v31; // r11
  unsigned __int64 v32; // r8
  unsigned __int8 v33; // r9
  unsigned __int64 v34; // r8
  int v35; // [rsp+24h] [rbp-B4h]
  int v36; // [rsp+28h] [rbp-B0h]
  __int64 v37; // [rsp+30h] [rbp-A8h]
  __int64 v38; // [rsp+38h] [rbp-A0h]
  __int64 v39; // [rsp+40h] [rbp-98h]
  __int64 v40; // [rsp+48h] [rbp-90h]
  char *v41; // [rsp+50h] [rbp-88h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-80h]
  _BYTE *v43; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v44; // [rsp+68h] [rbp-70h]
  char *v45; // [rsp+70h] [rbp-68h]
  __int64 v46; // [rsp+78h] [rbp-60h]
  char *v47; // [rsp+80h] [rbp-58h]
  int v50; // [rsp+F0h] [rbp+18h]
  char v51; // [rsp+F8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v50 = v2;
  v41 = (char *)a2 + 168;
  v6 = (char *)&gDitherMatrix16x16Halftone;
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v8 = *((_QWORD *)a2 + 19);
  v37 = *((_QWORD *)a2 + 2);
  v38 = *((_QWORD *)a2 + 3);
  v9 = *((_QWORD *)a2 + 4);
  v10 = (unsigned __int8 *)&HalftoneSaturationTable;
  v11 = *(_QWORD *)(v8 + 56);
  v39 = v9;
  v40 = v7;
  v12 = *(_DWORD *)(v11 + 24) & 0x100000;
  if ( !v12 )
    v10 = DefaultSaturationTable;
  v44 = v10;
  if ( (v12 & 0x100000) == 0 )
    v6 = (char *)&gDitherMatrix16x16Default;
  v13 = *(_DWORD *)(v8 + 76);
  v47 = v6;
  if ( (v13 & 0x800) != 0 )
  {
    if ( (struct PALETTE *)v11 == ppalDefault )
    {
      v14 = &unk_1C03311A4;
    }
    else
    {
      if ( (v13 & 0x1000) != 0 )
        v15 = *(_QWORD *)(v11 + 80);
      else
        v15 = *(_QWORD *)(v11 + 72);
      v14 = (_BYTE *)(v15 + 4);
    }
  }
  else
  {
    v14 = vTranslateIdentity;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v16 = *((_DWORD *)v5 + 3);
    if ( v16 >= *((_DWORD *)v5 + 29) )
      v16 = *((_DWORD *)v5 + 29);
    v51 = *((_DWORD *)v5 + 33);
    v36 = v16;
    v35 = *((_DWORD *)v5 + 32);
    if ( v2 < v16 )
    {
      v46 = v4;
      do
      {
        v17 = *(_DWORD *)v3;
        v18 = *((_DWORD *)v3 + 1);
        v19 = *((_QWORD *)v3 + 1);
        if ( *(_DWORD *)v3 <= *(_DWORD *)v5 )
          v17 = *(_DWORD *)v5;
        v20 = *((_QWORD *)v3 + 2);
        v21 = *((_QWORD *)v3 + 3);
        if ( v18 >= *((_DWORD *)v5 + 2) )
          v18 = *((_DWORD *)v5 + 2);
        v22 = &v6[16 * (((_BYTE)v2 + v51) & 0xF)];
        v23 = (_BYTE *)(v7 + v17);
        v45 = v22;
        v43 = v23;
        if ( *((_QWORD *)a1 + 9) <= (unsigned __int64)v23 && v17 < v18 )
        {
          v24 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v25 = v7 + v18;
          if ( v24 > 0 )
          {
            v19 += v37 * v24;
            v20 += v38 * v24;
            v21 += v39 * v24;
          }
          if ( (unsigned __int64)v23 < v25 )
          {
            v26 = v17 + v35;
            v27 = v43;
            do
            {
              v28 = v26++;
              v29 = (unsigned __int8)v45[v28 & 0xF];
              v30 = HIBYTE(v19);
              v19 += v37;
              v31 = v44[(unsigned int)(v29 + v30)];
              v32 = v20;
              v20 += v38;
              v33 = v44[v29 + HIBYTE(v32)];
              v34 = v21;
              v21 += v39;
              *v27++ = v14[Xlate555[((unsigned __int64)v44[v29 + HIBYTE(v34)] >> 3) | (4
                                                                                     * (v33 & 0xF8 | (32LL * (v31 & 0xF8))))]];
            }
            while ( (unsigned __int64)v27 < v25 );
            v5 = a2;
            v16 = v36;
            v2 = v50;
            v7 = v40;
            v3 = v41;
          }
        }
        v7 += v46;
        v3 += 40;
        v6 = v47;
        ++v2;
        v40 = v7;
        v41 = v3;
        v50 = v2;
      }
      while ( v2 < v16 );
    }
  }
}
