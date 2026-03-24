/*
 * XREFs of ?vGradientFill8@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02D3D80
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C01542C4 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill8(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // ebp
  char *v3; // r12
  __int64 v4; // r15
  struct _TRIANGLEDATA *v5; // rbx
  char *v6; // r13
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // rdx
  __int64 v11; // rdi
  int v12; // edx
  _BYTE *v13; // rdi
  __int64 v14; // rdi
  int v15; // esi
  int v16; // r11d
  int v17; // r10d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _BYTE *v21; // r13
  int v22; // r9d
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rbp
  int v26; // ebx
  __int64 v27; // r8
  int v28; // r10d
  unsigned __int64 v29; // r8
  unsigned __int8 v30; // r11
  unsigned __int64 v31; // r8
  unsigned __int8 v32; // r9
  unsigned __int64 v33; // r8
  int v34; // [rsp+20h] [rbp-A8h]
  int v35; // [rsp+24h] [rbp-A4h]
  __int64 v36; // [rsp+28h] [rbp-A0h]
  __int64 v37; // [rsp+30h] [rbp-98h]
  __int64 v38; // [rsp+38h] [rbp-90h]
  __int64 v39; // [rsp+40h] [rbp-88h]
  char *v40; // [rsp+48h] [rbp-80h]
  unsigned __int8 *Xlate555; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v42; // [rsp+58h] [rbp-70h]
  char *v43; // [rsp+68h] [rbp-60h]
  __int64 v44; // [rsp+70h] [rbp-58h]
  char *v45; // [rsp+78h] [rbp-50h]
  int v48; // [rsp+E0h] [rbp+18h]
  char v49; // [rsp+E8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v48 = v2;
  v40 = (char *)a2 + 168;
  v6 = (char *)&gDitherMatrix16x16Halftone;
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v8 = *((_QWORD *)a2 + 19);
  v36 = *((_QWORD *)a2 + 2);
  v37 = *((_QWORD *)a2 + 3);
  v9 = *((_QWORD *)a2 + 4);
  v10 = (unsigned __int8 *)&HalftoneSaturationTable;
  v11 = *(_QWORD *)(v8 + 56);
  v38 = v9;
  v39 = v7;
  if ( (*(_DWORD *)(v11 + 24) & 0x100000) == 0 )
    v10 = DefaultSaturationTable;
  v42 = v10;
  if ( (*(_DWORD *)(v11 + 24) & 0x100000) == 0 )
    v6 = (char *)&gDitherMatrix16x16Default;
  v12 = *(_DWORD *)(v8 + 76);
  v45 = v6;
  if ( (v12 & 0x800) != 0 )
  {
    if ( (struct PALETTE *)v11 == ppalDefault )
    {
      v13 = &unk_1C0335E54;
    }
    else
    {
      if ( (v12 & 0x1000) != 0 )
        v14 = *(_QWORD *)(v11 + 80);
      else
        v14 = *(_QWORD *)(v11 + 72);
      v13 = (_BYTE *)(v14 + 4);
    }
  }
  else
  {
    v13 = vTranslateIdentity;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v15 = *((_DWORD *)v5 + 3);
    if ( v15 >= *((_DWORD *)v5 + 29) )
      v15 = *((_DWORD *)v5 + 29);
    v49 = *((_DWORD *)v5 + 33);
    v35 = v15;
    v34 = *((_DWORD *)v5 + 32);
    if ( v2 < v15 )
    {
      v44 = v4;
      do
      {
        v16 = *(_DWORD *)v3;
        v17 = *((_DWORD *)v3 + 1);
        v18 = *((_QWORD *)v3 + 1);
        if ( *(_DWORD *)v3 <= *(_DWORD *)v5 )
          v16 = *(_DWORD *)v5;
        v19 = *((_QWORD *)v3 + 2);
        v20 = *((_QWORD *)v3 + 3);
        if ( v17 >= *((_DWORD *)v5 + 2) )
          v17 = *((_DWORD *)v5 + 2);
        v43 = &v6[16 * (((_BYTE)v2 + v49) & 0xF)];
        v21 = (_BYTE *)(v7 + v16);
        if ( *((_QWORD *)a1 + 9) <= (unsigned __int64)v21 && v16 < v17 )
        {
          v22 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v23 = v7 + v17;
          if ( v22 > 0 )
          {
            v18 += v36 * v22;
            v19 += v37 * v22;
            v20 += v38 * v22;
          }
          v24 = v23 - (_QWORD)v21;
          if ( (unsigned __int64)v21 > v23 )
            v24 = 0LL;
          if ( v24 )
          {
            v25 = 0LL;
            v26 = v16 + v34;
            do
            {
              ++v25;
              v27 = v26++ & 0xF;
              v28 = (unsigned __int8)v43[v27];
              v29 = v18;
              v18 += v36;
              v30 = v42[v28 + HIBYTE(v29)];
              v31 = v19;
              v19 += v37;
              v32 = v42[v28 + HIBYTE(v31)];
              v33 = v20;
              v20 += v38;
              *v21++ = v13[Xlate555[((unsigned __int64)v42[v28 + HIBYTE(v33)] >> 3) | (4
                                                                                     * (v32 & 0xF8 | (32LL * (v30 & 0xF8))))]];
            }
            while ( v25 < v24 );
            v5 = a2;
            v15 = v35;
            v2 = v48;
            v7 = v39;
            v3 = v40;
          }
        }
        v7 += v44;
        v3 += 40;
        v6 = v45;
        ++v2;
        v39 = v7;
        v40 = v3;
        v48 = v2;
      }
      while ( v2 < v15 );
    }
  }
}
