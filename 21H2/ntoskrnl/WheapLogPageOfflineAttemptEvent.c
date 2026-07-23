/*
 * XREFs of WheapLogPageOfflineAttemptEvent @ 0x1405BD858
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x14095D87C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapLogPageOfflineAttemptEvent(__int64 a1, char a2, char a3, char a4, char a5)
{
  bool v6; // [rsp+40h] [rbp-21h] BYREF
  bool v7; // [rsp+41h] [rbp-20h] BYREF
  bool v8; // [rsp+42h] [rbp-1Fh] BYREF
  bool v9; // [rsp+43h] [rbp-1Eh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-11h] BYREF
  bool *v11; // [rsp+60h] [rbp-1h]
  __int64 v12; // [rsp+68h] [rbp+7h]
  bool *v13; // [rsp+70h] [rbp+Fh]
  __int64 v14; // [rsp+78h] [rbp+17h]
  bool *v15; // [rsp+80h] [rbp+1Fh]
  __int64 v16; // [rsp+88h] [rbp+27h]
  bool *v17; // [rsp+90h] [rbp+2Fh]
  __int64 v18; // [rsp+98h] [rbp+37h]
  __int64 v19; // [rsp+C0h] [rbp+5Fh] BYREF

  v19 = a1;
  UserData.Ptr = (ULONGLONG)&v19;
  *(_QWORD *)&UserData.Size = 8LL;
  v12 = 1LL;
  v6 = a2 != 0;
  v11 = &v6;
  v13 = &v7;
  v7 = a5 != 0;
  v14 = 1LL;
  v16 = 1LL;
  v18 = 1LL;
  v8 = a3 != 0;
  v15 = &v8;
  v17 = &v9;
  v9 = a4 != 0;
  return EtwWriteEx(
           (REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceObject,
           &EVENT_WHEA_MEMORY_OFFLINE,
           0LL,
           0,
           0LL,
           0LL,
           5u,
           &UserData);
}
