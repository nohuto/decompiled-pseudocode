__int64 __fastcall TileDIB_CY(__int128 *a1)
{
  int *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  unsigned int v17; // ebx
  _WORD *v18; // rdi
  int v19; // ecx
  int v20; // r14d
  __int64 v21; // rsi
  unsigned __int8 *FixupScan; // r8
  int v23; // edx
  _WORD *i; // r9
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned __int8 *v27; // rdx
  int v28; // r10d
  int v29; // r11d
  int v31; // ecx
  __int16 v32; // ax
  __int16 v33; // ax
  __int16 v34; // ax
  unsigned __int8 *v35; // rax
  __int64 v36; // rcx
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+E0h] [rbp-20h]
  unsigned int v42; // [rsp+E4h] [rbp-1Ch]
  int v43; // [rsp+ECh] [rbp-14h]
  void (__fastcall *v44)(int *, unsigned __int8 *, unsigned __int8 *, __int64); // [rsp+110h] [rbp+10h]
  void (__fastcall *v45)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  __int64 v49; // [rsp+1D0h] [rbp+D0h]
  __int64 v50; // [rsp+1D8h] [rbp+D8h]
  __int64 v51; // [rsp+1E8h] [rbp+E8h]
  __int64 v52; // [rsp+1F0h] [rbp+F0h]
  __int64 v53; // [rsp+1F8h] [rbp+F8h]
  int v54; // [rsp+200h] [rbp+100h]
  int v55; // [rsp+204h] [rbp+104h]
  int v56; // [rsp+208h] [rbp+108h]
  unsigned __int8 *v57; // [rsp+210h] [rbp+110h]
  unsigned __int8 *v58; // [rsp+218h] [rbp+118h]
  unsigned __int8 *v59; // [rsp+220h] [rbp+120h]
  int v60; // [rsp+228h] [rbp+128h]
  void *v61; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v62; // [rsp+270h] [rbp+170h]
  unsigned __int64 v63; // [rsp+278h] [rbp+178h]
  __int64 v64; // [rsp+280h] [rbp+180h]
  __int64 v65; // [rsp+288h] [rbp+188h]
  __int64 v66; // [rsp+290h] [rbp+190h]
  int v67; // [rsp+2A0h] [rbp+1A0h]

  memset_0(&v37, 0, 0x258uLL);
  if ( (*((_BYTE *)a1 + 8) & 4) != 0 )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 39) + 32LL) )
      goto LABEL_3;
    return *((unsigned int *)a1 + 37);
  }
  if ( !*((_QWORD *)a1 + 67) )
    return *((unsigned int *)a1 + 37);
LABEL_3:
  v2 = &v37;
  v3 = 4LL;
  do
  {
    v4 = *a1;
    v5 = a1[1];
    a1 += 8;
    *(_OWORD *)v2 = v4;
    v6 = *(a1 - 6);
    *((_OWORD *)v2 + 1) = v5;
    v7 = *(a1 - 5);
    *((_OWORD *)v2 + 2) = v6;
    v8 = *(a1 - 4);
    *((_OWORD *)v2 + 3) = v7;
    v9 = *(a1 - 3);
    *((_OWORD *)v2 + 4) = v8;
    v10 = *(a1 - 2);
    *((_OWORD *)v2 + 5) = v9;
    v11 = *(a1 - 1);
    *((_OWORD *)v2 + 6) = v10;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *((_QWORD *)a1 + 10);
  v13 = a1[1];
  *(_OWORD *)v2 = *a1;
  v14 = a1[2];
  *((_OWORD *)v2 + 1) = v13;
  v15 = a1[3];
  *((_OWORD *)v2 + 2) = v14;
  v16 = a1[4];
  *((_OWORD *)v2 + 3) = v15;
  *((_OWORD *)v2 + 4) = v16;
  *((_QWORD *)v2 + 10) = v12;
  v17 = v42;
  v18 = *(_WORD **)(v48 + 32);
  v19 = *(_DWORD *)(v47 + 24);
  v20 = v39 - v19;
  if ( v42 )
  {
    v21 = (int)(v19 * ((~v38 & 4 | 8u) >> 2));
    do
    {
      --v17;
      FixupScan = (unsigned __int8 *)GetFixupScan((__int64)&v37, v61);
      if ( (v38 & 4) != 0 )
      {
        v23 = v39;
        for ( i = v18; v23; --v23 )
        {
          v25 = *FixupScan++;
          *i++ = GrayIdxWORD[v25];
        }
        FixupScan = (unsigned __int8 *)v18;
      }
      v26 = v66;
      v27 = &FixupScan[v21];
      v28 = v41;
      v29 = v20;
      while ( v28 )
      {
        v31 = v28;
        if ( v29 <= v28 )
          v31 = v29;
        v29 = v39;
        v28 -= v31;
        if ( (v38 & 4) != 0 )
        {
          for ( ; v31; --v31 )
          {
            v32 = *(_WORD *)v27;
            v27 += 2;
            *(_WORD *)v26 = v32;
            v26 += v67;
          }
        }
        else
        {
          for ( ; v31; --v31 )
          {
            v33 = *(_WORD *)v27;
            v27 += 3;
            *(_WORD *)v26 = v33;
            *(_BYTE *)(v26 + 2) = *(v27 - 1);
            v26 += v67;
          }
        }
        v27 = FixupScan;
      }
      v34 = v37;
      if ( (v37 & 0x80u) != 0 )
      {
        v44(&v37, v27, FixupScan, v26);
        v34 = v37;
      }
      if ( (v34 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v37);
        LOBYTE(v34) = v37;
      }
      if ( (v34 & 0x10) != 0 )
      {
        MappingBGRF(v62, v63, v50, v57);
        v35 = &v57[v60];
        if ( v35 == v58 )
          v35 = v59;
        v57 = v35;
      }
      v45(&v37, v64, v65, v40, v49, v51, v51 + v55, v56, v46);
      v36 = v54 + v51;
      if ( v36 == v52 )
        v36 = v53;
      v40 += v43;
      v51 = v36;
    }
    while ( v17 );
    return v42;
  }
  return v17;
}
