/*
 * XREFs of ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18003F710
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003F41C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x180009A48 (CemRcTableInitialize.c)
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x18003F964 (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

void __fastcall HampManagerInitialize(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  char QuiesceSerializationConfig; // al

  memset_0((char *)a1 + 16, 0, 0x2E8uLL);
  *(__m128i *)&HampNextHandleValues = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  xmmword_1800B40D0 = *(_OWORD *)&HampNextHandleValues;
  unk_1800B40E0 = *(_OWORD *)&HampNextHandleValues;
  xmmword_1800B40F0 = *(_OWORD *)&HampNextHandleValues;
  *(_OWORD *)a1 = 0LL;
  RtlInitializeSRWLock(a1);
  *((_DWORD *)a1 + 2) = 0;
  v2 = (_QWORD *)((char *)a1 + 16);
  v3 = 7LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  CemRcTableInitialize((__int64)HampActDestroy, (_QWORD *)a1 + 27);
  memset_0((char *)a1 + 128, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampSessionDestroy, (_QWORD *)a1 + 21);
  *((_QWORD *)a1 + 35) = (char *)a1 + 272;
  *((_QWORD *)a1 + 34) = (char *)a1 + 272;
  memset_0((char *)a1 + 344, 0, 0x58uLL);
  *((_QWORD *)a1 + 42) = a1;
  *((_DWORD *)a1 + 103) = 300000;
  *((_DWORD *)a1 + 104) = 30000;
  *((_QWORD *)a1 + 46) = 0LL;
  *((_QWORD *)a1 + 47) = 0LL;
  *((_QWORD *)a1 + 48) = 0LL;
  *((_QWORD *)a1 + 49) = 0LL;
  *((_QWORD *)a1 + 47) = 0LL;
  *((_QWORD *)a1 + 48) = 0LL;
  *((_QWORD *)a1 + 45) = a1;
  *((_OWORD *)a1 + 19) = 0LL;
  *((_OWORD *)a1 + 20) = 0LL;
  memset_0((char *)a1 + 440, 0, 0x68uLL);
  *((_QWORD *)a1 + 54) = a1;
  CemRcTableInitialize((__int64)HampWakeContextQueueDestroy, (_QWORD *)a1 + 58);
  *((_QWORD *)a1 + 64) = 0LL;
  *((_QWORD *)a1 + 65) = 0LL;
  *((_OWORD *)a1 + 28) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 448);
  *((_DWORD *)a1 + 114) = 0;
  *((_DWORD *)a1 + 132) = 10000;
  *((_DWORD *)a1 + 133) = 10000;
  memset_0((char *)a1 + 560, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampHostIdStoreSessionDestroy, (_QWORD *)a1 + 75);
  *((_OWORD *)a1 + 34) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 544);
  *((_DWORD *)a1 + 138) = 0;
  *((_QWORD *)a1 + 89) = (char *)a1 + 704;
  *((_QWORD *)a1 + 88) = (char *)a1 + 704;
  *(_OWORD *)((char *)a1 + 648) = xmmword_180097940;
  *(_OWORD *)((char *)a1 + 664) = xmmword_180097950;
  *(_OWORD *)((char *)a1 + 680) = xmmword_180097960;
  QuiesceSerializationConfig = HampSystemGetQuiesceSerializationConfig();
  *((_DWORD *)a1 + 187) &= 0xFFFFFFFC;
  *((_DWORD *)a1 + 187) |= QuiesceSerializationConfig & 3;
}
