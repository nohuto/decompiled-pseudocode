__int64 __fastcall RepDIB_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  int *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // r14d
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  unsigned __int16 *v18; // rsi
  unsigned __int64 v19; // r13
  int v20; // r12d
  _WORD *v21; // rdi
  __int64 v22; // rbx
  void *FixupScan; // rax
  unsigned __int8 *v24; // rax
  __int64 v25; // rcx
  int v27[34]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E8h] [rbp-20h]
  int v30; // [rsp+ECh] [rbp-1Ch]
  int v31; // [rsp+F4h] [rbp-14h]
  void (__fastcall *v32)(int *); // [rsp+118h] [rbp+10h]
  void (__fastcall *v33)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+168h] [rbp+60h]
  __int64 v34; // [rsp+170h] [rbp+68h]
  void (__fastcall *v35)(__int64, void *, _WORD *, __int64, int); // [rsp+178h] [rbp+70h]
  __int64 v36; // [rsp+188h] [rbp+80h]
  _QWORD *v37; // [rsp+190h] [rbp+88h]
  __int64 v38; // [rsp+1D8h] [rbp+D0h]
  __int64 v39; // [rsp+1E0h] [rbp+D8h]
  __int64 v40; // [rsp+1F0h] [rbp+E8h]
  __int64 v41; // [rsp+1F8h] [rbp+F0h]
  __int64 v42; // [rsp+200h] [rbp+F8h]
  int v43; // [rsp+208h] [rbp+100h]
  int v44; // [rsp+20Ch] [rbp+104h]
  int v45; // [rsp+210h] [rbp+108h]
  unsigned __int8 *v46; // [rsp+218h] [rbp+110h]
  unsigned __int8 *v47; // [rsp+220h] [rbp+118h]
  unsigned __int8 *v48; // [rsp+228h] [rbp+120h]
  int v49; // [rsp+230h] [rbp+128h]
  void *v50; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v51; // [rsp+278h] [rbp+170h]
  unsigned __int64 v52; // [rsp+280h] [rbp+178h]
  __int64 v53; // [rsp+288h] [rbp+180h]
  __int64 v54; // [rsp+290h] [rbp+188h]
  _WORD *v55; // [rsp+298h] [rbp+190h]
  __int64 v56; // [rsp+2A0h] [rbp+198h]
  int v57; // [rsp+2A8h] [rbp+1A0h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = v27;
  do
  {
    v5 = v3[1];
    *(_OWORD *)v4 = *v3;
    v6 = v3[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v3[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v3[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v3[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v3[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v11;
    --v1;
  }
  while ( v1 );
  v12 = 1;
  v13 = v3[1];
  *(_OWORD *)v4 = *v3;
  v14 = v3[2];
  *((_OWORD *)v4 + 1) = v13;
  v15 = v3[3];
  *((_OWORD *)v4 + 2) = v14;
  v16 = v3[4];
  v17 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v15;
  *((_OWORD *)v4 + 4) = v16;
  *((_QWORD *)v4 + 10) = v17;
  v18 = (unsigned __int16 *)v37[11];
  v19 = v37[12];
  if ( (v27[0] & 0x800) != 0 )
  {
    v20 = 3;
    v21 = (_WORD *)v37[4];
    v22 = (__int64)&v21[v29] + v29;
  }
  else
  {
    v21 = v55;
    v22 = v56;
    v20 = v57;
  }
  while ( v30 )
  {
    --v30;
    if ( !--v12 )
    {
      v12 = *v18;
      if ( (unsigned __int64)v18 < v19 )
      {
        FixupScan = GetFixupScan((__int64)v27, v50);
        v35(v36, FixupScan, v21, v22, v20);
        ++v18;
      }
    }
    if ( (v27[0] & 0x800) != 0 )
      CopyDIB_CX(0LL, v21, (__int64)v55, v56, v57);
    if ( SLOBYTE(v27[0]) < 0 )
      v32(v27);
    if ( (v27[0] & 0x800) != 0 )
      AlphaBlendBGRF(v27);
    if ( (v27[0] & 0x10) != 0 )
    {
      MappingBGRF(v51, v52, v39, v46);
      v24 = &v46[v49];
      if ( v24 == v47 )
        v24 = v48;
      v46 = v24;
    }
    v33(v27, v53, v54, v28, v38, v40, v40 + v44, v45, v34);
    v25 = v43 + v40;
    if ( v25 == v41 )
      v25 = v42;
    v40 = v25;
    v28 += v31;
  }
  return *(unsigned int *)(a1 + 148);
}
