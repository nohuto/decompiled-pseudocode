__int64 __fastcall WheapAttemptPhysicalPageOffline(
        LARGE_INTEGER a1,
        __int64 a2,
        _OWORD *a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v7; // r12
  char v8; // r13
  int v10; // r14d
  char v11; // di
  char v12; // bl
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // r15d
  __int64 v20; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  LARGE_INTEGER StartAddress; // [rsp+48h] [rbp-39h] BYREF
  _OWORD *v23; // [rsp+50h] [rbp-31h]
  __int128 Src; // [rsp+58h] [rbp-29h] BYREF
  __int128 v25; // [rsp+68h] [rbp-19h]
  _QWORD v26[2]; // [rsp+78h] [rbp-9h] BYREF

  v23 = a3;
  StartAddress = a1;
  v7 = a2 << 12;
  v8 = 0;
  memset(v26, 0, 9);
  Src = 0LL;
  v25 = 0LL;
  v20 = a2 << 12;
  v21 = 4096LL;
  if ( a5 )
  {
    v10 = 2;
  }
  else
  {
    v10 = 1;
    v20 = v7 | 1;
  }
  v11 = -1;
  v12 = -1;
  v13 = MmMarkPhysicalMemoryAsBad((int *)&v20, &v21);
  v17 = v13;
  if ( v13 >= 0 )
  {
    v12 = v13 == 0;
    if ( WheapClearPoisonSupported && a6 && (int)WheapClearPoison(&StartAddress) >= 0 )
      return v17;
    LOBYTE(v14) = a4 != 0;
    if ( (!v12 || WheapPolicyNotifyAllOfflines) && !a7 )
    {
      if ( WheapPolicyNotifyAllOfflines )
      {
        LOBYTE(v14) = v14 | 0x40;
        if ( v12 )
          LOBYTE(v14) = v14 | 0x80;
      }
      LOBYTE(v15) = a5;
      WheapCallInUsePageNotificationCallbacks(a2, v14, v15);
    }
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 41LL;
    *(_QWORD *)&v25 = 0x800000064C4E524BuLL;
    *((_QWORD *)&v25 + 1) = 0x900000002LL;
    LODWORD(v26[0]) = v10;
    BYTE4(v26[0]) = v12;
    *(_DWORD *)((char *)v26 + 5) = a2;
    WheaLogInternalEvent(&Src);
  }
  if ( WheapPolicyMemPersistOffline )
  {
    if ( WheapPolicyBadPageListLocation == 1 )
    {
      WheaPersistBadPageToBcd(a2);
      goto LABEL_21;
    }
    if ( WheapPolicyBadPageListLocation == 2 )
    {
      WheaPersistBadPageToRegistry(a2);
LABEL_21:
      if ( (int)WheaAddrTranslateAndAddToDefectListInPlugin((__int64)&v20, v23) >= 0 )
        v8 = 1;
      else
        WheapLogAddToDefectListFail();
    }
  }
  if ( v12 != -1 )
    v11 = v12 == 0;
  LOBYTE(v16) = v8;
  LOBYTE(v15) = a5;
  LOBYTE(v14) = v11;
  WheapLogPageOfflineAttemptEvent(v7, v14, v15, v16, a4);
  return v17;
}
