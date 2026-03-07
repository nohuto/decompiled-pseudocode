void PopThermalHandlePreviousShutdown()
{
  HANDLE v0; // rbx
  char v1; // r15
  char v2; // r14
  int v3; // esi
  WCHAR *v4; // r12
  WCHAR *Pool2; // rdi
  HANDLE v6; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-D8h]
  ULONG Data[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  void *v11; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v12; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName_8; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v14; // [rsp+88h] [rbp-80h] BYREF
  __int64 v15; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v19[16]; // [rsp+E8h] [rbp-20h] BYREF
  HANDLE *p_KeyHandle; // [rsp+F8h] [rbp-10h]
  __int64 v21; // [rsp+100h] [rbp-8h]
  HANDLE *p_Handle; // [rsp+108h] [rbp+0h]
  __int64 v23; // [rsp+110h] [rbp+8h]
  __int64 *v24; // [rsp+118h] [rbp+10h]
  __int64 v25; // [rsp+120h] [rbp+18h]

  KeyHandle = 0LL;
  Data[0] = 0;
  Data[1] = 0;
  DestinationString = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  ValueName_8 = 0LL;
  v14 = 0LL;
  if ( (int)PopOpenThermalLoggingKey(0, &KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&v12, L"ShutdownSource");
    RtlInitUnicodeString(&ValueName_8, L"ShutdownTemperature");
    RtlInitUnicodeString(&v14, L"ShutdownTotalUpTime");
    v0 = KeyHandle;
    memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x18u, Data) >= 0
      && *(_QWORD *)&KeyValueInformation[4] == 0x400000004LL )
    {
      if ( ZwQueryValueKey(v0, &ValueName_8, KeyValuePartialInformation, KeyValueInformation, 0x18u, Data) >= 0
        && *(_QWORD *)&KeyValueInformation[4] == 0x400000004LL )
      {
        v1 = 1;
        Data[1] = *(_DWORD *)&KeyValueInformation[12];
      }
      else
      {
        v1 = 0;
      }
      if ( ZwQueryValueKey(v0, &v14, KeyValuePartialInformation, KeyValueInformation, 0x18u, Data) >= 0
        && *(_QWORD *)&KeyValueInformation[4] == 0x80000000BLL )
      {
        v2 = 1;
        v11 = *(void **)&KeyValueInformation[12];
      }
      else
      {
        v2 = 0;
      }
      v3 = 16;
      v4 = (WCHAR *)L"Unknown";
      Pool2 = 0LL;
      if ( ZwQueryValueKey(v0, &v12, KeyValuePartialInformation, 0LL, 0, Data) == -1073741789 )
      {
        Pool2 = (WCHAR *)ExAllocatePool2(256LL, Data[0] + 2LL, 1836214356LL);
        if ( Pool2 )
        {
          if ( ZwQueryValueKey(v0, &v12, KeyValuePartialInformation, Pool2, Data[0], Data) >= 0
            && *((_DWORD *)Pool2 + 1) == 1 )
          {
            v3 = *((_DWORD *)Pool2 + 2);
            v4 = Pool2 + 6;
          }
        }
      }
      if ( ZwDeleteValueKey(v0, &DestinationString) >= 0 )
      {
        if ( (int)PopOpenThermalLoggingKey(1, &Handle) >= 0 )
        {
          ResultLength = v3;
          v6 = Handle;
          ZwSetValueKey(Handle, &v12, 0, 1u, v4, ResultLength);
          if ( v1 )
            ZwSetValueKey(v6, &ValueName_8, 0, 4u, &Data[1], 4u);
          if ( v2 )
            ZwSetValueKey(v6, &v14, 0, 0xBu, &v11, 8u);
          ZwClose(v6);
        }
        ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_SHUTDOWN_OCCURRED, 0LL);
        if ( (unsigned int)dword_140C064A8 > 5 && tlgKeywordOn((__int64)&dword_140C064A8, 0x800000000000LL) )
        {
          tlgCreate1Sz_wchar_t((__int64)v19, (const size_t *)v4);
          p_KeyHandle = &KeyHandle;
          Handle = v11;
          LODWORD(KeyHandle) = Data[1];
          p_Handle = &Handle;
          v21 = 4LL;
          v24 = &v15;
          v23 = 8LL;
          v15 = 0x1000000LL;
          v25 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C064A8,
            (unsigned __int8 *)byte_14002D903,
            0LL,
            0LL,
            6u,
            &v18);
        }
        ZwDeleteValueKey(v0, &ValueName_8);
        ZwDeleteValueKey(v0, &v12);
        ZwDeleteValueKey(v0, &v14);
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x6D726854u);
    }
    if ( v0 )
      ZwClose(v0);
  }
}
