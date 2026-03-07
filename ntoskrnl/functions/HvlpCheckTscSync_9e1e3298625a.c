char HvlpCheckTscSync()
{
  PHYSICAL_ADDRESS *v0; // rbx
  PHYSICAL_ADDRESS *v1; // rdi
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v4; // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  __int128 v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  __int128 v9; // [rsp+60h] [rbp-A0h] BYREF
  PHYSICAL_ADDRESS v10; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  PHYSICAL_ADDRESS *v12; // [rsp+88h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-70h]
  char v14[16]; // [rsp+98h] [rbp-68h] BYREF
  char v15[2064]; // [rsp+A8h] [rbp-58h] BYREF

  v7 = 0LL;
  LODWORD(v8) = 0;
  v6 = 0LL;
  v4 = 0LL;
  LODWORD(v5) = 0;
  v3 = 0LL;
  v10.QuadPart = 0LL;
  v9 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v6, 1, (__int64)v14, 8LL);
  v1 = HvlpAcquireHypercallPage((__int64)&v3, 2, (__int64)v15, 1032LL);
  v0->LowPart = 14;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
  {
    v9 = *(_OWORD *)&v1->LowPart;
    v10 = v1[2];
  }
  HvlpReleaseHypercallPage((__int64)&v3);
  result = HvlpReleaseHypercallPage((__int64)&v6);
  if ( BYTE1(v9) )
  {
    if ( (_BYTE)v9 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v9 + 8;
      v13 = 8LL;
      v12 = &v10;
      return HvlpWriteEventLog(&HV_EVENTLOG_TSC_SYNC_FAILED, 2u, &UserData);
    }
  }
  return result;
}
