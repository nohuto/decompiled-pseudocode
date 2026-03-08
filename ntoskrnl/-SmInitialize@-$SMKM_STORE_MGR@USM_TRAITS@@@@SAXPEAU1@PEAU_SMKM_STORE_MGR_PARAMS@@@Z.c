/*
 * XREFs of ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A340C
 * Callers:
 *     SmFirstTimeInit @ 0x1407DDCE0 (SmFirstTimeInit.c)
 *     SmPartitionInitialize @ 0x14084CDAC (SmPartitionInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x140203D9C (KiInitializeTimer2.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SmKmInitialize @ 0x14084CF40 (SmKmInitialize.c)
 */

__int64 (__fastcall *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(__int64 a1, _OWORD *a2))()
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 (__fastcall *result)(); // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset((void *)a1, 0, 0x760uLL);
  *(_OWORD *)(a1 + 1856) = *a2;
  SmKmInitialize(a1);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_OWORD *)(a1 + 448) = 0LL;
  memset((void *)(a1 + 1424), 0, 0x78uLL);
  *(_WORD *)(a1 + 1432) = 1;
  *(_BYTE *)(a1 + 1434) = 6;
  *(_DWORD *)(a1 + 1436) = 0;
  *(_QWORD *)(a1 + 1448) = a1 + 1440;
  *(_QWORD *)(a1 + 1440) = a1 + 1440;
  *(_QWORD *)(a1 + 1456) = a1;
  memset((void *)(a1 + 1544), 0, 0x78uLL);
  *(_WORD *)(a1 + 1552) = 1;
  *(_BYTE *)(a1 + 1554) = 6;
  *(_DWORD *)(a1 + 1556) = 0;
  *(_QWORD *)(a1 + 1568) = a1 + 1560;
  *(_QWORD *)(a1 + 1560) = a1 + 1560;
  *(_QWORD *)(a1 + 1576) = a1;
  memset((void *)(a1 + 464), 0, 0x308uLL);
  v4 = (_QWORD *)(a1 + 464);
  v5 = 32LL;
  do
  {
    v4[1] = v4;
    *v4 = 0LL;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 1232) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1248));
  memset((void *)(a1 + 1264), 0, 0x88uLL);
  *(_QWORD *)(a1 + 1280) = a1 + 1272;
  *(_QWORD *)(a1 + 1272) = 0LL;
  *(_QWORD *)(a1 + 1344) = a1 + 1336;
  *(_QWORD *)(a1 + 1336) = a1 + 1336;
  *(_QWORD *)(a1 + 1304) = a1 + 1296;
  *(_QWORD *)(a1 + 1296) = a1 + 1296;
  *(_WORD *)(a1 + 1288) = 1;
  *(_BYTE *)(a1 + 1290) = 6;
  *(_DWORD *)(a1 + 1292) = 0;
  *(_QWORD *)(a1 + 1328) = a1 + 1320;
  *(_QWORD *)(a1 + 1320) = a1 + 1320;
  *(_WORD *)(a1 + 1312) = 0;
  *(_BYTE *)(a1 + 1314) = 6;
  *(_DWORD *)(a1 + 1316) = 0;
  ExInitializePushLock((PEX_RUNDOWN_REF)(a1 + 1384));
  *(_QWORD *)(a1 + 1368) = a1 + 1360;
  *(_QWORD *)(a1 + 1360) = 0LL;
  *(_DWORD *)(a1 + 1392) = 7;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1408));
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *(_DWORD *)(a1 + 1880) = (signed int)(10000 * PerformanceFrequency.LowPart) / 1000000;
  *(_WORD *)(a1 + 1682) = 0;
  KiInitializeTimer2(a1 + 1680, (__int64)SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogTimerCallback, a1, 8);
  result = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_QWORD *)(a1 + 1832) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  return result;
}
