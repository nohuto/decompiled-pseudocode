/*
 * XREFs of BltDIB_CY @ 0x1C0260E50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     GetFixupScan @ 0x1C014BF50 (GetFixupScan.c)
 *     AlphaBlendBGRF @ 0x1C0260824 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0265A54 (MappingBGRF.c)
 */

__int64 __fastcall BltDIB_CY(__int128 *a1)
{
  int *v1; // rdx
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // ebx
  void *FixupScan; // rax
  _WORD *v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  unsigned int v26; // [rsp+E4h] [rbp-1Ch]
  int v27; // [rsp+ECh] [rbp-14h]
  void (__fastcall *v28)(int *); // [rsp+110h] [rbp+10h]
  void (__fastcall *v29)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+160h] [rbp+60h]
  __int64 v30; // [rsp+168h] [rbp+68h]
  void (__fastcall *v31)(__int64, void *, __int64, __int64, int); // [rsp+170h] [rbp+70h]
  __int64 v32; // [rsp+180h] [rbp+80h]
  __int64 v33; // [rsp+188h] [rbp+88h]
  __int64 v34; // [rsp+1D0h] [rbp+D0h]
  __int64 v35; // [rsp+1D8h] [rbp+D8h]
  __int64 v36; // [rsp+1E8h] [rbp+E8h]
  __int64 v37; // [rsp+1F0h] [rbp+F0h]
  __int64 v38; // [rsp+1F8h] [rbp+F8h]
  int v39; // [rsp+200h] [rbp+100h]
  int v40; // [rsp+204h] [rbp+104h]
  int v41; // [rsp+208h] [rbp+108h]
  __int64 v42; // [rsp+210h] [rbp+110h]
  __int64 v43; // [rsp+218h] [rbp+118h]
  __int64 v44; // [rsp+220h] [rbp+120h]
  int v45; // [rsp+228h] [rbp+128h]
  void *v46; // [rsp+268h] [rbp+168h]
  _WORD *v47; // [rsp+270h] [rbp+170h]
  unsigned __int64 v48; // [rsp+278h] [rbp+178h]
  __int64 v49; // [rsp+280h] [rbp+180h]
  __int64 v50; // [rsp+288h] [rbp+188h]
  __int64 v51; // [rsp+290h] [rbp+190h]
  __int64 v52; // [rsp+298h] [rbp+198h]
  int v53; // [rsp+2A0h] [rbp+1A0h]

  v1 = &v23;
  v2 = 4LL;
  do
  {
    v3 = *a1;
    v4 = a1[1];
    a1 += 8;
    *(_OWORD *)v1 = v3;
    v5 = *(a1 - 6);
    *((_OWORD *)v1 + 1) = v4;
    v6 = *(a1 - 5);
    *((_OWORD *)v1 + 2) = v5;
    v7 = *(a1 - 4);
    *((_OWORD *)v1 + 3) = v6;
    v8 = *(a1 - 3);
    *((_OWORD *)v1 + 4) = v7;
    v9 = *(a1 - 2);
    *((_OWORD *)v1 + 5) = v8;
    v10 = *(a1 - 1);
    *((_OWORD *)v1 + 6) = v9;
    v1 += 32;
    *((_OWORD *)v1 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *((_QWORD *)a1 + 10);
  v12 = a1[1];
  *(_OWORD *)v1 = *a1;
  v13 = a1[2];
  *((_OWORD *)v1 + 1) = v12;
  v14 = a1[3];
  *((_OWORD *)v1 + 2) = v13;
  v15 = a1[4];
  *((_OWORD *)v1 + 3) = v14;
  *((_OWORD *)v1 + 4) = v15;
  *((_QWORD *)v1 + 10) = v11;
  v16 = *(_DWORD *)(v33 + 4);
  while ( v16 )
  {
    --v16;
    FixupScan = GetFixupScan((__int64)&v23, v46);
    v31(v32, FixupScan, v51, v52, v53);
    if ( (v24 & 4) != 0 )
    {
      v18 = v47;
      do
      {
        *v18 = GrayIdxWORD[*(unsigned __int8 *)v18];
        v18 += 2;
      }
      while ( (unsigned __int64)v18 < v48 );
    }
    v19 = v23;
    if ( (v23 & 0x80u) != 0 )
    {
      v28(&v23);
      v19 = v23;
    }
    if ( (v19 & 0x800) != 0 )
    {
      AlphaBlendBGRF(&v23);
      LOBYTE(v19) = v23;
    }
    if ( (v19 & 0x10) != 0 )
    {
      MappingBGRF(v47, v48, v35, v42);
      v20 = v45 + v42;
      if ( v20 == v43 )
        v20 = v44;
      v42 = v20;
    }
    v29(&v23, v49, v50, v25, v34, v36, v36 + v40, v41, v30);
    v21 = v39 + v36;
    if ( v21 == v37 )
      v21 = v38;
    v25 += v27;
    v36 = v21;
  }
  return v26;
}
