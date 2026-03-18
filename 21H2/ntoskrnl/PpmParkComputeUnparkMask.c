/*
 * XREFs of PpmParkComputeUnparkMask @ 0x1405DC8A8
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1402396F0 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1405D8398 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x1405D98BC (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventParkNodePreference @ 0x1405DA494 (PpmEventParkNodePreference.c)
 */

__int64 __fastcall PpmParkComputeUnparkMask(
        unsigned __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        _DWORD *a11,
        __int64 a12,
        unsigned int a13,
        unsigned __int8 a14,
        unsigned __int8 a15)
{
  __int64 v17; // rdi
  __int64 result; // rax
  unsigned __int64 *v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 (__fastcall *v22)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *); // rsi
  void (__fastcall *v23)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *); // r13
  __int16 v24; // ax
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // cx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // rbx
  __int64 v35; // r9
  unsigned int v36; // r11d
  char v37; // dl
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rcx
  char v40; // r14
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // rax
  int v43; // r9d
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // r14
  unsigned __int64 v49; // rcx
  _QWORD *Prcb; // rax
  _QWORD *v51; // r8
  unsigned __int64 v52; // r10
  __int64 *v53; // r9
  unsigned int v54; // r11d
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // r10
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int8 v64; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v65; // [rsp+51h] [rbp-AFh]
  __int64 v66; // [rsp+58h] [rbp-A8h] BYREF
  int v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  unsigned int v69; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+80h] [rbp-80h]
  __int64 v72; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v73; // [rsp+90h] [rbp-70h]
  __int64 v74; // [rsp+98h] [rbp-68h]
  __int64 *v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v77; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v78; // [rsp+B8h] [rbp-48h]
  _QWORD v79[34]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v80[34]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v81[34]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _QWORD v82[34]; // [rsp+3F0h] [rbp+2F0h] BYREF
  _DWORD v83[68]; // [rsp+500h] [rbp+400h] BYREF

  v74 = a3;
  v17 = a1;
  v73 = a4;
  v75 = (__int64 *)a9;
  v77 = a10;
  memset(v83, 0, 0x108uLL);
  memset(v79, 0, 0x108uLL);
  memset(v81, 0, 0x108uLL);
  memset(v80, 0, 0x108uLL);
  result = (__int64)memset(v82, 0, 0x108uLL);
  v19 = a9;
  v69 = 0;
  *a9 = 0LL;
  *a10 = 0LL;
  if ( !a6 )
  {
    *a9 = a2;
    return result;
  }
  v20 = a2 - ((a2 >> 1) & 0x5555555555555555LL);
  result = (0x101010101010101LL
          * (((v20 & 0x3333333333333333LL)
            + ((v20 >> 2) & 0x3333333333333333LL)
            + (((v20 & 0x3333333333333333LL) + ((v20 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a6 == (_DWORD)result && !a5 )
  {
    *a10 = a2;
    return result;
  }
  v21 = (v20 & 0x3333333333333333LL) + (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  result = (0x101010101010101LL * ((v21 + (v21 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a5 != (_DWORD)result )
  {
    if ( !a5
      || (v23 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *))PpmParkPreferenceHandler) == 0LL )
    {
      v31 = 0LL;
      v32 = 0LL;
LABEL_37:
      result = a8;
      v76 = v32;
      v70 = v31;
      *v19 = a2;
      v33 = a2 & ~(a8 | a7 | v31 | v32);
      if ( (a2 & a8) != 0 )
      {
        *a11 |= 0x200u;
        v34 = a8 & *v19;
      }
      else if ( (a2 & v32) != 0 )
      {
        *a11 |= 0x400u;
        v34 = v32 & *v19;
      }
      else if ( (a2 & ~(a8 | a7 | v31 | v32)) != 0 )
      {
        *a11 |= 0x800u;
        v34 = v33 & *v19;
      }
      else
      {
        v34 = v31 & a2;
        if ( (v31 & a2) != 0 )
          *a11 |= 0x80000u;
        else
          v34 = 0LL;
      }
      v35 = v74;
      v36 = 0;
      v37 = 0;
      v38 = v74 & v73;
      v66 = v34;
      v68 = v34;
      v71 = v34;
      v39 = v73 & (a2 ^ v74);
      v40 = -1;
      v41 = v34;
      v72 = v34;
      v78 = v74 & v73;
      v73 = v39;
      v69 = 0;
      v65 = -1;
      v64 = -1;
      v67 = 0;
      while ( 1 )
      {
        if ( !v41 )
          return result;
        if ( (v38 & v41) != 0 )
        {
          *a11 |= 0x20000u;
          v41 &= v38;
        }
        if ( ((PopHeteroSystem - 3) & 0xFFFFFFFD) != 0 )
        {
          v48 = v71;
        }
        else
        {
          *a11 |= 0x8000u;
          v42 = PpmHeteroRestrictToFavoredClass(v41, v17, &v64, a14, a15, a13, v36, &v72, &v66);
          v41 = v42;
          if ( v64 != v40 )
          {
            v65 = v64;
            v43 = 0;
            v44 = v42;
            v45 = (0x101010101010101LL
                 * ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            v46 = *(_QWORD *)a12
                % (unsigned __int64)((unsigned int)((0x101010101010101LL
                                                   * ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                     + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                     + ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
                + 1;
            if ( *(_QWORD *)a12
               % (unsigned __int64)((unsigned int)((0x101010101010101LL
                                                  * ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) != -1LL )
            {
              do
              {
                _BitScanForward64(&v47, v44);
                v43 += v47 + 1;
                v44 >>= (unsigned __int8)v47 + 1;
                --v46;
              }
              while ( v46 );
            }
            v67 = v43 - 1;
            PpmEventHeteroFavoredCoreRotationChange(v45, v43 - 1);
          }
          v34 = v66;
          v48 = v72;
          v39 = v73;
          v37 = v67;
          v35 = v74;
        }
        if ( (v39 & v41) != 0 )
        {
          *a11 |= 0x1000u;
          v41 &= v39;
        }
        if ( !*(_BYTE *)(a12 + 16) && (v41 & ~v35) != 0 )
        {
          *a11 |= 0x2000u;
          v41 &= ~v35;
        }
        LODWORD(v66) = 0;
        _BitScanForward64(&v49, __ROR8__(v41, v37));
        Prcb = (_QWORD *)KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * (_DWORD)v17 + (((_BYTE)v49 + v37) & 0x3F)]);
        v51 = Prcb;
        if ( PpmParkCoreMask )
          v52 = Prcb[4364];
        else
          v52 = Prcb[25];
        v53 = v75;
        v54 = v69;
        v55 = ~v52;
        *v75 &= ~v52;
        if ( v54 >= a5 )
          *v77 |= v52;
        v56 = ((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
        v36 = ((unsigned int)((0x101010101010101LL * ((v56 + (v56 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) + v54;
        v57 = Prcb[24];
        v69 = v36;
        v41 &= ~*(_QWORD *)(v57 + 128);
        v58 = ~v51[*((unsigned __int8 *)v51 + 208) + 4323] & v68;
        v68 = v58;
        if ( !PpmHeteroModuleUnparkPolicy )
          break;
        if ( PpmHeteroModuleUnparkPolicy != 1 )
        {
          v59 = 0LL;
LABEL_78:
          v71 = v59;
          goto LABEL_79;
        }
        if ( (unsigned __int16)v17 >= *((_WORD *)v51 + 19528) )
          v60 = 0LL;
        else
          v60 = v51[v17 + 4883];
        v59 = v48 & v60 & v55;
        v71 = v59;
LABEL_79:
        v62 = ~v51[4364];
        v72 = v59;
        result = v34 & v62;
        v66 = result;
        v34 = result;
        if ( !v41 )
        {
          if ( !v58 )
          {
            v68 = result;
            v58 = result;
            if ( !result )
            {
              result = *v53;
              if ( (*v53 & a8) != 0 )
              {
                *a11 |= 0x200u;
                goto LABEL_84;
              }
              if ( (result & v76) != 0 )
              {
                *a11 |= 0x400u;
LABEL_84:
                v34 = a8 & *v53;
LABEL_85:
                v58 = v34;
                v68 = v34;
              }
              else
              {
                if ( (result & v33) != 0 )
                {
                  *a11 |= 0x800u;
                  v34 = v33 & *v53;
                  goto LABEL_85;
                }
                v63 = v70;
                if ( (result & v70) != 0 )
                {
                  *a11 |= 0x80000u;
                  v34 = v63 & *v53;
                  goto LABEL_85;
                }
                v34 = 0LL;
                v58 = 0LL;
                v68 = 0LL;
              }
              v66 = v34;
            }
            if ( !v59 )
              v59 = v34;
            v71 = v59;
            v72 = v59;
          }
          v41 = v58;
        }
        v39 = v73;
        v37 = v67;
        v38 = v78;
        v40 = v65;
        v35 = v74;
        if ( v36 >= a6 )
          return result;
      }
      if ( (unsigned __int16)v17 >= *((_WORD *)v51 + 19528) )
        v61 = 0LL;
      else
        v61 = v51[v17 + 4883];
      v59 = v48 & ~v61;
      goto LABEL_78;
    }
    LODWORD(v80[0]) = 2097153;
    memset((char *)v80 + 4, 0, 0x104uLL);
    v83[0] = 2097153;
    memset(&v83[1], 0, 0x104uLL);
    LODWORD(v79[0]) = 2097153;
    memset((char *)v79 + 4, 0, 0x104uLL);
    LODWORD(v81[0]) = 2097153;
    memset((char *)v81 + 4, 0, 0x104uLL);
    LODWORD(v82[0]) = 2097153;
    memset((char *)v82 + 4, 0, 0x104uLL);
    v24 = v17 + 1;
    if ( (_WORD)v17 )
    {
      if ( WORD1(v80[0]) <= (unsigned __int16)v17 )
        goto LABEL_20;
      LOWORD(v80[0]) = v17 + 1;
    }
    v80[v17 + 1] |= a2;
LABEL_20:
    v25 = v79[0];
    if ( LOWORD(v79[0]) <= (unsigned __int16)v17 )
    {
      v26 = WORD1(v79[0]);
      if ( WORD1(v79[0]) <= (unsigned __int16)v17 )
      {
        v27 = a7;
LABEL_25:
        if ( v25 <= (unsigned __int16)v17 )
        {
          if ( v26 <= (unsigned __int16)v17 )
          {
LABEL_29:
            v23(0LL, PpmCheckTime, a5, v80, v83, v79, v81, v82);
            if ( (unsigned __int16)v17 >= LOWORD(v81[0]) )
              v28 = 0LL;
            else
              v28 = v81[v17 + 1];
            v70 = v28;
            if ( (unsigned __int16)v17 >= LOWORD(v82[0]) )
              v29 = 0LL;
            else
              v29 = v82[v17 + 1];
            PpmEventParkNodePreference(v17, a2, a5, v27, a8, v28, v29);
            v19 = (unsigned __int64 *)v75;
            v30 = ~(a8 | v27);
            v31 = v30 & v70;
            v32 = v30 & v29;
            goto LABEL_37;
          }
          LOWORD(v79[0]) = v24;
        }
        v79[v17 + 1] |= a8;
        goto LABEL_29;
      }
      v24 = v17 + 1;
      LOWORD(v79[0]) = v17 + 1;
    }
    v27 = a7;
    v79[v17 + 1] |= a7;
    v26 = WORD1(v79[0]);
    v25 = v79[0];
    goto LABEL_25;
  }
  v22 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *))PpmParkPreferenceHandler;
  if ( PpmParkPreferenceHandler && a3 )
  {
    LODWORD(v80[0]) = 2097153;
    memset((char *)v80 + 4, 0, 0x104uLL);
    v83[0] = 2097153;
    memset(&v83[1], 0, 0x104uLL);
    LODWORD(v79[0]) = 2097153;
    memset((char *)v79 + 4, 0, 0x104uLL);
    LODWORD(v81[0]) = 2097153;
    memset((char *)v81 + 4, 0, 0x104uLL);
    LODWORD(v82[0]) = 2097153;
    memset((char *)v82 + 4, 0, 0x104uLL);
    if ( (_WORD)v17 )
    {
      if ( WORD1(v80[0]) <= (unsigned __int16)v17 )
        return v22(0LL, PpmCheckTime, a5, v80, v83, v79, v81, v82);
      LOWORD(v80[0]) = v17 + 1;
    }
    v80[v17 + 1] |= a2;
    return v22(0LL, PpmCheckTime, a5, v80, v83, v79, v81, v82);
  }
  return result;
}
