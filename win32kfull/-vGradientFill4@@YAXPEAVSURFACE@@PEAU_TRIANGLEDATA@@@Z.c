/*
 * XREFs of ?vGradientFill4@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02FBDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C02DE1EC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill4(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // esi
  char *v6; // r12
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rbx
  _BYTE *v11; // rbx
  __int64 v12; // rbx
  int v13; // ebp
  int v14; // r13d
  int v15; // eax
  int v16; // r14d
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // r15
  int v22; // r10d
  _BYTE *v23; // r13
  int v24; // ebp
  char v25; // di
  int v26; // r10d
  char v27; // dl
  char v28; // r10
  char v29; // dl
  int v30; // [rsp+20h] [rbp-98h]
  int v31; // [rsp+24h] [rbp-94h]
  int v32; // [rsp+28h] [rbp-90h]
  __int64 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  char *v37; // [rsp+50h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-60h]
  char *v39; // [rsp+60h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-50h]
  int v41; // [rsp+C0h] [rbp+8h]
  _BYTE *v43; // [rsp+D8h] [rbp+20h]

  v2 = a2;
  v4 = Gre::Base::Globals(a1);
  v5 = *((_DWORD *)v2 + 28);
  v6 = (char *)v2 + 168;
  v7 = *((int *)a1 + 22);
  v8 = *((_QWORD *)v2 + 19);
  v34 = *((_QWORD *)v2 + 2);
  v35 = *((_QWORD *)v2 + 3);
  v36 = *((_QWORD *)v2 + 4);
  v9 = *(_DWORD *)(v8 + 76);
  v41 = v5;
  v33 = *((_QWORD *)a1 + 10) + (int)v7 * v5;
  v37 = (char *)v2 + 168;
  if ( (v9 & 0x800) != 0 )
  {
    v10 = *(_QWORD *)(v8 + 56);
    if ( v10 == *((_QWORD *)v4 + 750) )
    {
      v11 = &unk_1C032AD84;
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
    v11 = byte_1C032B680;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v13 = *((_DWORD *)v2 + 3);
    v14 = *((_DWORD *)v2 + 33);
    if ( v13 >= *((_DWORD *)v2 + 29) )
      v13 = *((_DWORD *)v2 + 29);
    v31 = v13;
    v32 = *((_DWORD *)v2 + 33);
    v15 = *((_DWORD *)v2 + 32);
    if ( v5 < v13 )
    {
      v40 = v7;
      do
      {
        v16 = *(_DWORD *)v6;
        v17 = *((_DWORD *)v6 + 1);
        v18 = *((_QWORD *)v6 + 1);
        if ( *(_DWORD *)v6 <= *(_DWORD *)v2 )
          v16 = *(_DWORD *)v2;
        v19 = *((_QWORD *)v6 + 2);
        v20 = *((_QWORD *)v6 + 3);
        if ( v17 >= *((_DWORD *)v2 + 2) )
          v17 = *((_DWORD *)v2 + 2);
        v30 = v17;
        v21 = v33;
        v39 = (char *)&unk_1C032B300 + 16 * (((_BYTE)v5 + (_BYTE)v14) & 0xFu);
        if ( v16 < v17 )
        {
          v22 = *(_DWORD *)v2 - *(_DWORD *)v6;
          v23 = (_BYTE *)(v33 + v16 / 2);
          if ( v22 > 0 )
          {
            v18 += v34 * v22;
            v19 += v35 * v22;
            v20 += v36 * v22;
          }
          v24 = v16 & 1;
          v25 = v16 + v15;
          do
          {
            v43 = v23;
            v26 = (unsigned __int8)v39[v25 & 0xF];
            v27 = *v23;
            v28 = v11[Xlate555[((unsigned __int64)byte_1C032B100[v26 + HIBYTE(v20)] >> 3) | (4
                                                                                           * (byte_1C032B100[v26 + HIBYTE(v19)] & 0xF8 | (32LL * (byte_1C032B100[v26 + HIBYTE(v18)] & 0xF8))))]];
            if ( v24 )
            {
              v24 = 0;
              ++v23;
              v29 = v28 | v27 & 0xF0;
            }
            else
            {
              v29 = v27 & 0xF | (16 * v28);
              v24 = 1;
            }
            ++v16;
            v19 += v35;
            ++v25;
            v20 += v36;
            v18 += v34;
            *v43 = v29;
          }
          while ( v16 < v30 );
          v2 = a2;
          v5 = v41;
          v13 = v31;
          v21 = v33;
          v6 = v37;
          LOBYTE(v14) = v32;
        }
        v6 += 40;
        ++v5;
        v33 = v40 + v21;
        v37 = v6;
        v41 = v5;
      }
      while ( v5 < v13 );
    }
  }
}
