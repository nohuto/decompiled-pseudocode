/*
 * XREFs of ?vFillGRectDIB4@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02D14D0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0153D04 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB4(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // esi
  struct _GRADIENTRECTDATA *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rdi
  _BYTE *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // r15
  int v16; // ecx
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r12d
  _BYTE *v24; // rbx
  int v25; // ebp
  char v26; // si
  int v27; // r10d
  char v28; // dl
  char v29; // al
  char v30; // al
  int v31; // [rsp+20h] [rbp-C8h]
  char v32; // [rsp+24h] [rbp-C4h]
  __int64 v33; // [rsp+28h] [rbp-C0h]
  __int64 v34; // [rsp+30h] [rbp-B8h]
  __int64 v35; // [rsp+38h] [rbp-B0h]
  __int64 v36; // [rsp+40h] [rbp-A8h]
  __int64 v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+50h] [rbp-98h]
  __int64 v39; // [rsp+58h] [rbp-90h]
  __int64 v40; // [rsp+60h] [rbp-88h]
  __int64 v41; // [rsp+68h] [rbp-80h]
  __int64 v42; // [rsp+70h] [rbp-78h]
  char *v43; // [rsp+80h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+88h] [rbp-60h]
  __int64 v45; // [rsp+90h] [rbp-58h]
  int v46; // [rsp+F0h] [rbp+8h]
  int v48; // [rsp+100h] [rbp+18h]
  int v49; // [rsp+108h] [rbp+20h]
  _BYTE *v50; // [rsp+108h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 9);
  v3 = a2;
  v4 = *((int *)a1 + 22);
  v48 = v2 + *((_DWORD *)a2 + 11);
  v46 = v2;
  v5 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v6 = *((_QWORD *)a2 + 20);
  v33 = *((_QWORD *)a2 + 14);
  v34 = *((_QWORD *)a2 + 15);
  v38 = *((_QWORD *)a2 + 16);
  v40 = *((_QWORD *)a2 + 10);
  v41 = *((_QWORD *)a2 + 11);
  v7 = *((_QWORD *)a2 + 12);
  v8 = *(_DWORD *)(v6 + 76);
  v39 = v5;
  v42 = v7;
  if ( (v8 & 0x800) != 0 )
  {
    v9 = *(_QWORD *)(v6 + 56);
    if ( (struct PALETTE *)v9 == ppalDefault )
    {
      v10 = &unk_1C0334E54;
    }
    else
    {
      if ( (v8 & 0x1000) != 0 )
        v11 = *(_QWORD *)(v9 + 80);
      else
        v11 = *(_QWORD *)(v9 + 72);
      v10 = (_BYTE *)(v11 + 4);
    }
  }
  else
  {
    v10 = vTranslateIdentity;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v6);
  if ( Xlate555 )
  {
    v12 = *((int *)v3 + 45);
    v13 = *((_QWORD *)v3 + 6);
    v14 = *((_QWORD *)v3 + 7);
    v15 = *((_QWORD *)v3 + 8);
    v35 = v13;
    v36 = v14;
    v37 = v15;
    if ( (_DWORD)v12 )
    {
      v14 += v41 * v12;
      v13 += v40 * v12;
      v35 = v13;
      v36 = v14;
      v15 += v42 * v12;
      v37 = v15;
    }
    v16 = *((_DWORD *)v3 + 37);
    v32 = v16;
    v31 = *((_DWORD *)v3 + 36);
    if ( v2 < v48 )
    {
      v17 = v33;
      v18 = v34;
      v45 = v4;
      do
      {
        v19 = v13;
        v20 = v14;
        v21 = *((int *)v3 + 44);
        v43 = (char *)&gDitherMatrix16x16Default + 16 * (((_BYTE)v2 + (_BYTE)v16) & 0xFu);
        v22 = v15;
        if ( (_DWORD)v21 )
        {
          v19 = v13 + v17 * v21;
          v20 = v14 + v18 * v21;
          v22 = v15 + v38 * v21;
        }
        v23 = *((_DWORD *)v3 + 8);
        v49 = v23 + *((_DWORD *)v3 + 10);
        if ( v23 < v49 )
        {
          v24 = (_BYTE *)(v5 + *((_DWORD *)v3 + 8) / 2);
          v25 = v49;
          v26 = v23 + v31;
          do
          {
            v50 = v24;
            v27 = (unsigned __int8)v43[v26 & 0xF];
            v28 = v10[Xlate555[((unsigned __int64)DefaultSaturationTable[v27 + BYTE6(v22)] >> 3) | (4
                                                                                                  * (DefaultSaturationTable[v27 + BYTE6(v20)] & 0xF8 | (32LL * (DefaultSaturationTable[v27 + BYTE6(v19)] & 0xF8))))]];
            v29 = *v24;
            if ( (v23 & 1) != 0 )
            {
              ++v24;
              v30 = v29 & 0xF0;
            }
            else
            {
              v30 = v29 & 0xF;
              v28 *= 16;
            }
            v20 += v34;
            ++v23;
            v22 += v38;
            ++v26;
            v19 += v33;
            *v50 = v28 | v30;
          }
          while ( v23 < v25 );
          v3 = a2;
          v2 = v46;
          v13 = v35;
          v14 = v36;
          v15 = v37;
          v5 = v39;
          v17 = v33;
          v18 = v34;
        }
        v5 += v45;
        ++v2;
        v13 += v40;
        v14 += v41;
        v15 += v42;
        LOBYTE(v16) = v32;
        v39 = v5;
        v35 = v13;
        v36 = v14;
        v37 = v15;
        v46 = v2;
      }
      while ( v2 < v48 );
    }
  }
}
