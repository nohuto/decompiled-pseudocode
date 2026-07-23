/*
 * XREFs of SmGlobalsInitialize @ 0x140A4C528
 * Callers:
 *     SmInitSystem @ 0x140A4C43C (SmInitSystem.c)
 * Callees:
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B48C0 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     memset @ 0x140414300 (memset.c)
 *     SmRegistrationCtxInitialize @ 0x140622B80 (SmRegistrationCtxInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140A4C660 (SmcCacheManagerInitialize.c)
 */

__int64 __fastcall SmGlobalsInitialize(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  memset((void *)a1, 0, 0xB60uLL);
  *(_QWORD *)&v3 = 59LL;
  *((_QWORD *)&v3 + 1) = HalSystemVectorDispatchEntry;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v3);
  *(_QWORD *)(a1 + 1952) = 0LL;
  SmKmGlobals = PsInitialSystemProcess;
  *(_QWORD *)(a1 + 2016) = 0LL;
  *(_QWORD *)(a1 + 2024) = 0LL;
  *(_QWORD *)(a1 + 1992) = 0LL;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_DWORD *)(a1 + 2032) = -1;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_BYTE *)(a1 + 1960) = 5;
  SmcCacheManagerInitialize(a1 + 2048);
  SmRegistrationCtxInitialize((_QWORD *)(a1 + 2608));
  *(_QWORD *)(a1 + 2624) = 0LL;
  *(_QWORD *)(a1 + 2632) = 0LL;
  *(_QWORD *)(a1 + 2616) = 0LL;
  memset((void *)(a1 + 2640), 0, 0x70uLL);
  *(_WORD *)(a1 + 2648) = 1;
  *(_BYTE *)(a1 + 2650) = 6;
  *(_DWORD *)(a1 + 2652) = 0;
  *(_QWORD *)(a1 + 2664) = a1 + 2656;
  *(_QWORD *)(a1 + 2656) = a1 + 2656;
  memset((void *)(a1 + 2752), 0, 0x70uLL);
  result = a1 + 2768;
  *(_DWORD *)(a1 + 2764) = 0;
  *(_WORD *)(a1 + 2760) = 1;
  *(_BYTE *)(a1 + 2762) = 6;
  *(_QWORD *)(a1 + 2776) = a1 + 2768;
  *(_QWORD *)(a1 + 2768) = a1 + 2768;
  *(_DWORD *)(a1 + 2896) = 3;
  return result;
}
