/*
 * XREFs of ?vGradientFill4@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02D2E70
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0153D04 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill4(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // esi
  char *v3; // r12
  __int64 v4; // r14
  struct _TRIANGLEDATA *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rdi
  _BYTE *v11; // rdi
  __int64 v12; // rdi
  int v13; // ebp
  int v14; // r13d
  int v15; // r14d
  int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // r15
  int v21; // r10d
  _BYTE *v22; // r13
  int v23; // ebp
  char v24; // bl
  int v25; // r10d
  char v26; // dl
  char v27; // al
  char v28; // al
  int v29; // [rsp+20h] [rbp-98h]
  int v30; // [rsp+24h] [rbp-94h]
  int v31; // [rsp+28h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+38h] [rbp-80h]
  __int64 v34; // [rsp+40h] [rbp-78h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  char *v36; // [rsp+50h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-60h]
  char *v38; // [rsp+60h] [rbp-58h]
  __int64 v39; // [rsp+68h] [rbp-50h]
  int v40; // [rsp+C0h] [rbp+8h]
  int v42; // [rsp+D0h] [rbp+18h]
  _BYTE *v43; // [rsp+D8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v40 = v2;
  v36 = (char *)a2 + 168;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v7 = *((_QWORD *)a2 + 19);
  v33 = *((_QWORD *)a2 + 2);
  v34 = *((_QWORD *)a2 + 3);
  v8 = *((_QWORD *)a2 + 4);
  v9 = *(_DWORD *)(v7 + 76);
  v32 = v6;
  v35 = v8;
  if ( (v9 & 0x800) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 56);
    if ( (struct PALETTE *)v10 == ppalDefault )
    {
      v11 = &unk_1C0334E54;
    }
    else
    {
      if ( (v9 & 0x1000) != 0 )
        v12 = *(_QWORD *)(v10 + 80);
      else
        v12 = *(_QWORD *)(v10 + 72);
      v11 = (_BYTE *)(v12 + 4);
    }
  }
  else
  {
    v11 = vTranslateIdentity;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v7);
  if ( Xlate555 )
  {
    v13 = *((_DWORD *)v5 + 3);
    v14 = *((_DWORD *)v5 + 33);
    if ( v13 >= *((_DWORD *)v5 + 29) )
      v13 = *((_DWORD *)v5 + 29);
    v30 = v13;
    v31 = *((_DWORD *)v5 + 33);
    v42 = *((_DWORD *)v5 + 32);
    if ( v2 < v13 )
    {
      v39 = v4;
      do
      {
        v15 = *(_DWORD *)v3;
        v16 = *((_DWORD *)v3 + 1);
        v17 = *((_QWORD *)v3 + 1);
        if ( *(_DWORD *)v3 <= *(_DWORD *)v5 )
          v15 = *(_DWORD *)v5;
        v18 = *((_QWORD *)v3 + 2);
        v19 = *((_QWORD *)v3 + 3);
        if ( v16 >= *((_DWORD *)v5 + 2) )
          v16 = *((_DWORD *)v5 + 2);
        v29 = v16;
        v20 = v32;
        v38 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v2 + (_BYTE)v14) & 0xFu);
        if ( v15 < v16 )
        {
          v21 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v22 = (_BYTE *)(v32 + v15 / 2);
          if ( v21 > 0 )
          {
            v17 += v33 * v21;
            v18 += v34 * v21;
            v19 += v35 * v21;
          }
          v23 = v15 & 1;
          v24 = v15 + v42;
          do
          {
            v43 = v22;
            v25 = (unsigned __int8)v38[v24 & 0xF];
            v26 = v11[Xlate555[((unsigned __int64)DefaultSaturationTable[v25 + HIBYTE(v19)] >> 3) | (4 * (DefaultSaturationTable[v25 + HIBYTE(v18)] & 0xF8 | (32LL * (DefaultSaturationTable[v25 + HIBYTE(v17)] & 0xF8))))]];
            v27 = *v22;
            if ( v23 )
            {
              v23 = 0;
              ++v22;
              v28 = v27 & 0xF0;
            }
            else
            {
              v28 = v27 & 0xF;
              v23 = 1;
              v26 *= 16;
            }
            v18 += v34;
            ++v15;
            v19 += v35;
            ++v24;
            v17 += v33;
            *v43 = v26 | v28;
          }
          while ( v15 < v29 );
          v5 = a2;
          v2 = v40;
          v13 = v30;
          v20 = v32;
          v3 = v36;
          LOBYTE(v14) = v31;
        }
        v3 += 40;
        ++v2;
        v32 = v39 + v20;
        v36 = v3;
        v40 = v2;
      }
      while ( v2 < v13 );
    }
  }
}
