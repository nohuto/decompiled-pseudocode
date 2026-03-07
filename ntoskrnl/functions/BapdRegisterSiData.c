void __fastcall BapdRegisterSiData(ULONG *a1, unsigned int a2, int a3)
{
  unsigned __int64 v4; // r14
  const WCHAR *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+30h] BYREF

  if ( a1 )
  {
    KeyHandle = 0LL;
    v4 = a2;
    DestinationString = 0LL;
    if ( (int)BapdGetISRegistryKey(&KeyHandle) >= 0 )
    {
      if ( a1 != (ULONG *)-4LL && *a1 )
      {
        v6 = L"WBCLDrtm";
        if ( a3 != 2 )
          v6 = L"WBCL";
        RtlInitUnicodeString(&DestinationString, v6);
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, a1 + 1, *a1);
      }
      if ( a3 != 2 )
      {
        v7 = *a1 + 4;
        v8 = v7;
        if ( v4 >= v7 + 48 && *(ULONG *)((char *)a1 + v7) <= 0x30 && *(ULONG *)((char *)a1 + v7 + 4) <= 2 )
        {
          RtlInitUnicodeString(&DestinationString, L"EventCount");
          ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v8 + 8, 8u);
          RtlInitUnicodeString(&DestinationString, L"BootCount");
          ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v8 + 16, 8u);
          RtlInitUnicodeString(&DestinationString, L"CounterId");
          ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v8 + 24, 8u);
          if ( *(ULONG *)((char *)a1 + v8 + 4) == 2 && *(ULONG *)((char *)a1 + v8) == 48 && *((_BYTE *)a1 + v8 + 32) )
          {
            RtlInitUnicodeString(&DestinationString, L"TPMActivePCRBanks");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + v8 + 40, 4u);
            RtlInitUnicodeString(&DestinationString, L"TPMActiveLogFormat");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + v8 + 44, 4u);
            RtlInitUnicodeString(&DestinationString, L"TPMDigestAlgID");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + v8 + 36, 4u);
          }
          if ( !a3 )
          {
            RtlInitUnicodeString(&DestinationString, L"InitialEventCount");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v8 + 8, 8u);
            RtlInitUnicodeString(&DestinationString, L"InitialBootCount");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v8 + 16, 8u);
            RtlInitUnicodeString(&DestinationString, L"InitialCounterId");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v8 + 24, 8u);
          }
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
}
