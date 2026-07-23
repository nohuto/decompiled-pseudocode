/*
 * XREFs of PopSleepstudyCaptureResiliencyStatistics @ 0x1408FA1D4
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopCalculateTotalHwDripsResidency @ 0x140570764 (PopCalculateTotalHwDripsResidency.c)
 *     PopDiagTraceCsResiliencyEnter @ 0x1405713DC (PopDiagTraceCsResiliencyEnter.c)
 *     PopDiagTraceCsResiliencyExit @ 0x140571534 (PopDiagTraceCsResiliencyExit.c)
 *     PopDiagTraceCsResiliencyStats @ 0x1408E9B48 (PopDiagTraceCsResiliencyStats.c)
 *     PopGetEnergyCounter @ 0x1408EDDD0 (PopGetEnergyCounter.c)
 */

char __fastcall PopSleepstudyCaptureResiliencyStatistics(_QWORD *a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h]
  _BYTE v16[240]; // [rsp+80h] [rbp-80h] BYREF

  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  v13 = 0LL;
  PopGetEnergyCounter(&v13);
  if ( a4 )
    return PopDiagTraceCsResiliencyEnter(a2, a3, &v13);
  v9 = (a1[11] - a1[2]) / 0xAuLL;
  v10 = PopCalculateTotalHwDripsResidency(a1[7], a1[8], v9);
  v11 = 0LL;
  if ( v10 != -1 )
    v11 = v10;
  qword_140C4FFC8 += v11;
  v12 = a1[10] - a1[8];
  qword_140C4FFD0 += v12;
  if ( qword_140C54468 )
    qword_140C54468(v14);
  memset(v16, 0, 0xE8uLL);
  PopDiagTraceCsResiliencyExit((__int64)v16, a2, a3, (__int64)&v13, v9, v11, v12, (__int64)v14);
  return PopDiagTraceCsResiliencyStats((__int64)v16);
}
