int BapdpRecordIumStatus()
{
  int result; // eax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  const EVENT_DESCRIPTOR *v4; // rdx
  REGHANDLE RegHandle; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+64h] [rbp-1Ch]
  __int64 v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]

  RegHandle = 0LL;
  result = BapdRegisterEtwProvider((const GUID *)&BOOTENV_ETW_PROVIDER, 1, &RegHandle);
  if ( result >= 0 )
  {
    v1 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    UserData.Reserved = 0;
    UserData.Ptr = v1 + 2896;
    UserData.Size = 4;
    v2 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    v9 = 0;
    v7 = v2 + 2888;
    v8 = 4;
    v3 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    v12 = 0;
    v10 = v3 + 2892;
    v11 = 4;
    v4 = &BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT;
    if ( *(int *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2896LL) < 0 )
      v4 = (const EVENT_DESCRIPTOR *)BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT_FAILURE;
    result = EtwWriteEx(RegHandle, v4, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  if ( RegHandle )
    return EtwUnregister(RegHandle);
  return result;
}
