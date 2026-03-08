/*
 * XREFs of SkipDIB_CY @ 0x1C02674B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     GetFixupScan @ 0x1C014BF50 (GetFixupScan.c)
 *     AlphaBlendBGRF @ 0x1C0260824 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0265A54 (MappingBGRF.c)
 */

__int64 __fastcall SkipDIB_CY(__int128 *a1)
{
  __int128 *v2; // rax
  int *v3; // rcx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  unsigned __int16 *v18; // rdi
  int v19; // ebx
  void *FixupScan; // rax
  __int16 v21; // ax
  unsigned __int8 *v22; // rax
  __int64 v23; // rcx
  int v25[34]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-28h]
  int v27; // [rsp+ECh] [rbp-1Ch]
  int v28; // [rsp+F4h] [rbp-14h]
  void (__fastcall *v29)(int *); // [rsp+118h] [rbp+10h]
  void (__fastcall *v30)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+168h] [rbp+60h]
  __int64 v31; // [rsp+170h] [rbp+68h]
  void (__fastcall *v32)(__int64, void *, __int64, __int64, int); // [rsp+178h] [rbp+70h]
  __int64 v33; // [rsp+188h] [rbp+80h]
  __int64 v34; // [rsp+190h] [rbp+88h]
  __int64 v35; // [rsp+1D8h] [rbp+D0h]
  __int64 v36; // [rsp+1E0h] [rbp+D8h]
  __int64 v37; // [rsp+1F0h] [rbp+E8h]
  __int64 v38; // [rsp+1F8h] [rbp+F0h]
  __int64 v39; // [rsp+200h] [rbp+F8h]
  int v40; // [rsp+208h] [rbp+100h]
  int v41; // [rsp+20Ch] [rbp+104h]
  int v42; // [rsp+210h] [rbp+108h]
  unsigned __int8 *v43; // [rsp+218h] [rbp+110h]
  unsigned __int8 *v44; // [rsp+220h] [rbp+118h]
  unsigned __int8 *v45; // [rsp+228h] [rbp+120h]
  int v46; // [rsp+230h] [rbp+128h]
  void *v47; // [rsp+270h] [rbp+168h]
  unsigned __int8 *v48; // [rsp+278h] [rbp+170h]
  unsigned __int64 v49; // [rsp+280h] [rbp+178h]
  __int64 v50; // [rsp+288h] [rbp+180h]
  __int64 v51; // [rsp+290h] [rbp+188h]
  __int64 v52; // [rsp+298h] [rbp+190h]
  __int64 v53; // [rsp+2A0h] [rbp+198h]
  int v54; // [rsp+2A8h] [rbp+1A0h]

  v2 = a1;
  v3 = v25;
  v4 = 4LL;
  do
  {
    v5 = *v2;
    v6 = v2[1];
    v2 += 8;
    *(_OWORD *)v3 = v5;
    v7 = *(v2 - 6);
    *((_OWORD *)v3 + 1) = v6;
    v8 = *(v2 - 5);
    *((_OWORD *)v3 + 2) = v7;
    v9 = *(v2 - 4);
    *((_OWORD *)v3 + 3) = v8;
    v10 = *(v2 - 3);
    *((_OWORD *)v3 + 4) = v9;
    v11 = *(v2 - 2);
    *((_OWORD *)v3 + 5) = v10;
    v12 = *(v2 - 1);
    *((_OWORD *)v3 + 6) = v11;
    v3 += 32;
    *((_OWORD *)v3 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = v2[1];
  *(_OWORD *)v3 = *v2;
  v14 = v2[2];
  *((_OWORD *)v3 + 1) = v13;
  v15 = v2[3];
  *((_OWORD *)v3 + 2) = v14;
  v16 = v2[4];
  v17 = *((_QWORD *)v2 + 10);
  *((_OWORD *)v3 + 3) = v15;
  *((_OWORD *)v3 + 4) = v16;
  *((_QWORD *)v3 + 10) = v17;
  v18 = *(unsigned __int16 **)(v34 + 88);
  while ( v27 )
  {
    --v27;
    v19 = *v18++;
    while ( --v19 > 0 )
      GetFixupScan((__int64)v25, 0LL);
    FixupScan = GetFixupScan((__int64)v25, v47);
    v32(v33, FixupScan, v52, v53, v54);
    v21 = v25[0];
    if ( SLOBYTE(v25[0]) < 0 )
    {
      v29(v25);
      v21 = v25[0];
    }
    if ( (v21 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v25);
      LOBYTE(v21) = v25[0];
    }
    if ( (v21 & 0x10) != 0 )
    {
      MappingBGRF(v48, v49, v36, v43);
      v22 = &v43[v46];
      if ( v22 == v44 )
        v22 = v45;
      v43 = v22;
    }
    v30(v25, v50, v51, v26, v35, v37, v37 + v41, v42, v31);
    v23 = v40 + v37;
    if ( v23 == v38 )
      v23 = v39;
    v37 = v23;
    v26 += v28;
  }
  return *((unsigned int *)a1 + 37);
}
