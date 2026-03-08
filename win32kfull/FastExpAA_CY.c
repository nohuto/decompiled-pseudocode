/*
 * XREFs of FastExpAA_CY @ 0x1C0263760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GetFixupScan @ 0x1C014BF50 (GetFixupScan.c)
 *     AlphaBlendBGRF @ 0x1C0260824 (AlphaBlendBGRF.c)
 *     Do1141 @ 0x1C02610B4 (Do1141.c)
 *     Do13 @ 0x1C02611D0 (Do13.c)
 *     Do1319 @ 0x1C0261294 (Do1319.c)
 *     Do3121 @ 0x1C0261368 (Do3121.c)
 *     Do3263 @ 0x1C0261470 (Do3263.c)
 *     Do35 @ 0x1C02615A0 (Do35.c)
 *     Do5225 @ 0x1C0261698 (Do5225.c)
 *     Do6251 @ 0x1C02617F0 (Do6251.c)
 *     MappingBGRF @ 0x1C0265A54 (MappingBGRF.c)
 */

__int64 __fastcall FastExpAA_CY(__int64 a1)
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
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v19; // r8
  __int64 (__fastcall *v20)(int, int, int, int, __int64, int); // r13
  int v21; // r11d
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r10
  unsigned __int16 *v29; // rsi
  unsigned int v30; // edi
  char *v31; // r15
  __int64 v32; // rdx
  int v33; // r14d
  unsigned __int8 *v34; // rcx
  char *v35; // rax
  char *v36; // rbx
  __int64 (__fastcall *v37)(int, int, int, int, int); // rcx
  int v38; // ebx
  __int64 i; // rcx
  unsigned __int8 *v40; // r12
  bool v41; // sf
  int v42; // ecx
  int v43; // edx
  int v44; // r13d
  _BYTE *v45; // rdi
  unsigned __int8 *v46; // rsi
  unsigned int v47; // eax
  unsigned __int8 *v48; // rdx
  unsigned __int8 *v49; // r9
  unsigned __int8 *v50; // rdx
  unsigned __int8 *v51; // rdx
  unsigned __int8 *v52; // r8
  _BYTE *v53; // rcx
  unsigned __int8 *v54; // r9
  unsigned __int8 *v55; // rdx
  unsigned __int8 *v56; // rdx
  size_t v57; // rbx
  __int16 v58; // ax
  __int64 v59; // rax
  __int64 v60; // rcx
  char v61; // [rsp+58h] [rbp-B0h]
  int v62; // [rsp+5Ch] [rbp-ACh]
  int v63; // [rsp+60h] [rbp-A8h]
  int v64; // [rsp+64h] [rbp-A4h]
  __int64 (__fastcall *v65)(int, int, int, int, __int64, int); // [rsp+68h] [rbp-A0h]
  char *v66; // [rsp+70h] [rbp-98h]
  unsigned __int8 *v67; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v68; // [rsp+80h] [rbp-88h]
  __int128 v69; // [rsp+88h] [rbp-80h]
  __int64 v70; // [rsp+98h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-68h]
  __int64 v72; // [rsp+A8h] [rbp-60h]
  __int64 v73; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall *v74)(int, int, int, int, int); // [rsp+B8h] [rbp-50h]
  unsigned __int16 *v75; // [rsp+C0h] [rbp-48h]
  __int64 v76; // [rsp+C8h] [rbp-40h]
  int v77; // [rsp+D8h] [rbp-30h] BYREF
  char v78; // [rsp+E0h] [rbp-28h]
  int v79; // [rsp+118h] [rbp+10h]
  __int64 v80; // [rsp+160h] [rbp+58h]
  unsigned int v81; // [rsp+16Ch] [rbp+64h]
  int v82; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v83)(int *); // [rsp+198h] [rbp+90h]
  void (__fastcall *v84)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v85; // [rsp+1F0h] [rbp+E8h]
  __int64 v86; // [rsp+208h] [rbp+100h]
  __int64 v87; // [rsp+210h] [rbp+108h]
  __int64 v88; // [rsp+258h] [rbp+150h]
  __int64 v89; // [rsp+260h] [rbp+158h]
  __int64 v90; // [rsp+270h] [rbp+168h]
  __int64 v91; // [rsp+278h] [rbp+170h]
  __int64 v92; // [rsp+280h] [rbp+178h]
  int v93; // [rsp+288h] [rbp+180h]
  int v94; // [rsp+28Ch] [rbp+184h]
  int v95; // [rsp+290h] [rbp+188h]
  __int64 v96; // [rsp+298h] [rbp+190h]
  __int64 v97; // [rsp+2A0h] [rbp+198h]
  __int64 v98; // [rsp+2A8h] [rbp+1A0h]
  int v99; // [rsp+2B0h] [rbp+1A8h]
  void *Src; // [rsp+2F0h] [rbp+1E8h]
  __int64 v101; // [rsp+2F8h] [rbp+1F0h]
  __int64 v102; // [rsp+300h] [rbp+1F8h]
  __int64 v103; // [rsp+308h] [rbp+200h]
  __int64 v104; // [rsp+310h] [rbp+208h]
  __int64 v105; // [rsp+318h] [rbp+210h]
  __int64 v106; // [rsp+320h] [rbp+218h]
  int v107; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v76 = a1;
  v3 = (_OWORD *)a1;
  v4 = &v77;
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
  v12 = *v3;
  v70 = 0LL;
  v13 = v3[1];
  *(_OWORD *)v4 = v12;
  v14 = v3[2];
  *((_OWORD *)v4 + 1) = v13;
  v15 = v3[3];
  *((_OWORD *)v4 + 2) = v14;
  v16 = v3[4];
  v17 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v15;
  *((_OWORD *)v4 + 4) = v16;
  *((_QWORD *)v4 + 10) = v17;
  v69 = 0LL;
  if ( !*(_QWORD *)(a1 + 536) )
    return v81;
  v19 = v86;
  v20 = GraySharpenInput;
  v21 = v107;
  v22 = v105;
  v23 = v106;
  v24 = *(_QWORD *)(v86 + 96);
  v63 = v107;
  **(_WORD **)(v86 + 88) += *(unsigned __int8 *)(v86 + 82);
  *(_WORD *)(v24 - 2) += *(unsigned __int8 *)(v19 + 83);
  v25 = v21 * *(unsigned __int8 *)(v19 + 83);
  v73 = v22 - v21 * *(unsigned __int8 *)(v19 + 82);
  v26 = v87;
  v71 = v87;
  v27 = *(_QWORD *)(v87 + 96);
  v28 = v25 + v23;
  LOWORD(v25) = *(unsigned __int8 *)(v87 + 83);
  v29 = *(unsigned __int16 **)(v87 + 88);
  v72 = v28;
  *(_WORD *)(v27 - 2) += v25;
  v30 = *(unsigned __int8 *)(v26 + 80);
  v61 = v78 & 4;
  v31 = (char *)(*(_QWORD *)(v26 + 32) + (-(__int64)((v78 & 4) != 0) & 0xFFFFFFFFFFFFFFFAuLL) + 9);
  v66 = v31;
  v32 = ((v78 & 4) != 0 ? 6 : 18) + v79;
  v33 = v79;
  v34 = (unsigned __int8 *)&v31[v32 + v32];
  v67 = (unsigned __int8 *)&v31[v32];
  v35 = (char *)&v34[v32];
  v68 = v34;
  v36 = (char *)&v34[v32 + v32];
  *(_QWORD *)&v69 = &v34[v32];
  *((_QWORD *)&v69 + 1) = v36;
  v37 = GrayFastExpAA_CX;
  if ( (v78 & 4) == 0 )
    v37 = (__int64 (__fastcall *)(int, int, int, int, int))FastExpAA_CX;
  v74 = v37;
  if ( (v78 & 4) == 0 )
    v20 = SharpenInput;
  v65 = v20;
  GetFixupScan((__int64)&v77, v35);
  if ( !v30 )
    v77 |= 0x20u;
  GetFixupScan((__int64)&v77, v36);
  if ( v30 < 2 )
    v77 |= 0x20u;
  Src = (char *)Src + 9;
  v38 = -3;
  do
  {
    for ( i = 0LL; i < 4; ++i )
      (&v66)[i] = (char *)(&v67)[i];
    *((_QWORD *)&v69 + 1) = v31;
    GetFixupScan((__int64)&v77, v31);
    v40 = v68;
    v65(0, (int)v68, (int)v68, v69, (__int64)v31, v33);
    v31 = v66;
    v41 = ++v38 < 0;
    v64 = v38;
    if ( !v41 )
    {
      v42 = *v29++;
      v62 = v42;
      v43 = v42;
      v75 = v29;
      v44 = v42;
      if ( !v38 )
      {
        v43 = *(unsigned __int8 *)(v71 + 82) + v42;
        v62 = v43;
      }
      v45 = Src;
      if ( v42 )
      {
        v46 = v67;
        v47 = v81;
        while ( 1 )
        {
          --v44;
          if ( !v47 )
            return *(unsigned int *)(v76 + 148);
          switch ( v43 )
          {
            case 1:
              Do5225(v45, (unsigned __int8 *)v31, v46, v40, v33);
              break;
            case 2:
              v56 = v40;
              if ( v44 == 1 )
                v56 = (unsigned __int8 *)v31;
              Do13(v45, v56, v46, v33);
              break;
            case 3:
              v52 = v46;
              v53 = v45;
              if ( v44 != 1 )
              {
                v51 = v40;
                if ( v44 == 2 )
                  v51 = (unsigned __int8 *)v31;
                goto LABEL_53;
              }
              Do1141(v45, (unsigned __int8 *)v31, v46, v40, v33);
              break;
            case 4:
              switch ( v44 )
              {
                case 0:
                  v51 = v40;
                  goto LABEL_44;
                case 1:
                  v54 = (unsigned __int8 *)v31;
                  v55 = v40;
                  goto LABEL_46;
                case 2:
                  v54 = v40;
                  v55 = (unsigned __int8 *)v31;
LABEL_46:
                  Do3121(v45, v55, v46, v54, v33);
                  goto LABEL_58;
                case 3:
                  v51 = (unsigned __int8 *)v31;
LABEL_44:
                  v52 = v46;
                  v53 = v45;
LABEL_53:
                  Do35(v53, v51, v52, v33);
                  break;
              }
              break;
            case 5:
              switch ( v44 )
              {
                case 0:
                  v48 = v40;
                  goto LABEL_38;
                case 1:
                  v49 = (unsigned __int8 *)v31;
                  v50 = v40;
                  goto LABEL_34;
                case 2:
                  Do3263(v45, (unsigned __int8 *)v31, v46, v40, v33);
                  goto LABEL_58;
                case 3:
                  v49 = v40;
                  v50 = (unsigned __int8 *)v31;
LABEL_34:
                  Do6251(v45, v50, v46, v49, v33);
                  goto LABEL_58;
                case 4:
                  v48 = (unsigned __int8 *)v31;
LABEL_38:
                  Do1319(v45, v48, v46, v33);
                  break;
              }
              break;
          }
LABEL_58:
          v57 = (-(__int64)(v61 != 0) & 0xFFFFFFFFFFFFFFFEuLL) + 3;
          memmove(&v45[-v57], v45, v57);
          memmove(&v45[v33], &v45[v33 - v57], v57);
          v74(v86, (int)v45, v73, v72, v63);
          v58 = v77;
          if ( (v77 & 0x80u) != 0 )
          {
            v83(&v77);
            v58 = v77;
          }
          if ( (v58 & 0x800) != 0 )
          {
            AlphaBlendBGRF(&v77);
            LOBYTE(v58) = v77;
          }
          if ( (v58 & 0x10) != 0 )
          {
            MappingBGRF(v101, v102, v89, v96);
            v59 = v99 + v96;
            if ( v59 == v97 )
              v59 = v98;
            v96 = v59;
          }
          v84(&v77, v103, v104, v80, v88, v90, v90 + v94, v95, v85);
          v43 = v62;
          v60 = v93 + v90;
          if ( v60 == v91 )
            v60 = v92;
          v80 += v82;
          v47 = v81 - 1;
          v90 = v60;
          --v81;
          if ( !v44 )
          {
            v38 = v64;
            v29 = v75;
            goto LABEL_71;
          }
        }
      }
    }
    v47 = v81;
LABEL_71:
    ;
  }
  while ( v47 );
  return *(unsigned int *)(v76 + 148);
}
