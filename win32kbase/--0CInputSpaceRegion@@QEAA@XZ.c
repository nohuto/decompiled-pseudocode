/*
 * XREFs of ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C0013370
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00130D0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C0013300 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

CInputSpaceRegion *__fastcall CInputSpaceRegion::CInputSpaceRegion(CInputSpaceRegion *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rcx
  _OWORD v13[13]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v13, 0, 0xC8uLL);
  v2 = v13[1];
  *(_OWORD *)this = v13[0];
  v3 = v13[2];
  *((_OWORD *)this + 1) = v2;
  v4 = v13[3];
  *((_OWORD *)this + 2) = v3;
  v5 = v13[4];
  *((_OWORD *)this + 3) = v4;
  v6 = v13[5];
  *((_OWORD *)this + 4) = v5;
  v7 = v13[6];
  *((_OWORD *)this + 5) = v6;
  *((_OWORD *)this + 6) = v7;
  *((_OWORD *)this + 7) = v13[7];
  v8 = v13[9];
  *((_OWORD *)this + 8) = v13[8];
  v9 = v13[10];
  *((_OWORD *)this + 9) = v8;
  v10 = v13[11];
  v11 = *(_QWORD *)&v13[12];
  *((_OWORD *)this + 10) = v9;
  *((_OWORD *)this + 11) = v10;
  *((_QWORD *)this + 24) = v11;
  memset((char *)this + 200, 0, 0x120uLL);
  *((_BYTE *)this + 488) = 0;
  memset((char *)this + 496, 0, 0xD8uLL);
  return this;
}
