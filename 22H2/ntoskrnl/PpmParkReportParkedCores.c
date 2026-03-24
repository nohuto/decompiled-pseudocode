/*
 * XREFs of PpmParkReportParkedCores @ 0x140303400
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140228DF0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402293C0 (KeEnumerateNextProcessor.c)
 *     KeAndAffinityEx @ 0x1402299F0 (KeAndAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x14022AFE0 (KeSubtractAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140344490 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x1403989CC (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeXorAffinityEx @ 0x140513638 (KeXorAffinityEx.c)
 */

char PpmParkReportParkedCores()
{
  int v1; // ebx
  int v2; // ebx
  int v3; // eax
  __int64 Prcb; // rax
  __int64 v5; // rax
  unsigned int v6; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v7; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D0h]
  __int16 v9; // [rsp+38h] [rbp-C8h]
  int v10; // [rsp+3Ah] [rbp-C6h]
  __int16 v11; // [rsp+3Eh] [rbp-C2h]
  _QWORD v12[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[22]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v14[88]; // [rsp+1A0h] [rbp+A0h] BYREF

  v10 = 0;
  v11 = 0;
  v6 = 0;
  memset(v13, 0, 0xA8uLL);
  memset(v14, 0, 0xA8uLL);
  memset(v12, 0, 0xA8uLL);
  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = KeAndAffinityEx(PpmPerfChangedCoreParkingMask, (unsigned __int16 *)&PpmPerfNewCoreParkingMask, v13);
  KeSubtractAffinityEx((unsigned __int16 *)&PpmPerfNewCoreParkingMask, PpmPerfChangedCoreParkingMask, v14);
  KeXorAffinityEx(&PpmParkSoftParkingMask, &PpmParkNewSoftParkingMask, v12);
  if ( !(v1 | (unsigned int)KeAndAffinityEx((unsigned __int16 *)v12, v14, v12)) )
    return 1;
  v2 = KeCountSetBitsAffinityEx(v12);
  v3 = KeCountSetBitsAffinityEx(v13);
  v9 = 0;
  v8 = v13[1];
  v7 = (unsigned __int16 *)v13;
  PpmCheckCount = v3 + v2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, &v7) )
  {
    Prcb = KeGetPrcb(v6);
    PpmPerfQueueAction(Prcb, 3LL);
  }
  v8 = v12[1];
  v7 = (unsigned __int16 *)v12;
  v9 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, &v7) )
  {
    v5 = KeGetPrcb(v6);
    PpmPerfQueueAction(v5, 4LL);
  }
  return 0;
}
