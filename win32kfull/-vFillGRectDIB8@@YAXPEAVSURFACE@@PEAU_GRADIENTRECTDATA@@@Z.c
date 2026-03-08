/*
 * XREFs of ?vFillGRectDIB8@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02FA6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C02DE1EC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB8(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // r15d
  unsigned __int8 *v6; // r12
  unsigned __int8 *v7; // r13
  struct Gre::Base::SESSION_GLOBALS *v8; // r14
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // rbx
  _BYTE *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // r10d
  unsigned int v26; // r11d
  __int64 v27; // rbp
  _BYTE *v28; // rdi
  __int64 v29; // rsi
  char v30; // r8
  int v31; // r10d
  unsigned __int64 v32; // r8
  int v33; // r9d
  unsigned __int64 v34; // r8
  unsigned __int8 *v35; // [rsp+20h] [rbp-C8h]
  int v36; // [rsp+28h] [rbp-C0h]
  int v37; // [rsp+2Ch] [rbp-BCh]
  __int64 v38; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+40h] [rbp-A8h]
  __int64 v41; // [rsp+48h] [rbp-A0h]
  __int64 v42; // [rsp+50h] [rbp-98h]
  __int64 v43; // [rsp+58h] [rbp-90h]
  __int64 v44; // [rsp+60h] [rbp-88h]
  __int64 v45; // [rsp+68h] [rbp-80h]
  __int64 v46; // [rsp+70h] [rbp-78h]
  __int64 v47; // [rsp+78h] [rbp-70h]
  unsigned __int8 *Xlate555; // [rsp+90h] [rbp-58h]
  int v49; // [rsp+F0h] [rbp+8h]
  int v51; // [rsp+100h] [rbp+18h]
  int v52; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v4 = Gre::Base::Globals(a1);
  v5 = *((_DWORD *)v2 + 9);
  v6 = (unsigned __int8 *)&unk_1C032B300;
  v7 = byte_1C032B100;
  v8 = v4;
  v49 = v5;
  v9 = (unsigned __int8 *)&unk_1C032B500;
  v37 = *((_DWORD *)a1 + 22);
  v10 = (unsigned __int8 *)&unk_1C032B400;
  v51 = v5 + *((_DWORD *)v2 + 11);
  v35 = (unsigned __int8 *)&unk_1C032B300;
  v11 = *((_QWORD *)a1 + 10) + v5 * v37;
  v12 = *((_QWORD *)v2 + 20);
  v38 = v11;
  v42 = *((_QWORD *)v2 + 14);
  v43 = *((_QWORD *)v2 + 15);
  v44 = *((_QWORD *)v2 + 16);
  v45 = *((_QWORD *)v2 + 10);
  v46 = *((_QWORD *)v2 + 11);
  v47 = *((_QWORD *)v2 + 12);
  if ( (*(_DWORD *)(*(_QWORD *)(v12 + 56) + 24LL) & 0x100000) == 0 )
  {
    v9 = byte_1C032B100;
    v10 = (unsigned __int8 *)&unk_1C032B300;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)v2 + 20));
  if ( Xlate555 )
  {
    v13 = *(_DWORD *)(v12 + 76);
    if ( (v13 & 0x800) != 0 )
    {
      v14 = *(_QWORD *)(v12 + 56);
      if ( v14 == *((_QWORD *)v8 + 750) )
      {
        v15 = &unk_1C032AD84;
      }
      else
      {
        v35 = v10;
        v6 = v10;
        v7 = v9;
        if ( (v13 & 0x1000) != 0 )
          v16 = *(_QWORD *)(v14 + 80);
        else
          v16 = *(_QWORD *)(v14 + 72);
        v15 = (_BYTE *)(v16 + 4);
      }
    }
    else
    {
      v15 = byte_1C032B680;
      v35 = v10;
      v6 = v10;
      v7 = v9;
    }
    v17 = *((int *)v2 + 45);
    v18 = *((_QWORD *)v2 + 6);
    v19 = *((_QWORD *)v2 + 7);
    v20 = *((_QWORD *)v2 + 8);
    v39 = v18;
    v40 = v19;
    v41 = v20;
    if ( (_DWORD)v17 )
    {
      v18 += v45 * v17;
      v19 += v46 * v17;
      v39 = v18;
      v40 = v19;
      v20 += v47 * v17;
      v41 = v20;
    }
    v36 = *((_DWORD *)v2 + 36);
    v52 = *((_DWORD *)v2 + 37);
    while ( v5 < v51 )
    {
      v21 = *((int *)v2 + 44);
      v22 = v18;
      v23 = v19;
      v24 = v20;
      if ( (_DWORD)v21 )
      {
        v22 = v18 + v42 * v21;
        v23 = v19 + v43 * v21;
        v24 = v20 + v44 * v21;
      }
      v25 = *((_DWORD *)v2 + 8);
      v26 = *((_DWORD *)v2 + 10);
      if ( v25 < (int)(v26 + v25) )
      {
        v27 = v26;
        v28 = (_BYTE *)(v38 + *((int *)v2 + 8));
        v29 = v25 + v36;
        do
        {
          v30 = v29++;
          v31 = v6[16 * (((_BYTE)v5 + (_BYTE)v52) & 0xF) + (v30 & 0xF)];
          v32 = HIWORD(v22);
          v22 += v42;
          v33 = (unsigned __int8)v32;
          v34 = HIWORD(v23);
          v23 += v43;
          BYTE6(v34) = BYTE6(v24);
          v24 += v44;
          *v28++ = v15[Xlate555[((unsigned __int64)v7[v31 + BYTE6(v34)] >> 3) | (4
                                                                               * (v7[v31 + (unsigned __int8)v34] & 0xF8 | (32LL * (v7[v31 + v33] & 0xF8))))]];
          --v27;
        }
        while ( v27 );
        v2 = a2;
        v18 = v39;
        v19 = v40;
        v20 = v41;
        v5 = v49;
        v6 = v35;
      }
      v18 += v45;
      v19 += v46;
      v20 += v47;
      v38 += v37;
      ++v5;
      v39 = v18;
      v49 = v5;
      v40 = v19;
      v41 = v20;
    }
  }
}
