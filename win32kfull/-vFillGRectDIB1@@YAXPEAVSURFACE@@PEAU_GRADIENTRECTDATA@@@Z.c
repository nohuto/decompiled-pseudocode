/*
 * XREFs of ?vFillGRectDIB1@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02F9340
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C02DE1EC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB1(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rdi
  int v3; // esi
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // edx
  unsigned int v12; // r11d
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // r13d
  _BYTE *v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // r14
  int v22; // r11d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // ecx
  _BYTE *v26; // rax
  int v27; // eax
  int v28; // [rsp+20h] [rbp-C8h]
  char v29; // [rsp+24h] [rbp-C4h]
  __int64 v30; // [rsp+28h] [rbp-C0h]
  __int64 v31; // [rsp+30h] [rbp-B8h]
  __int64 v32; // [rsp+38h] [rbp-B0h]
  __int64 v33; // [rsp+40h] [rbp-A8h]
  __int64 v34; // [rsp+48h] [rbp-A0h]
  __int64 v35; // [rsp+50h] [rbp-98h]
  __int64 v36; // [rsp+58h] [rbp-90h]
  __int64 v37; // [rsp+60h] [rbp-88h]
  __int64 v38; // [rsp+68h] [rbp-80h]
  __int64 v39; // [rsp+70h] [rbp-78h]
  char *v40; // [rsp+80h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+88h] [rbp-60h]
  unsigned int v42; // [rsp+F0h] [rbp+8h]
  int v44; // [rsp+100h] [rbp+18h]
  int v45; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((int *)a1 + 22);
  v42 = *((_DWORD *)a2 + 10);
  v5 = v3 + *((_DWORD *)a2 + 11);
  v44 = v3;
  v28 = v5;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v3;
  v33 = *((_QWORD *)a2 + 14);
  v34 = *((_QWORD *)a2 + 15);
  v35 = *((_QWORD *)a2 + 16);
  v37 = *((_QWORD *)a2 + 10);
  v38 = *((_QWORD *)a2 + 11);
  v39 = *((_QWORD *)a2 + 12);
  v36 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 20));
  if ( Xlate555 )
  {
    v7 = *((int *)v2 + 45);
    v8 = *((_QWORD *)v2 + 6);
    v9 = *((_QWORD *)v2 + 7);
    v10 = *((_QWORD *)v2 + 8);
    v30 = v8;
    v31 = v9;
    v32 = v10;
    if ( (_DWORD)v7 )
    {
      v9 += v38 * v7;
      v8 += v37 * v7;
      v30 = v8;
      v31 = v9;
      v10 += v39 * v7;
      v32 = v10;
    }
    v11 = *((_DWORD *)v2 + 37);
    v29 = v11;
    v45 = *((_DWORD *)v2 + 36);
    if ( v3 < v5 )
    {
      v12 = v42;
      do
      {
        v13 = *((_DWORD *)v2 + 8);
        v14 = v8;
        v15 = v9;
        v16 = v10;
        v17 = *((int *)v2 + 44);
        if ( (_DWORD)v17 )
        {
          v14 = v8 + v33 * v17;
          v15 = v9 + v34 * v17;
          v16 = v10 + v35 * v17;
        }
        v18 = *((_DWORD *)v2 + 8) & 7;
        if ( v13 < (int)(v13 + v12) )
        {
          v19 = (_BYTE *)(v6 + v13 / 8);
          v40 = (char *)&unk_1C032B300 + 16 * (((_BYTE)v3 + (_BYTE)v11) & 0xFu);
          v20 = v13 + v45;
          v21 = v12;
          do
          {
            v22 = (unsigned __int8)(2 * v40[v20 & 0xF]);
            v23 = (v22 + (unsigned int)BYTE6(v15) >= 0xFF ? 0x3E0 : 0) | (unsigned __int64)(v22
                                                                                          + (unsigned int)BYTE6(v14) >= 0xFF
                                                                                          ? 0x7C00
                                                                                          : 0);
            v24 = -(__int64)(v22 + (unsigned int)BYTE6(v16) < 0xFF);
            v15 += v34;
            v16 += v35;
            v14 += v33;
            ++v20;
            v25 = v18 + 1;
            *v19 = *v19 & ~(1 << (7 - v18)) | (byte_1C032B680[Xlate555[~(_BYTE)v24 & 0x1F | v23]] << (7 - v18));
            v26 = v19 + 1;
            if ( v18 != 7 )
              v26 = v19;
            v19 = v26;
            v27 = v18;
            v18 = 0;
            if ( v27 != 7 )
              v18 = v25;
            --v21;
          }
          while ( v21 );
          v2 = a2;
          v3 = v44;
          v8 = v30;
          v9 = v31;
          v10 = v32;
          v6 = v36;
          v12 = v42;
        }
        v6 += v4;
        ++v3;
        v8 += v37;
        v9 += v38;
        v10 += v39;
        LOBYTE(v11) = v29;
        v36 = v6;
        v30 = v8;
        v31 = v9;
        v32 = v10;
        v44 = v3;
      }
      while ( v3 < v28 );
    }
  }
}
