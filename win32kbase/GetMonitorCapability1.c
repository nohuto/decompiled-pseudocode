/*
 * XREFs of GetMonitorCapability1 @ 0x1C018FD28
 * Callers:
 *     GetMonitorCapability @ 0x1C0190204 (GetMonitorCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     InsertModecapList @ 0x1C0190884 (InsertModecapList.c)
 */

__int64 __fastcall GetMonitorCapability1(_BYTE *a1, __int64 a2, int *a3, char a4)
{
  __m128i si128; // xmm1
  __int64 v6; // r15
  __m128i v7; // xmm0
  int v8; // r12d
  unsigned int inserted; // r10d
  signed int v12; // edx
  unsigned __int8 v13; // al
  _DWORD *v14; // rsi
  int i; // ebx
  unsigned __int8 *v16; // rbx
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // r8
  unsigned __int8 *v20; // rbx
  __int64 v21; // r15
  int v22; // r11d
  unsigned __int8 v23; // al
  unsigned __int8 v24; // r8
  int v25; // r9d
  unsigned __int8 v26; // dl
  int v27; // esi
  int v28; // r9d
  unsigned int v29; // eax
  unsigned __int8 v30; // al
  unsigned __int8 *v31; // rsi
  __int64 v32; // r14
  int v33; // eax
  unsigned __int8 v34; // r8
  int v35; // ecx
  int v36; // edx
  unsigned int *v37; // rax
  unsigned int v38; // ecx
  __int128 v41; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-C8h]
  int v43; // [rsp+40h] [rbp-C0h]
  int v44; // [rsp+44h] [rbp-BCh]
  int v45; // [rsp+48h] [rbp-B8h]
  __int64 v46; // [rsp+4Ch] [rbp-B4h] BYREF
  int v47; // [rsp+54h] [rbp-ACh]
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h]
  int v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+64h] [rbp-9Ch]
  int v52; // [rsp+6Ch] [rbp-94h]
  int v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+74h] [rbp-8Ch]
  int v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+7Ch] [rbp-84h]
  int v57; // [rsp+84h] [rbp-7Ch]
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  int v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+94h] [rbp-6Ch]
  int v62; // [rsp+9Ch] [rbp-64h]
  int v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+A4h] [rbp-5Ch]
  int v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+ACh] [rbp-54h]
  int v67; // [rsp+B4h] [rbp-4Ch]
  int v68; // [rsp+B8h] [rbp-48h]
  int v69; // [rsp+BCh] [rbp-44h]
  int v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C4h] [rbp-3Ch]
  int v72; // [rsp+CCh] [rbp-34h]
  int v73; // [rsp+D0h] [rbp-30h]
  int v74; // [rsp+D4h] [rbp-2Ch]
  int v75; // [rsp+D8h] [rbp-28h]
  __int64 v76; // [rsp+DCh] [rbp-24h]
  int v77; // [rsp+E4h] [rbp-1Ch]
  int v78; // [rsp+E8h] [rbp-18h]
  int v79; // [rsp+ECh] [rbp-14h]
  int v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F4h] [rbp-Ch]
  int v82; // [rsp+FCh] [rbp-4h]
  int v83; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+104h] [rbp+4h]
  int v85; // [rsp+108h] [rbp+8h]
  __int64 v86; // [rsp+10Ch] [rbp+Ch]
  int v87; // [rsp+114h] [rbp+14h]
  int v88; // [rsp+118h] [rbp+18h]
  int v89; // [rsp+11Ch] [rbp+1Ch]
  int v90; // [rsp+120h] [rbp+20h]
  __int64 v91; // [rsp+124h] [rbp+24h]
  int v92; // [rsp+12Ch] [rbp+2Ch]
  int v93; // [rsp+130h] [rbp+30h]
  int v94; // [rsp+134h] [rbp+34h]
  int v95; // [rsp+138h] [rbp+38h]
  __int64 v96; // [rsp+13Ch] [rbp+3Ch]
  int v97; // [rsp+144h] [rbp+44h]
  int v98; // [rsp+148h] [rbp+48h]
  int v99; // [rsp+14Ch] [rbp+4Ch]
  int v100; // [rsp+150h] [rbp+50h]
  __int64 v101; // [rsp+154h] [rbp+54h]
  int v102; // [rsp+15Ch] [rbp+5Ch]
  int v103; // [rsp+160h] [rbp+60h]
  int v104; // [rsp+164h] [rbp+64h]
  int v105; // [rsp+168h] [rbp+68h]
  __int64 v106; // [rsp+16Ch] [rbp+6Ch]
  int v107; // [rsp+174h] [rbp+74h]
  __m128i v108; // [rsp+180h] [rbp+80h]
  __m128i v109; // [rsp+190h] [rbp+90h]
  _DWORD v110[2]; // [rsp+1A0h] [rbp+A0h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v110[0] = -256;
  v110[1] = 0xFFFFFF;
  a3[2] = 0;
  v42 = 0LL;
  v41 = 0LL;
  v6 = 8LL;
  v7 = _mm_load_si128((const __m128i *)&_xmm);
  a3[4] = 0;
  v8 = a4 == 0 ? 0x38 : 0;
  *a3 = v8;
  a3[1] = -1;
  a3[3] = -1;
  inserted = 0;
  a3[5] = -1;
  v12 = 0;
  v109 = si128;
  v108 = v7;
  do
  {
    if ( a1[v12] != *((_BYTE *)v110 + v12) )
      return 0LL;
    ++v12;
  }
  while ( (unsigned int)v12 < 8 );
  v43 = 1280;
  v46 = 0LL;
  v49 = 768;
  v54 = 768;
  v59 = 768;
  v64 = 768;
  v44 = 1024;
  v48 = 1024;
  v53 = 1024;
  v58 = 1024;
  v63 = 1024;
  v47 = 0;
  v69 = 600;
  v74 = 600;
  v79 = 600;
  v84 = 600;
  v51 = 0LL;
  v52 = 0;
  v56 = 0LL;
  v57 = 0;
  v61 = 0LL;
  v62 = 0;
  v66 = 0LL;
  v67 = 0;
  v71 = 0LL;
  v72 = 0;
  v76 = 0LL;
  v77 = 0;
  v81 = 0LL;
  v82 = 0;
  v86 = 0LL;
  v87 = 0;
  v91 = 0LL;
  v92 = 0;
  v96 = 0LL;
  v97 = 0;
  v101 = 0LL;
  v102 = 0;
  v106 = 0LL;
  v107 = 0;
  v13 = a1[36];
  v68 = 800;
  v73 = 800;
  v78 = 800;
  v83 = 800;
  v45 = 75;
  v89 = 480;
  v94 = 480;
  v99 = 480;
  v104 = 480;
  v50 = 75;
  v55 = 70;
  v60 = 60;
  v65 = 87;
  v70 = 75;
  v75 = 72;
  v80 = 60;
  v85 = 56;
  v88 = 640;
  v90 = 75;
  v93 = 640;
  v95 = 72;
  v98 = 640;
  v100 = 67;
  v103 = 640;
  v105 = 60;
  a1[36] = v13 & 0x1F | (v13 >> 1) & 0x60;
  v14 = (_DWORD *)&v46 + 1;
  for ( i = 0; i < 13; ++i )
  {
    v14[1] = -1;
    *(v14 - 1) = v8;
    *v14 = 0;
    if ( ((a1[36 - i / 7u] >> (i % 7u)) & 1) != 0 )
      inserted = InsertModecapList(v14 - 4, a2, inserted);
    v14 += 6;
  }
  v16 = a1 + 38;
  v17 = HIDWORD(v41);
  if ( !a4 )
    v17 = 56;
  v42 = 0xFFFFFFFF00000000uLL;
  HIDWORD(v41) = v17;
  do
  {
    v18 = *v16;
    if ( (unsigned __int8)v18 >= 2u )
    {
      v19 = v16[1];
      LODWORD(v41) = 8 * v18 + 248;
      DWORD2(v41) = (v19 & 0x3F) + 60;
      DWORD1(v41) = (unsigned int)(v108.m128i_i32[(unsigned __int64)v19 >> 6] * v41)
                  / v109.m128i_i32[(unsigned __int64)v19 >> 6];
      inserted = InsertModecapList(&v41, a2, inserted);
    }
    v16 += 2;
    --v6;
  }
  while ( v6 );
  v20 = a1 + 55;
  v21 = 4LL;
  do
  {
    v22 = *(v20 - 1);
    if ( *(_WORD *)(v20 - 1) && (v23 = v20[3]) != 0 )
    {
      v24 = v20[6];
      v25 = v20[4];
      v26 = v20[3];
      v27 = v20[1] + 16 * (v23 & 0xF0);
      LODWORD(v41) = v27;
      v28 = 16 * (v24 & 0xF0) + v25;
      DWORD1(v41) = v28;
      if ( v27 && v28 )
      {
        v29 = 10000 * (v22 + (*v20 << 8)) / ((v27 + v20[2] + ((v26 & 0xF) << 8)) * (v28 + v20[5] + ((v24 & 0xFu) << 8)));
        DWORD2(v41) = v29;
        if ( (v20[16] & 0x80u) != 0 )
          DWORD2(v41) = v29 >> 1;
        inserted = InsertModecapList(&v41, a2, inserted);
      }
    }
    else
    {
      v30 = v20[2];
      if ( v30 == 0xFA )
      {
        v31 = v20 + 4;
        v32 = 6LL;
        do
        {
          v33 = *v31;
          if ( (unsigned __int8)v33 >= 2u )
          {
            v34 = v31[1];
            LODWORD(v41) = 8 * v33 + 248;
            DWORD2(v41) = (v34 & 0x3F) + 60;
            DWORD1(v41) = (unsigned int)(v108.m128i_i32[(unsigned __int64)v34 >> 6] * v41)
                        / v109.m128i_i32[(unsigned __int64)v34 >> 6];
            inserted = InsertModecapList(&v41, a2, inserted);
          }
          v31 += 2;
          --v32;
        }
        while ( v32 );
      }
      else if ( v30 == 0xFD )
      {
        *a3 = v20[4];
        a3[1] = v20[5];
        a3[2] = 1000 * v20[6];
        v35 = 1000 * v20[7];
        a3[4] = 0;
        a3[3] = v35;
        a3[5] = 10000000 * v20[8];
      }
    }
    v20 += 18;
    --v21;
  }
  while ( v21 );
  v36 = inserted - 2;
  if ( (int)(inserted - 2) >= 0 )
  {
    v37 = (unsigned int *)(a2 + 8 + 24LL * v36);
    do
    {
      v38 = v37[6];
      if ( *v37 < v38 )
        *v37 = v38;
      v37 -= 6;
      --v36;
    }
    while ( v36 >= 0 );
  }
  return inserted;
}
