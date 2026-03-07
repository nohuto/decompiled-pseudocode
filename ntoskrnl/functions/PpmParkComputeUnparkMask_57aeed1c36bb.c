char __fastcall PpmParkComputeUnparkMask(
        unsigned __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 *a9,
        _QWORD *a10,
        _DWORD *a11,
        __int64 a12,
        unsigned int a13,
        char a14,
        unsigned __int8 a15,
        int a16)
{
  _DWORD *v18; // r14
  __int64 v19; // rdi
  unsigned __int64 *v20; // r8
  __int64 v21; // rcx
  char v22; // r9
  char v23; // r10
  unsigned __int64 v24; // rax
  __int64 (__fastcall *v25)(_QWORD, __int64, _QWORD, _QWORD *, _QWORD *, _QWORD *, _QWORD *, _QWORD *); // rbx
  void (__fastcall *v26)(_QWORD, __int64, _QWORD, _QWORD *, _QWORD *, _QWORD *, _QWORD *, _QWORD *); // r13
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r8
  unsigned int v35; // r11d
  char v36; // dl
  __int64 v37; // rcx
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // r9
  int v42; // r9d
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  __int64 Prcb; // rax
  __int64 v52; // r13
  unsigned __int64 v53; // rsi
  unsigned __int64 *v54; // r8
  unsigned int v55; // r11d
  __int64 v56; // rdx
  _DWORD *v57; // r14
  _DWORD *v58; // rdi
  unsigned int FirstSetRightAffinity; // eax
  int v60; // edx
  __int64 v61; // rax
  unsigned __int64 v62; // r10
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int8 v68; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v69; // [rsp+51h] [rbp-AFh]
  char v70; // [rsp+52h] [rbp-AEh]
  char v71; // [rsp+53h] [rbp-ADh]
  char v72; // [rsp+54h] [rbp-ACh]
  int v73; // [rsp+58h] [rbp-A8h]
  unsigned int v74; // [rsp+5Ch] [rbp-A4h]
  __int64 v75; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v76; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h]
  __int64 v79; // [rsp+80h] [rbp-80h]
  __int64 v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+98h] [rbp-68h]
  __int64 v83; // [rsp+A0h] [rbp-60h]
  _QWORD *v84; // [rsp+A8h] [rbp-58h]
  _DWORD *v85; // [rsp+B0h] [rbp-50h]
  _DWORD *v86; // [rsp+B8h] [rbp-48h]
  _DWORD *v87; // [rsp+C0h] [rbp-40h]
  __int64 v88; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h]
  _QWORD v91[34]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v92[34]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v93[34]; // [rsp+300h] [rbp+200h] BYREF
  _QWORD v94[34]; // [rsp+410h] [rbp+310h] BYREF
  _QWORD v95[34]; // [rsp+520h] [rbp+420h] BYREF
  _QWORD v96[34]; // [rsp+630h] [rbp+530h] BYREF

  v18 = a11;
  v19 = a1;
  v79 = a3;
  v80 = a4;
  v76 = a1;
  v77 = a9;
  v84 = a10;
  v87 = a11;
  memset(v93, 0, 0x108uLL);
  memset(v92, 0, 0x108uLL);
  memset(v95, 0, 0x108uLL);
  memset(v94, 0, 0x108uLL);
  memset(v91, 0, 0x108uLL);
  memset(v96, 0, 0x108uLL);
  v20 = a9;
  v21 = 55LL * dword_140C3D48C;
  v22 = BYTE4(PpmCurrentProfile[v21 + 59]);
  v23 = BYTE5(PpmCurrentProfile[v21 + 59]);
  LOBYTE(v24) = BYTE6(PpmCurrentProfile[v21 + 59]);
  *a9 = 0LL;
  *a10 = 0LL;
  v71 = v22;
  v70 = v23;
  v72 = v24;
  if ( !a6 || !a5 )
  {
    *a9 = a2;
    return v24;
  }
  v24 = (0x101010101010101LL
       * ((((a2 - ((a2 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
         + (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
         + ((((a2 - ((a2 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a5 != (_DWORD)v24 )
  {
    v26 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _QWORD *, _QWORD *, _QWORD *, _QWORD *))PpmParkPreferenceHandler;
    if ( !PpmParkPreferenceHandler )
    {
      v29 = a8;
      v31 = 0LL;
      v32 = 0LL;
LABEL_32:
      v83 = v32;
      v78 = v31;
      *v20 = a2;
      v88 = a2 & ~(v29 | a7 | v31 | v32);
      if ( (a2 & v29) != 0 )
      {
        *a11 |= 0x200u;
        v33 = v29 & *v20;
      }
      else if ( (a2 & v32) != 0 )
      {
        *a11 |= 0x400u;
        v33 = v32 & *v20;
      }
      else if ( (a2 & ~(v29 | a7 | v31 | v32)) != 0 )
      {
        *a11 |= 0x800u;
        v33 = a2 & ~(v29 | a7 | v31 | v32) & *v20;
      }
      else
      {
        v33 = v31 & a2;
        if ( (v31 & a2) != 0 )
          *a11 |= 0x80000u;
        else
          v33 = 0LL;
      }
      v34 = v79;
      v35 = 0;
      v36 = 0;
      v37 = v79 & v80;
      v82 = v33;
      v90 = v79 & v80;
      v74 = 0;
      v69 = -1;
      v38 = v80 & (a2 ^ v79);
      v39 = v33;
      v89 = v38;
      v68 = -1;
      v73 = 0;
      v40 = v33 & -(__int64)(v23 != 0);
      LOBYTE(v24) = -v22;
      v41 = v33 & -(__int64)(v22 != 0);
      v75 = v41;
      while ( 1 )
      {
        if ( !v39 )
          return v24;
        if ( (v37 & v39) != 0 )
        {
          *v18 |= 0x20000u;
          v39 &= v37;
        }
        if ( ((PopHeteroSystem - 3) & 0xFFFFFFFC) == 0 && PopHeteroSystem != 4 )
        {
          LOBYTE(v41) = a14;
          *v18 |= 0x8000u;
          v39 = PpmHeteroRestrictToFavoredClass(v39, (unsigned __int16)v19, &v68, v41, a15, a13, v35, a16);
          if ( v68 != v69 )
          {
            v69 = v68;
            v42 = 0;
            v43 = v39;
            v44 = *(_QWORD *)a12
                % (unsigned __int64)((unsigned int)((0x101010101010101LL
                                                   * ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                     + ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
                + 1;
            if ( *(_QWORD *)a12
               % (unsigned __int64)((unsigned int)((0x101010101010101LL
                                                  * ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) != -1LL )
            {
              do
              {
                v73 = 0;
                _BitScanForward64(&v45, v43);
                v42 += v45 + 1;
                v43 >>= (unsigned __int8)v45 + 1;
                --v44;
              }
              while ( v44 );
            }
            v73 = v42 - 1;
            PpmEventHeteroFavoredCoreRotationChange(
              (unsigned int)((0x101010101010101LL
                            * ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                              + ((((v39 - ((v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v39 - ((v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
              v42 - 1);
          }
          v34 = v79;
          v36 = v73;
          v41 = v75;
        }
        v46 = v39 & v40;
        if ( (v39 & v40) == 0 )
          v40 |= v39;
        v80 = v40;
        if ( !v46 )
          v46 = v39;
        v47 = v46;
        v48 = v41 & v46;
        if ( (v41 & v46) != 0 )
          v47 = v41 & v46;
        v49 = v41 | v46;
        if ( !v48 )
          v41 = v49;
        v75 = v41;
        if ( (v38 & v47) != 0 )
        {
          *v18 |= 0x1000u;
          v47 &= v38;
        }
        if ( !*(_BYTE *)(a12 + 16) && (v47 & ~v34) != 0 )
        {
          *v18 |= 0x2000u;
          v47 &= ~v34;
        }
        LODWORD(v81) = 0;
        _BitScanForward64(&v50, __ROR8__(v47, v36));
        Prcb = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v19 + (((_BYTE)v50 + v36) & 0x3F)]);
        v52 = Prcb;
        v53 = PpmParkCoreMask ? *(_QWORD *)(Prcb + 34912) : *(_QWORD *)(Prcb + 200);
        v54 = v77;
        v55 = v74;
        v56 = ~v53;
        v81 = ~v53;
        *v77 &= ~v53;
        if ( v55 >= a5 )
        {
          *v84 |= v53;
          v86 = PpmParkNewSoftParkRankList;
          if ( PpmParkNewSoftParkRankList )
          {
            v85 = PpmParkOldSoftParkRankList;
            if ( PpmParkOldSoftParkRankList )
              break;
          }
        }
LABEL_82:
        v35 = ((unsigned int)((0x101010101010101LL
                             * ((((v53 - ((v53 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v53 - ((v53 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v53 - ((v53 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v53 - ((v53 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
            + v55;
        v61 = *(_QWORD *)(v52 + 192);
        v74 = v35;
        v39 = ~*(_QWORD *)(v61 + 128) & v47;
        v62 = ~*(_QWORD *)(v52 + 8LL * *(unsigned __int8 *)(v52 + 208) + 34584) & v82;
        v82 = v62;
        switch ( v70 )
        {
          case 0:
            goto LABEL_87;
          case 1:
            v40 = v80 & ~*(_QWORD *)(v52 + 34928);
            break;
          case 2:
            v40 = v56 & v80 & *(_QWORD *)(v52 + 34928);
            break;
          default:
LABEL_87:
            v40 = 0LL;
            break;
        }
        switch ( v71 )
        {
          case 0:
            goto LABEL_99;
          case 1:
            if ( (unsigned __int16)v19 >= *(_WORD *)(v52 + 38416) )
              v64 = 0LL;
            else
              v64 = *(_QWORD *)(v52 + 8LL * (unsigned __int16)v19 + 38424);
            v41 = ~v64 & v75;
            break;
          case 2:
            if ( (unsigned __int16)v19 >= *(_WORD *)(v52 + 38416) )
              v63 = 0LL;
            else
              v63 = *(_QWORD *)(v52 + 8LL * (unsigned __int16)v19 + 38424);
            v41 = v56 & v63 & v75;
            break;
          default:
LABEL_99:
            v41 = 0LL;
            break;
        }
        v75 = v41;
        if ( v72 && v72 == 3 )
          v65 = *(_QWORD *)(v52 + 200);
        else
          v65 = *(_QWORD *)(v52 + 34912);
        v24 = v33 & ~v65;
        v33 = v24;
        if ( v39 )
          goto LABEL_119;
        if ( !v62 )
        {
          if ( !v24 )
          {
            v24 = *v54;
            v66 = a8;
            if ( (*v54 & a8) != 0 )
            {
              *v18 |= 0x200u;
              goto LABEL_115;
            }
            v66 = v83;
            if ( (v24 & v83) != 0 )
            {
              *v18 |= 0x400u;
              goto LABEL_115;
            }
            v66 = v88;
            if ( (v24 & v88) != 0 )
            {
              *v18 |= 0x800u;
              goto LABEL_115;
            }
            v66 = v78;
            if ( (v24 & v78) != 0 )
            {
              *v18 |= 0x80000u;
LABEL_115:
              v33 = v66 & *v54;
            }
            else
            {
              v33 = 0LL;
            }
          }
          v62 = v33;
          v82 = v33;
        }
        v39 = v62;
LABEL_119:
        v38 = v89;
        v36 = v73;
        v37 = v90;
        v34 = v79;
        if ( v35 >= a6 )
          return v24;
      }
      LODWORD(v94[0]) = 2097153;
      memset((char *)v94 + 4, 0, 0x104uLL);
      if ( (_WORD)v19 )
      {
        if ( WORD1(v94[0]) <= (unsigned __int16)v19 )
        {
LABEL_75:
          if ( !(unsigned int)KeIsEmptyAffinityEx(v94) )
          {
            v57 = v85;
            v58 = v86;
            do
            {
              FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(v94);
              v60 = PpmParkSoftParkCurrentRank;
              v58[FirstSetRightAffinity] = PpmParkSoftParkCurrentRank;
              if ( v60 != v57[FirstSetRightAffinity] )
                PpmParkSoftParkRankListChanged = 1;
              PpmParkSoftParkCurrentRank = v60 + 1;
              KeRemoveProcessorAffinityEx((unsigned __int16 *)v94, FirstSetRightAffinity);
            }
            while ( !(unsigned int)KeIsEmptyAffinityEx(v94) );
            LOWORD(v19) = v76;
            v18 = v87;
          }
          v55 = v74;
          v54 = v77;
          v56 = v81;
          goto LABEL_82;
        }
        LOWORD(v94[0]) = v19 + 1;
      }
      v94[(unsigned __int16)v19 + 1] |= v53;
      goto LABEL_75;
    }
    LODWORD(v91[0]) = 2097153;
    memset((char *)v91 + 4, 0, 0x104uLL);
    LODWORD(v93[0]) = 2097153;
    memset((char *)v93 + 4, 0, 0x104uLL);
    LODWORD(v92[0]) = 2097153;
    memset((char *)v92 + 4, 0, 0x104uLL);
    LODWORD(v95[0]) = 2097153;
    memset((char *)v95 + 4, 0, 0x104uLL);
    LODWORD(v96[0]) = 2097153;
    memset((char *)v96 + 4, 0, 0x104uLL);
    if ( (_WORD)v19 )
    {
      if ( WORD1(v91[0]) <= (unsigned __int16)v19 )
        goto LABEL_16;
      LOWORD(v91[0]) = v19 + 1;
    }
    v91[v19 + 1] |= a2;
LABEL_16:
    if ( LOWORD(v93[0]) <= (unsigned __int16)v19 )
    {
      if ( WORD1(v93[0]) <= (unsigned __int16)v19 )
        goto LABEL_20;
      LOWORD(v93[0]) = v19 + 1;
    }
    v93[v19 + 1] |= a7;
LABEL_20:
    if ( LOWORD(v92[0]) <= (unsigned __int16)v19 )
    {
      if ( WORD1(v92[0]) <= (unsigned __int16)v19 )
      {
LABEL_24:
        v26(0LL, PpmCheckTime, a5, v91, v93, v92, v95, v96);
        if ( (unsigned __int16)v19 >= LOWORD(v95[0]) )
          v27 = 0LL;
        else
          v27 = v95[v19 + 1];
        v78 = v27;
        if ( (unsigned __int16)v19 >= LOWORD(v96[0]) )
          v28 = 0LL;
        else
          v28 = v96[v19 + 1];
        PpmEventParkNodePreference(v19, a2, a5, a7, a8, v27, v28);
        v29 = a8;
        v20 = v77;
        v30 = ~(a8 | a7);
        v22 = v71;
        v31 = v30 & v78;
        v23 = v70;
        v32 = v30 & v28;
        goto LABEL_32;
      }
      LOWORD(v92[0]) = v19 + 1;
    }
    v92[v19 + 1] |= a8;
    goto LABEL_24;
  }
  v25 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _QWORD *, _QWORD *, _QWORD *, _QWORD *))PpmParkPreferenceHandler;
  if ( PpmParkPreferenceHandler && a3 )
  {
    LODWORD(v91[0]) = 2097153;
    memset((char *)v91 + 4, 0, 0x104uLL);
    LODWORD(v93[0]) = 2097153;
    memset((char *)v93 + 4, 0, 0x104uLL);
    LODWORD(v92[0]) = 2097153;
    memset((char *)v92 + 4, 0, 0x104uLL);
    LODWORD(v95[0]) = 2097153;
    memset((char *)v95 + 4, 0, 0x104uLL);
    LODWORD(v96[0]) = 2097153;
    memset((char *)v96 + 4, 0, 0x104uLL);
    if ( (_WORD)v19 )
    {
      if ( WORD1(v91[0]) <= (unsigned __int16)v19 )
      {
LABEL_10:
        LOBYTE(v24) = v25(0LL, PpmCheckTime, a5, v91, v93, v92, v95, v96);
        return v24;
      }
      LOWORD(v91[0]) = v19 + 1;
    }
    v91[v19 + 1] |= a2;
    goto LABEL_10;
  }
  return v24;
}
