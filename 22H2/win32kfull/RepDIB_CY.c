/*
 * XREFs of RepDIB_CY @ 0x1C013A930
 * Callers:
 *     <none>
 * Callees:
 *     FixupGrayScan @ 0x1C0002C80 (FixupGrayScan.c)
 *     CopyDIB_CX @ 0x1C013A630 (CopyDIB_CX.c)
 *     FixupColorScan @ 0x1C0151228 (FixupColorScan.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     AlphaBlendBGRF @ 0x1C0266540 (AlphaBlendBGRF.c)
 *     MappingBGR @ 0x1C026B60C (MappingBGR.c)
 *     MappingBGRF @ 0x1C026B6C4 (MappingBGRF.c)
 */

__int64 __fastcall RepDIB_CY(__int128 *a1)
{
  __int128 *v1; // r15
  __int128 *v2; // rax
  __int64 v3; // rdx
  int *v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // r12d
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  unsigned __int16 *v19; // r14
  int v20; // ecx
  __int16 *v21; // rsi
  __int64 v22; // rdi
  int v23; // r13d
  int v24; // eax
  __int64 v25; // rcx
  void *v26; // rbx
  unsigned int v27; // edx
  __int64 v28; // r8
  char v29; // al
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+58h] [rbp-B0h]
  int v35; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v36[16]; // [rsp+70h] [rbp-98h] BYREF
  void (__fastcall *v37)(_BYTE *, void *, __int64, _QWORD); // [rsp+80h] [rbp-88h]
  __int64 v38; // [rsp+88h] [rbp-80h]
  unsigned int v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  unsigned int v41; // [rsp+A0h] [rbp-68h]
  unsigned int v42; // [rsp+A4h] [rbp-64h]
  int v43; // [rsp+ACh] [rbp-5Ch]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  int v45; // [rsp+F8h] [rbp-10h]
  int v46; // [rsp+FCh] [rbp-Ch]
  int v47; // [rsp+104h] [rbp-4h]
  void (__fastcall *v48)(int *); // [rsp+128h] [rbp+20h]
  void (__fastcall *v49)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  void (__fastcall *v51)(__int64, void *, __int16 *, __int64, int); // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+198h] [rbp+90h]
  _QWORD *v53; // [rsp+1A0h] [rbp+98h]
  __int64 v54; // [rsp+1E8h] [rbp+E0h]
  __int64 v55; // [rsp+1F0h] [rbp+E8h]
  __int64 v56; // [rsp+200h] [rbp+F8h]
  __int64 v57; // [rsp+208h] [rbp+100h]
  __int64 v58; // [rsp+210h] [rbp+108h]
  int v59; // [rsp+218h] [rbp+110h]
  int v60; // [rsp+21Ch] [rbp+114h]
  int v61; // [rsp+220h] [rbp+118h]
  __int64 v62; // [rsp+228h] [rbp+120h]
  __int64 v63; // [rsp+230h] [rbp+128h]
  __int64 v64; // [rsp+238h] [rbp+130h]
  int v65; // [rsp+240h] [rbp+138h]
  void *v66; // [rsp+280h] [rbp+178h]
  __int64 v67; // [rsp+288h] [rbp+180h]
  __int64 v68; // [rsp+290h] [rbp+188h]
  __int64 v69; // [rsp+298h] [rbp+190h]
  __int64 v70; // [rsp+2A0h] [rbp+198h]
  __int16 *v71; // [rsp+2A8h] [rbp+1A0h]
  __int64 v72; // [rsp+2B0h] [rbp+1A8h]
  int v73; // [rsp+2B8h] [rbp+1B0h]

  v1 = a1;
  v2 = a1;
  v3 = 4LL;
  v4 = &v35;
  do
  {
    v5 = *v2;
    v6 = v2[1];
    v2 += 8;
    *(_OWORD *)v4 = v5;
    v7 = *(v2 - 6);
    *((_OWORD *)v4 + 1) = v6;
    v8 = *(v2 - 5);
    *((_OWORD *)v4 + 2) = v7;
    v9 = *(v2 - 4);
    *((_OWORD *)v4 + 3) = v8;
    v10 = *(v2 - 3);
    *((_OWORD *)v4 + 4) = v9;
    v11 = *(v2 - 2);
    *((_OWORD *)v4 + 5) = v10;
    v12 = *(v2 - 1);
    *((_OWORD *)v4 + 6) = v11;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v12;
    --v3;
  }
  while ( v3 );
  v13 = 1;
  v14 = v2[1];
  *(_OWORD *)v4 = *v2;
  v15 = v2[2];
  *((_OWORD *)v4 + 1) = v14;
  v16 = v2[3];
  *((_OWORD *)v4 + 2) = v15;
  v17 = v2[4];
  v18 = *((_QWORD *)v2 + 10);
  *((_OWORD *)v4 + 3) = v16;
  *((_OWORD *)v4 + 4) = v17;
  *((_QWORD *)v4 + 10) = v18;
  v19 = (unsigned __int16 *)v53[11];
  v33 = v53[12];
  v20 = v35;
  if ( (v35 & 0x800) != 0 )
  {
    v23 = 3;
    v21 = (__int16 *)v53[4];
    v22 = (__int64)&v21[v45] + v45;
  }
  else
  {
    v21 = v71;
    v22 = v72;
    v23 = v73;
  }
  v24 = v46;
  if ( v46 )
  {
    while ( 1 )
    {
      v46 = v24 - 1;
      if ( --v13 )
        goto LABEL_7;
      v13 = *v19;
      if ( (unsigned __int64)v19 >= v33 )
        goto LABEL_7;
      v26 = v66;
      if ( (v20 & 0x40) != 0 )
      {
        if ( (v36[0] & 4) != 0 )
          FixupGrayScan((__int64)&v35, v66);
        else
          FixupColorScan(&v35);
      }
      else
      {
        v27 = v42;
        if ( (v20 & 0x20) != 0 )
        {
          v27 = v42 + 1;
          if ( (int)(v42 + 1) > (int)v39 )
            v27 = v39;
          v42 = v27;
          v28 = v38 + (int)(v43 * (v39 - v27));
          v29 = v36[0] | 2;
          v40 = v28;
          v20 &= ~0x20u;
          v36[0] |= 2u;
          v35 = v20;
        }
        else
        {
          v28 = v40;
          v29 = v36[0];
        }
        if ( !v66 )
        {
          if ( (v29 & 2) != 0 )
          {
            if ( !v27 || (v42 = v27 - 1, v27 == 1) )
            {
              if ( (v29 & 1) != 0 )
              {
                v40 = v38;
                v42 = v39;
              }
              else
              {
                v36[0] = v29 & 0xFD;
              }
            }
            else
            {
              v40 = v43 + v28;
            }
          }
          goto LABEL_25;
        }
        v37(v36, v66, v28, v39);
      }
      LOBYTE(v20) = v35;
LABEL_25:
      if ( (v20 & 8) != 0 && v26 )
      {
        MappingBGR(v26, v41, v55, v62);
        v31 = v65 + v62;
        if ( v31 == v63 )
          v31 = v64;
        v62 = v31;
      }
      v51(v52, v26, v21, v22, v23);
      LOWORD(v20) = v35;
      ++v19;
LABEL_7:
      if ( (v20 & 0x800) != 0 )
      {
        CopyDIB_CX(0LL, v21, (__int64)v71, v72, v73);
        LOWORD(v20) = v35;
      }
      if ( (v20 & 0x80u) != 0 )
      {
        v48(&v35);
        LOWORD(v20) = v35;
      }
      if ( (v20 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v35, v3);
        LOBYTE(v20) = v35;
      }
      if ( (v20 & 0x10) != 0 )
      {
        MappingBGRF(v67, v68, v55, v62);
        v32 = v65 + v62;
        if ( v32 == v63 )
          v32 = v64;
        v62 = v32;
      }
      v49(&v35, v69, v70, v44, v54, v56, v56 + v60, v61, v50);
      v25 = v59 + v56;
      if ( v25 == v57 )
        v25 = v58;
      v44 += v47;
      v24 = v46;
      v56 = v25;
      if ( !v46 )
      {
        v1 = a1;
        return *((unsigned int *)v1 + 37);
      }
      v20 = v35;
    }
  }
  return *((unsigned int *)v1 + 37);
}
