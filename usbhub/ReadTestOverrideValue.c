__int64 __fastcall ReadTestOverrideValue(int *a1)
{
  int PersistedKeyPath; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  P = 0LL;
  PersistedKeyPath = GetPersistedKeyPath(&P);
  v4 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v5 = 13;
    goto LABEL_4;
  }
  PersistedKeyPath = MyRegOpenKeyForRead(v3, P, &Handle);
  v4 = PersistedKeyPath;
  if ( PersistedKeyPath >= 0 )
  {
    PersistedKeyPath = MyRegQueryUlong(Handle);
    v4 = PersistedKeyPath;
    if ( PersistedKeyPath >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = *a1;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          1u,
          0x10u,
          (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
          v9);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 15;
      v6 = 4;
      goto LABEL_5;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 14;
LABEL_4:
    v6 = 2;
LABEL_5:
    v8 = PersistedKeyPath;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1u,
      v5,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v8);
  }
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return v4;
}
