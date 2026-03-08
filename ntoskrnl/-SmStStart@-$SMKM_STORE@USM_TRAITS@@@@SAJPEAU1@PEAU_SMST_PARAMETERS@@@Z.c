/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140359180
 * Callers:
 *     SmProcessCreateRequest @ 0x1407DD648 (SmProcessCreateRequest.c)
 * Callees:
 *     SmFpCleanup @ 0x1403590B8 (SmFpCleanup.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403595E8 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmKmStoreHelperStart @ 0x1403596E4 (SmKmStoreHelperStart.c)
 *     SmAcquireReleaseCharges @ 0x140359F14 (SmAcquireReleaseCharges.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x14035A528 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmFpPreAllocate @ 0x1403A1704 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SmKmFileInfoDuplicate @ 0x1409D5C34 (SmKmFileInfoDuplicate.c)
 *     SmKmFileInfoInit @ 0x1409D5E94 (SmKmFileInfoInit.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, int **a2)
{
  int *v2; // r15
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  volatile LONG *v8; // r13
  int v9; // eax
  char v10; // al
  char v11; // cl
  __int64 v12; // rdi
  __int64 result; // rax
  void *Pool2; // rax
  int v15; // eax
  int v16; // edi
  __int64 v17; // rsi
  void *v18; // rax
  __int128 v19; // xmm0
  int v20; // eax
  int v21; // [rsp+20h] [rbp-60h]
  _OWORD v22[4]; // [rsp+30h] [rbp-50h] BYREF

  v2 = *a2;
  v5 = **a2;
  if ( (unsigned __int8)v5 >= 2u )
    return 3221225485LL;
  if ( v2[5] )
    return 3221225485LL;
  if ( (unsigned int)(v2[3] - 1) > 0x3FFFF )
    return 3221225485LL;
  v6 = v2[2];
  if ( !v6 || ((v6 - 1) & v6) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)v5 == 1 && (v5 & 0x100) != 0 )
    return 3221225659LL;
  if ( (v5 & 0x40000) != 0 )
  {
    v7 = v5 & 0xA0000;
  }
  else
  {
    v7 = v5 & 0xA0000;
    if ( (v5 & 0xA0000) != 0 )
      return 3221225485LL;
  }
  if ( v7 == 655360 || (v5 & 0x100000) != 0 && (v5 & 0x40000) == 0 )
    return 3221225485LL;
  v8 = (volatile LONG *)(a1 + 6608);
  *(_QWORD *)(a1 + 6728) = a2[4];
  v9 = *((_DWORD *)a2 + 14);
  if ( !v9 )
    v9 = 7;
  *(_DWORD *)(a1 + 6736) = v9;
  *(_BYTE *)(a1 + 6020) = *(_BYTE *)v2;
  v10 = *(_BYTE *)(a1 + 6021) ^ (*(_BYTE *)(a1 + 6021) ^ (4 * ((unsigned int)*v2 >> 18))) & 4;
  *(_BYTE *)(a1 + 6021) = v10;
  v11 = v10 ^ (v10 ^ (8 * ((unsigned int)*v2 >> 17))) & 8;
  *(_BYTE *)(a1 + 6021) = v11;
  *(_BYTE *)(a1 + 6021) = v11 ^ (v11 ^ (32 * ((unsigned int)*v2 >> 19))) & 0x20;
  *(_DWORD *)(a1 + 6208) = v2[2];
  SmFpCleanup(a1 + 6608);
  v12 = *(_QWORD *)(a1 + 6728);
  memset((void *)(a1 + 6608), 0, 0x78uLL);
  *(_DWORD *)(a1 + 6620) = 0;
  *(_QWORD *)(a1 + 6632) = a1 + 6624;
  *(_QWORD *)(a1 + 6624) = a1 + 6624;
  *(_WORD *)(a1 + 6616) = 1;
  *(_BYTE *)(a1 + 6618) = 6;
  *(_QWORD *)(a1 + 6640) = v12;
  if ( *(_BYTE *)v2 )
  {
    SmKmFileInfoInit(a1 + 6216);
    *(_DWORD *)(a1 + 6212) = v2[3];
    v16 = v2[6];
    result = SmKmFileInfoDuplicate(a1 + 6216, *((_QWORD *)v2 + 6));
LABEL_41:
    if ( (int)result < 0 )
      return result;
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    memset((void *)(a1 + 6232), 0, 0x80uLL);
    *(_BYTE *)(a1 + 6242) = 6;
    *(_WORD *)(a1 + 6240) = 0;
    *(_DWORD *)(a1 + 6244) = 0;
    *(_QWORD *)(a1 + 6256) = a1 + 6248;
    *(_QWORD *)(a1 + 6248) = a1 + 6248;
    *(_WORD *)(a1 + 6264) = 0;
    *(_DWORD *)(a1 + 6268) = 0;
    *(_QWORD *)(a1 + 6280) = a1 + 6272;
    *(_QWORD *)(a1 + 6272) = a1 + 6272;
    *(_BYTE *)(a1 + 6266) = 6;
    memset((void *)(a1 + 6360), 0, 0x80uLL);
    *(_BYTE *)(a1 + 6370) = 6;
    *(_WORD *)(a1 + 6368) = 0;
    *(_DWORD *)(a1 + 6372) = 0;
    *(_QWORD *)(a1 + 6384) = a1 + 6376;
    *(_QWORD *)(a1 + 6376) = a1 + 6376;
    *(_WORD *)(a1 + 6392) = 0;
    *(_DWORD *)(a1 + 6396) = 0;
    *(_BYTE *)(a1 + 6394) = 6;
    *(_QWORD *)(a1 + 6408) = a1 + 6400;
    *(_QWORD *)(a1 + 6400) = a1 + 6400;
    memset((void *)(a1 + 6488), 0, 0x50uLL);
    *(_BYTE *)(a1 + 6498) = 6;
    *(_QWORD *)(a1 + 6512) = a1 + 6504;
    *(_QWORD *)(a1 + 6504) = a1 + 6504;
    *(_WORD *)(a1 + 6496) = 0;
    *(_DWORD *)(a1 + 6500) = 0;
    *(_QWORD *)(a1 + 6536) = a1 + 6528;
    *(_QWORD *)(a1 + 6528) = a1 + 6528;
    *(_WORD *)(a1 + 6520) = 0;
    *(_DWORD *)(a1 + 6524) = 0;
    *(_BYTE *)(a1 + 6522) = 6;
    *(_QWORD *)(a1 + 6552) = a1 + 6544;
    *(_QWORD *)(a1 + 6544) = 0LL;
    *(_QWORD *)(a1 + 6560) = 0LL;
    *(_QWORD *)(a1 + 6584) = a2[5];
    result = SmKmStoreHelperStart(a1 + 6232, a2[6]);
    if ( (int)result < 0 )
      return result;
    result = SmKmStoreHelperStart(a1 + 6360, a2[6]);
    if ( (int)result < 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
      *(_QWORD *)(a1 + 6344) = *(_QWORD *)(a1 + 6728) + 2696LL;
    *(_QWORD *)(a1 + 6480) = *(_QWORD *)(a1 + 6728) + 2720LL;
    Pool2 = (void *)ExAllocatePool2(64LL, 80LL, 1817341299LL);
    *(_QWORD *)(a1 + 6224) = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    memset(Pool2, 0, 0x50uLL);
    if ( !(unsigned int)SmAcquireReleaseCharges(*(_QWORD *)(a1 + 6728), *(unsigned int *)(a1 + 6208), 1LL, 0LL) )
      return 3221225626LL;
    *(_BYTE *)(a1 + 6021) |= 0x10u;
    v8 = (volatile LONG *)(a1 + 6608);
  }
  v15 = v2[3];
  v16 = 0;
  *(_DWORD *)(a1 + 6212) = v15;
  v17 = (unsigned int)(8 * v15);
  v18 = (void *)ExAllocatePool2(64LL, v17, 1733455219LL);
  if ( !v18 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 6216) = v18;
  memset(v18, 0, (unsigned int)v17);
  if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
  {
    v21 = ((*(_DWORD *)(a1 + 6208) >> 8) ^ 0x100005) & 0xFFFF0 ^ 0x100005;
    result = SmFpPreAllocate(v8);
    goto LABEL_41;
  }
LABEL_24:
  memset(v22, 0, sizeof(v22));
  v19 = *(_OWORD *)v2;
  v20 = *(_DWORD *)(a1 + 6212);
  LODWORD(v22[1]) = v16;
  v22[0] = v19;
  HIDWORD(v22[0]) = v20;
  *(_QWORD *)&v22[3] = a2[3];
  *((_QWORD *)&v22[1] + 1) = a1;
  if ( *(_BYTE *)v2 )
    *((_QWORD *)&v22[3] + 1) = *((_QWORD *)v2 + 8);
  *(_QWORD *)&v22[2] = a2[1];
  DWORD2(v22[2]) = *((_DWORD *)a2 + 4);
  LODWORD(v22[0]) = v22[0] & 0xFFFFF7FF | (DWORD2(v22[2]) == 0 ? 0x800 : 0);
  result = ST_STORE<SM_TRAITS>::StStart(a1, v22);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 4) == 0
      || (result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                     a1,
                     a2[6],
                     SMKM_STORE<SM_TRAITS>::SmStReadThread,
                     a1 + 6488,
                     v21),
          (int)result >= 0) )
    {
      result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                 a1,
                 a2[6],
                 SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                 a1 + 6200,
                 v21);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
