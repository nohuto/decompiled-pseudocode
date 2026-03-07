void __fastcall UpdateUcmIsPresentBit(_DWORD *a1)
{
  int PersistedKeyPath; // eax
  __int64 v3; // rcx
  wchar_t *v4; // rbx
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+30h] [rbp-28h]
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  P = 0LL;
  PersistedKeyPath = GetPersistedKeyPath(&P);
  v4 = (wchar_t *)P;
  if ( PersistedKeyPath < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v5 = 33;
    v6 = 2;
    goto LABEL_4;
  }
  v7 = MyRegOpenKeyForRead(v3, P, &Handle);
  if ( v7 >= 0 )
  {
    PersistedKeyPath = MyRegQueryUlong(Handle);
    if ( PersistedKeyPath >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 0;
        WPP_RECORDER_SF_Sd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          v9,
          0x24u,
          (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
          v4,
          v12);
      }
      *a1 &= ~0x80000000;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 35;
      v6 = 3;
LABEL_4:
      v10 = PersistedKeyPath;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        1u,
        v5,
        (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
        v10);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = v7;
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      v8,
      0x22u,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v4,
      v11);
  }
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    ZwClose(Handle);
}
