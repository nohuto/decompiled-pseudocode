__int64 __fastcall UsbhDeleteUxdSubKeys(__int64 a1, WCHAR *a2)
{
  _DWORD *v3; // r15
  __int64 Pool2; // rdi
  ULONG v6; // ebx
  ULONG i; // edx
  ULONG v8; // r14d
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v13[20]; // [rsp+40h] [rbp-88h] BYREF

  ResultLength[0] = 0;
  v3 = FdoExt(a1);
  memset(v13, 0, 0x44uLL);
  Pool2 = ExAllocatePool2(64LL, 42LL, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  v6 = 0;
  for ( i = 0; ZwEnumerateValueKey(a2, i, KeyValueBasicInformation, (PVOID)Pool2, 0x2Au, ResultLength) >= 0; i = v6 )
  {
    v8 = v6++;
    if ( *(_DWORD *)(Pool2 + 4) == 3
      && (int)UsbhGetUxdLoadKeySettings(v11, a2, Pool2 + 12, v13) >= 0
      && (v13[9] || v3[1294]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          v10,
          34,
          (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
          Pool2 + 12);
      if ( RtlDeleteRegistryValue(0x40000000u, a2, (PCWSTR)(Pool2 + 12)) >= 0 )
        v6 = v8;
    }
  }
  ExFreePoolWithTag((PVOID)Pool2, 0);
  return 0LL;
}
