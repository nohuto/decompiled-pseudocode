/*
 * XREFs of WheapLogPageOfflineAttemptEvent @ 0x140A05BE0
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x140A0555C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WheapTrackPendingPage @ 0x140A06FC8 (WheapTrackPendingPage.c)
 */

NTSTATUS __fastcall WheapLogPageOfflineAttemptEvent(__int64 a1, char a2, char a3, char a4, char a5)
{
  bool v9; // [rsp+38h] [rbp-21h] BYREF
  bool v10; // [rsp+39h] [rbp-20h] BYREF
  bool v11; // [rsp+3Ah] [rbp-1Fh] BYREF
  bool v12; // [rsp+3Bh] [rbp-1Eh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  bool *v14; // [rsp+58h] [rbp-1h]
  __int64 v15; // [rsp+60h] [rbp+7h]
  bool *v16; // [rsp+68h] [rbp+Fh]
  __int64 v17; // [rsp+70h] [rbp+17h]
  bool *v18; // [rsp+78h] [rbp+1Fh]
  __int64 v19; // [rsp+80h] [rbp+27h]
  bool *v20; // [rsp+88h] [rbp+2Fh]
  __int64 v21; // [rsp+90h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+5Fh] BYREF

  v22 = a1;
  if ( a2 == 1 )
    WheapTrackPendingPage();
  *(_QWORD *)&UserData.Size = 8LL;
  v15 = 1LL;
  v17 = 1LL;
  UserData.Ptr = (ULONGLONG)&v22;
  v9 = a2 != 0;
  v19 = 1LL;
  v14 = &v9;
  v10 = a5 != 0;
  v16 = &v10;
  v21 = 1LL;
  v11 = a3 != 0;
  v18 = &v11;
  v20 = &v12;
  v12 = a4 != 0;
  return EtwWrite((REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceRoutine, &EVENT_WHEA_MEMORY_OFFLINE, 0LL, 5u, &UserData);
}
