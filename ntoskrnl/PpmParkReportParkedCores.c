/*
 * XREFs of PpmParkReportParkedCores @ 0x1402E3AE0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PpmPerfQueueAction @ 0x1402363D4 (PpmPerfQueueAction.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 *     PpmEventSoftParkRankListChanged @ 0x14038EC74 (PpmEventSoftParkRankListChanged.c)
 *     KeUpdateSoftParkRankList @ 0x14038ECCC (KeUpdateSoftParkRankList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiXorAffinityEx @ 0x14045796C (KiXorAffinityEx.c)
 */

char PpmParkReportParkedCores()
{
  int v1; // eax
  int v2; // ebx
  int v3; // ebx
  int v4; // eax
  __int64 Prcb; // rax
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v9; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-D0h]
  _WORD v11[4]; // [rsp+40h] [rbp-C8h]
  _QWORD v12[34]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v13[34]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v14[68]; // [rsp+268h] [rbp+160h] BYREF

  *(_DWORD *)&v11[1] = 0;
  v11[3] = 0;
  LODWORD(v8) = 0;
  memset(&v13[1], 0, 0x100uLL);
  memset(&v14[2], 0, 0x100uLL);
  memset(&v12[1], 0, 0x100uLL);
  if ( !PpmIsParkingEnabled )
    return 1;
  LODWORD(v13[0]) = 2097153;
  memset((char *)v13 + 4, 0, 0x104uLL);
  v1 = KiAndAffinityEx(&PpmPerfChangedCoreParkingMask, (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v13, 0x20u);
  v14[0] = 2097153;
  v2 = v1;
  memset(&v14[1], 0, 0x104uLL);
  KiSubtractAffinityEx(
    (unsigned __int16 *)&PpmPerfNewCoreParkingMask,
    (char *)&PpmPerfChangedCoreParkingMask,
    v14,
    0x20u);
  LODWORD(v12[0]) = 2097153;
  memset((char *)v12 + 4, 0, 0x104uLL);
  KiXorAffinityEx(PpmParkSoftParkingMask, &PpmParkNewSoftParkingMask, v12, 32LL);
  if ( !(v2 | (unsigned int)KiAndAffinityEx((unsigned __int16 *)v12, (unsigned __int16 *)v14, v12, WORD1(v12[0]))) )
    return 1;
  v3 = KeCountSetBitsAffinityEx((unsigned __int16 *)v12);
  v4 = KeCountSetBitsAffinityEx((unsigned __int16 *)v13);
  v11[0] = 0;
  v10 = v13[1];
  v9 = (unsigned __int16 *)v13;
  PpmCheckCount = v4 + v3;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v9) )
  {
    Prcb = KeGetPrcb(v8);
    PpmPerfQueueAction(Prcb, 3);
  }
  v10 = v12[1];
  v9 = (unsigned __int16 *)v12;
  v11[0] = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v9) )
  {
    v6 = KeGetPrcb(v8);
    PpmPerfQueueAction(v6, 4);
  }
  if ( PpmParkSoftParkRankListChanged )
  {
    KeUpdateSoftParkRankList();
    PpmEventSoftParkRankListChanged();
    v7 = PpmParkOldSoftParkRankList;
    PpmParkOldSoftParkRankList = PpmParkNewSoftParkRankList;
    PpmParkNewSoftParkRankList = v7;
  }
  return 0;
}
