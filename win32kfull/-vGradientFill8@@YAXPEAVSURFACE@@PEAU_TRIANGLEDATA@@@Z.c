void __fastcall vGradientFill8(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // ebp
  char *v6; // r13
  __int64 v7; // r15
  char *v8; // r12
  __int64 v9; // rdx
  struct Gre::Base::SESSION_GLOBALS *v10; // r9
  unsigned __int8 *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // eax
  _BYTE *v16; // rbx
  __int64 v17; // rbx
  int v18; // esi
  int v19; // r11d
  int v20; // r10d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  char *v24; // r8
  _BYTE *v25; // r13
  int v26; // r9d
  unsigned __int64 v27; // r15
  int v28; // r13d
  _BYTE *v29; // rdi
  char v30; // r8
  int v31; // r10d
  unsigned __int64 v32; // r8
  unsigned __int8 v33; // r11
  unsigned __int64 v34; // r8
  unsigned __int8 v35; // r9
  unsigned __int64 v36; // r8
  int v37; // [rsp+24h] [rbp-B4h]
  int v38; // [rsp+28h] [rbp-B0h]
  __int64 v39; // [rsp+30h] [rbp-A8h]
  __int64 v40; // [rsp+38h] [rbp-A0h]
  __int64 v41; // [rsp+40h] [rbp-98h]
  __int64 v42; // [rsp+48h] [rbp-90h]
  char *v43; // [rsp+50h] [rbp-88h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-80h]
  _BYTE *v45; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v46; // [rsp+68h] [rbp-70h]
  char *v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+78h] [rbp-60h]
  char *v49; // [rsp+80h] [rbp-58h]
  int v52; // [rsp+F0h] [rbp+18h]
  int v53; // [rsp+F8h] [rbp+20h]

  v2 = a2;
  v4 = Gre::Base::Globals(a1);
  v5 = *((_DWORD *)v2 + 28);
  v6 = (char *)&unk_1C032B400;
  v7 = *((int *)a1 + 22);
  v8 = (char *)v2 + 168;
  v9 = *((_QWORD *)v2 + 19);
  v10 = v4;
  v39 = *((_QWORD *)v2 + 2);
  v40 = *((_QWORD *)v2 + 3);
  v41 = *((_QWORD *)v2 + 4);
  v11 = (unsigned __int8 *)&unk_1C032B500;
  v52 = v5;
  v43 = (char *)v2 + 168;
  v12 = *((_QWORD *)a1 + 10) + (int)v7 * v5;
  v13 = *(_QWORD *)(v9 + 56);
  v42 = v12;
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 0x100000) == 0 )
    v11 = byte_1C032B100;
  v46 = v11;
  if ( (v14 & 0x100000) == 0 )
    v6 = (char *)&unk_1C032B300;
  v15 = *(_DWORD *)(v9 + 76);
  v49 = v6;
  if ( (v15 & 0x800) != 0 )
  {
    if ( v13 == *((_QWORD *)v10 + 750) )
    {
      v16 = &unk_1C032AD84;
    }
    else
    {
      if ( (v15 & 0x1000) != 0 )
        v17 = *(_QWORD *)(v13 + 80);
      else
        v17 = *(_QWORD *)(v13 + 72);
      v16 = (_BYTE *)(v17 + 4);
    }
  }
  else
  {
    v16 = byte_1C032B680;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v9);
  if ( Xlate555 )
  {
    v18 = *((_DWORD *)v2 + 3);
    if ( v18 >= *((_DWORD *)v2 + 29) )
      v18 = *((_DWORD *)v2 + 29);
    v53 = *((_DWORD *)v2 + 33);
    v38 = v18;
    v37 = *((_DWORD *)v2 + 32);
    if ( v5 < v18 )
    {
      v48 = v7;
      do
      {
        v19 = *(_DWORD *)v8;
        v20 = *((_DWORD *)v8 + 1);
        v21 = *((_QWORD *)v8 + 1);
        if ( *(_DWORD *)v8 <= *(_DWORD *)v2 )
          v19 = *(_DWORD *)v2;
        v22 = *((_QWORD *)v8 + 2);
        v23 = *((_QWORD *)v8 + 3);
        if ( v20 >= *((_DWORD *)v2 + 2) )
          v20 = *((_DWORD *)v2 + 2);
        v24 = &v6[16 * (((_BYTE)v5 + (_BYTE)v53) & 0xF)];
        v25 = (_BYTE *)(v12 + v19);
        v47 = v24;
        v45 = v25;
        if ( *((_QWORD *)a1 + 9) <= (unsigned __int64)v25 && v19 < v20 )
        {
          v26 = *(_DWORD *)v2 - *(_DWORD *)v8;
          v27 = v12 + v20;
          if ( v26 > 0 )
          {
            v21 += v39 * v26;
            v22 += v40 * v26;
            v23 += v41 * v26;
          }
          if ( (unsigned __int64)v25 < v27 )
          {
            v28 = v19 + v37;
            v29 = v45;
            do
            {
              v30 = v28++;
              v31 = (unsigned __int8)v47[v30 & 0xF];
              v32 = HIBYTE(v21);
              v21 += v39;
              v33 = v46[(unsigned int)(v31 + v32)];
              v34 = v22;
              v22 += v40;
              v35 = v46[v31 + HIBYTE(v34)];
              v36 = v23;
              v23 += v41;
              *v29++ = v16[Xlate555[((unsigned __int64)v46[v31 + HIBYTE(v36)] >> 3) | (4
                                                                                     * (v35 & 0xF8 | (32LL * (v33 & 0xF8))))]];
            }
            while ( (unsigned __int64)v29 < v27 );
            v2 = a2;
            v18 = v38;
            v5 = v52;
            v12 = v42;
            v8 = v43;
          }
        }
        v12 += v48;
        v8 += 40;
        v6 = v49;
        ++v5;
        v42 = v12;
        v43 = v8;
        v52 = v5;
      }
      while ( v5 < v18 );
    }
  }
}
