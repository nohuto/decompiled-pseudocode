/*
 * XREFs of PpmParkComputeUnparkMask @ 0x14057D32C
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14022C800 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x140578528 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmEventParkNodePreference @ 0x14057A108 (PpmEventParkNodePreference.c)
 */

__int64 __fastcall PpmParkComputeUnparkMask(
        unsigned __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        _DWORD *a11)
{
  __int64 v13; // r14
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 (__fastcall *v17)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *); // rdi
  __int16 v18; // ax
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 Prcb; // rax
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned int v38; // r9d
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  void (__fastcall *v42)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *); // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  unsigned int v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  _QWORD v49[22]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v50[22]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v51[22]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v52[22]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v53[44]; // [rsp+350h] [rbp+250h] BYREF

  v13 = a1;
  memset(v53, 0, 0xA8uLL);
  memset(v49, 0, 0xA8uLL);
  memset(v51, 0, 0xA8uLL);
  memset(v50, 0, 0xA8uLL);
  result = (__int64)memset(v52, 0, 0xA8uLL);
  *a9 = 0LL;
  *a10 = 0LL;
  if ( !a6 )
  {
    *a9 = a2;
    return result;
  }
  v15 = a2 - ((a2 >> 1) & 0x5555555555555555LL);
  result = (0x101010101010101LL
          * (((v15 & 0x3333333333333333LL)
            + ((v15 >> 2) & 0x3333333333333333LL)
            + (((v15 & 0x3333333333333333LL) + ((v15 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a6 == (_DWORD)result && !a5 )
  {
    *a10 = a2;
    return result;
  }
  v16 = (v15 & 0x3333333333333333LL) + (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  result = (0x101010101010101LL * ((v16 + (v16 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a5 != (_DWORD)result )
  {
    if ( a5
      && (v42 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *))PpmParkPreferenceHandler) != 0LL )
    {
      LODWORD(v50[0]) = 1310721;
      memset((char *)v50 + 4, 0, 0xA4uLL);
      v53[0] = 1310721;
      memset(&v53[1], 0, 0xA4uLL);
      LODWORD(v49[0]) = 1310721;
      memset((char *)v49 + 4, 0, 0xA4uLL);
      LODWORD(v51[0]) = 1310721;
      memset((char *)v51 + 4, 0, 0xA4uLL);
      LODWORD(v52[0]) = 1310721;
      memset((char *)v52 + 4, 0, 0xA4uLL);
      v18 = 1;
      if ( (_WORD)v13 )
        v18 = v13 + 1;
      LOWORD(v50[0]) = v18;
      v19 = v49[0];
      v50[v13 + 1] |= a2;
      if ( v19 <= (unsigned __int16)v13 )
        v19 = v13 + 1;
      LOWORD(v49[0]) = v19;
      v49[v13 + 1] |= a7;
      v20 = v49[v13 + 1];
      if ( LOWORD(v49[0]) <= (unsigned __int16)v13 )
      {
        LOWORD(v49[0]) = v13 + 1;
        v20 = v49[v13 + 1];
      }
      v21 = a8;
      v22 = PpmCheckTime;
      v49[v13 + 1] = a8 | v20;
      v42(0LL, v22, a5, v50, v53, v49, v51, v52);
      if ( (unsigned __int16)v13 >= LOWORD(v51[0]) )
        v23 = 0LL;
      else
        v23 = v51[v13 + 1];
      if ( (unsigned __int16)v13 >= LOWORD(v52[0]) )
        v24 = 0LL;
      else
        v24 = v52[v13 + 1];
      PpmEventParkNodePreference(v13, a2, a5, a7, a8, v23, v24);
      v25 = ~(a8 | a7);
      v26 = v25 & v23;
      v27 = v25 & v24;
    }
    else
    {
      v21 = a8;
      v26 = 0LL;
      v27 = 0LL;
    }
    v46 = v26;
    *a9 = a2;
    v28 = a2 & ~(v21 | a7 | v26 | v27);
    if ( (a2 & v21) != 0 )
    {
      *a11 |= 0x200u;
      v29 = a8 & *a9;
    }
    else if ( (a2 & v27) != 0 )
    {
      *a11 |= 0x400u;
      v29 = v27 & *a9;
    }
    else if ( (a2 & ~(v21 | a7 | v26 | v27)) != 0 )
    {
      *a11 |= 0x800u;
      v29 = v28 & *a9;
    }
    else
    {
      v29 = v26 & a2;
      if ( (v26 & a2) != 0 )
        *a11 |= 0x80000u;
      else
        v29 = 0LL;
    }
    v30 = a3;
    v31 = v29;
    v43 = v29;
    result = a4 & (a2 ^ a3);
    v45 = 0;
    v48 = result;
    while ( 1 )
    {
      if ( !v31 )
        return result;
      if ( ((PopHeteroSystem - 3) & 0xFFFFFFFD) == 0 )
      {
        *a11 |= 0x8000u;
        v32 = PpmHeteroRestrictToFavoredClass(v31, a1);
        v30 = a3;
        v31 = v32;
      }
      if ( (v48 & v31) != 0 )
      {
        *a11 |= 0x1000u;
        v31 &= v48;
      }
      if ( (v31 & ~v30) != 0 )
      {
        *a11 |= 0x2000u;
        v31 &= ~v30;
      }
      _BitScanForward64(&v33, v31);
      Prcb = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a1 + (v33 & 0x3F)]);
      v35 = Prcb;
      if ( PpmParkCoreMask )
        v36 = *(_QWORD *)(Prcb + 33880);
      else
        v36 = *(_QWORD *)(Prcb + 200);
      *a9 &= ~v36;
      if ( v45 >= a5 )
        *a10 |= v36;
      v37 = ((v36 - ((v36 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v36 - ((v36 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
      v38 = ((unsigned int)((0x101010101010101LL * ((v37 + (v37 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) + v45;
      v45 = v38;
      v31 &= ~*(_QWORD *)(*(_QWORD *)(Prcb + 192) + 136LL);
      v39 = ~*(_QWORD *)(Prcb + 8LL * *(unsigned __int8 *)(Prcb + 208) + 33688) & v43;
      result = ~*(_QWORD *)(Prcb + 33880);
      v29 &= result;
      v43 &= ~*(_QWORD *)(v35 + 8LL * *(unsigned __int8 *)(v35 + 208) + 33688);
      if ( !v31 )
        break;
LABEL_65:
      v30 = a3;
      if ( v38 >= a6 )
        return result;
    }
    if ( v39 )
    {
LABEL_64:
      v31 = v39;
      goto LABEL_65;
    }
    if ( !v29 )
    {
      v40 = *a9;
      result = a8;
      if ( (*a9 & a8) != 0 )
      {
        *a11 |= 0x200u;
      }
      else
      {
        if ( (v40 & v27) == 0 )
        {
          if ( (v40 & v28) != 0 )
          {
            *a11 |= 0x800u;
            v29 = v28 & *a9;
          }
          else if ( (v40 & v46) != 0 )
          {
            *a11 |= 0x80000u;
            v29 = v46 & *a9;
          }
          else
          {
            v29 = 0LL;
          }
          goto LABEL_63;
        }
        *a11 |= 0x400u;
      }
      v29 = a8 & *a9;
    }
LABEL_63:
    v39 = v29;
    v43 = v29;
    goto LABEL_64;
  }
  v17 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *))PpmParkPreferenceHandler;
  if ( PpmParkPreferenceHandler && a3 )
  {
    LODWORD(v50[0]) = 1310721;
    memset((char *)v50 + 4, 0, 0xA4uLL);
    v53[0] = 1310721;
    memset(&v53[1], 0, 0xA4uLL);
    LODWORD(v49[0]) = 1310721;
    memset((char *)v49 + 4, 0, 0xA4uLL);
    LODWORD(v51[0]) = 1310721;
    memset((char *)v51 + 4, 0, 0xA4uLL);
    LODWORD(v52[0]) = 1310721;
    memset((char *)v52 + 4, 0, 0xA4uLL);
    if ( (_WORD)v13 )
      LOWORD(v50[0]) = v13 + 1;
    v50[v13 + 1] |= a2;
    return v17(0LL, PpmCheckTime, a5, v50, v53, v49, v51, v52);
  }
  return result;
}
