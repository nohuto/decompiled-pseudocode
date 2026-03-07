void __fastcall vFillGRectDIB4(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // esi
  struct Gre::Base::SESSION_GLOBALS *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rbx
  _BYTE *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // r12d
  _BYTE *v26; // rdi
  int v27; // ebp
  char v28; // si
  int v29; // r10d
  char v30; // dl
  char v31; // r10
  char v32; // dl
  int v33; // [rsp+20h] [rbp-C8h]
  char v34; // [rsp+24h] [rbp-C4h]
  __int64 v35; // [rsp+28h] [rbp-C0h]
  __int64 v36; // [rsp+30h] [rbp-B8h]
  __int64 v37; // [rsp+38h] [rbp-B0h]
  __int64 v38; // [rsp+40h] [rbp-A8h]
  __int64 v39; // [rsp+48h] [rbp-A0h]
  __int64 v40; // [rsp+50h] [rbp-98h]
  __int64 v41; // [rsp+58h] [rbp-90h]
  __int64 v42; // [rsp+60h] [rbp-88h]
  __int64 v43; // [rsp+68h] [rbp-80h]
  __int64 v44; // [rsp+70h] [rbp-78h]
  char *v45; // [rsp+80h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+88h] [rbp-60h]
  __int64 v47; // [rsp+90h] [rbp-58h]
  int v48; // [rsp+F0h] [rbp+8h]
  int v50; // [rsp+100h] [rbp+18h]
  int v51; // [rsp+108h] [rbp+20h]
  _BYTE *v52; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v4 = Gre::Base::Globals(a1);
  v5 = *((_DWORD *)v2 + 9);
  v6 = v4;
  v7 = *((int *)a1 + 22);
  v8 = *((_QWORD *)v2 + 20);
  v50 = v5 + *((_DWORD *)v2 + 11);
  v35 = *((_QWORD *)v2 + 14);
  v36 = *((_QWORD *)v2 + 15);
  v40 = *((_QWORD *)v2 + 16);
  v42 = *((_QWORD *)v2 + 10);
  v43 = *((_QWORD *)v2 + 11);
  v44 = *((_QWORD *)v2 + 12);
  v9 = *(_DWORD *)(v8 + 76);
  v10 = *((_QWORD *)a1 + 10) + (int)v7 * v5;
  v48 = v5;
  v41 = v10;
  if ( (v9 & 0x800) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 56);
    if ( v11 == *((_QWORD *)v6 + 750) )
    {
      v12 = &unk_1C032AD84;
    }
    else
    {
      if ( (v9 & 0x1000) != 0 )
        v13 = *(_QWORD *)(v11 + 80);
      else
        v13 = *(_QWORD *)(v11 + 72);
      v12 = (_BYTE *)(v13 + 4);
    }
  }
  else
  {
    v12 = byte_1C032B680;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v14 = *((int *)v2 + 45);
    v15 = *((_QWORD *)v2 + 6);
    v16 = *((_QWORD *)v2 + 7);
    v17 = *((_QWORD *)v2 + 8);
    v37 = v15;
    v38 = v16;
    v39 = v17;
    if ( (_DWORD)v14 )
    {
      v16 += v43 * v14;
      v15 += v42 * v14;
      v37 = v15;
      v38 = v16;
      v17 += v44 * v14;
      v39 = v17;
    }
    v18 = *((_DWORD *)v2 + 37);
    v34 = v18;
    v33 = *((_DWORD *)v2 + 36);
    if ( v5 < v50 )
    {
      v19 = v35;
      v20 = v36;
      v47 = v7;
      do
      {
        v21 = v15;
        v22 = v16;
        v23 = *((int *)v2 + 44);
        v45 = (char *)&unk_1C032B300 + 16 * (((_BYTE)v5 + (_BYTE)v18) & 0xFu);
        v24 = v17;
        if ( (_DWORD)v23 )
        {
          v21 = v15 + v19 * v23;
          v22 = v16 + v20 * v23;
          v24 = v17 + v40 * v23;
        }
        v25 = *((_DWORD *)v2 + 8);
        v51 = v25 + *((_DWORD *)v2 + 10);
        if ( v25 < v51 )
        {
          v26 = (_BYTE *)(v10 + *((_DWORD *)v2 + 8) / 2);
          v27 = v51;
          v28 = v25 + v33;
          do
          {
            v52 = v26;
            v29 = (unsigned __int8)v45[v28 & 0xF];
            v30 = *v26;
            v31 = v12[Xlate555[((unsigned __int64)byte_1C032B100[v29 + BYTE6(v24)] >> 3) | (4
                                                                                          * (byte_1C032B100[v29 + BYTE6(v22)] & 0xF8 | (32LL * (byte_1C032B100[v29 + BYTE6(v21)] & 0xF8))))]];
            if ( (v25 & 1) != 0 )
            {
              ++v26;
              v32 = v31 | v30 & 0xF0;
            }
            else
            {
              v32 = v30 & 0xF | (16 * v31);
            }
            ++v25;
            v22 += v36;
            ++v28;
            v24 += v40;
            v21 += v35;
            *v52 = v32;
          }
          while ( v25 < v27 );
          v2 = a2;
          v5 = v48;
          v15 = v37;
          v16 = v38;
          v17 = v39;
          v10 = v41;
          v19 = v35;
          v20 = v36;
        }
        v10 += v47;
        ++v5;
        v15 += v42;
        v16 += v43;
        v17 += v44;
        LOBYTE(v18) = v34;
        v41 = v10;
        v37 = v15;
        v38 = v16;
        v39 = v17;
        v48 = v5;
      }
      while ( v5 < v50 );
    }
  }
}
