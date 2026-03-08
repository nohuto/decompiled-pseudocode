/*
 * XREFs of PipApplyFunctionToServiceInstances @ 0x140847BFC
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140B5780C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x140412570 (ZwEnumerateValueKey.c)
 *     PipOpenServiceEnumKeys @ 0x1406C1280 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     PnpUnicodeStringToWstr @ 0x1406D07D4 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D08F4 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     PnpRegSzToString @ 0x1407707FC (PnpRegSzToString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140B67204 (PipAddDevicesToBootDriverWorker.c)
 */

NTSTATUS __fastcall PipApplyFunctionToServiceInstances(
        __int64 a1,
        UNICODE_STRING *a2,
        __int64 a3,
        char a4,
        void *a5,
        __int64 a6,
        HANDLE Handle)
{
  NTSTATUS result; // eax
  int v8; // ebx
  int RegistryValue; // edi
  _DWORD *Pool2; // rsi
  ULONG i; // r14d
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  _WORD *v14; // rcx
  int v15; // ebx
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+40h] BYREF
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  LOBYTE(v20) = a4;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  P = 0LL;
  v17 = 0LL;
  a5 = 0LL;
  result = PipOpenServiceEnumKeys(a2, 0x20019u, 0LL, &KeyHandle, 0);
  if ( result < 0 )
    return result;
  v8 = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue == -1073741772 )
      RegistryValue = 0;
    goto LABEL_15;
  }
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
    v8 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  ExFreePoolWithTag(P, 0);
  if ( !v8 )
    goto LABEL_15;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 512LL, 538996816LL);
  if ( !Pool2 )
  {
    RegistryValue = -1073741670;
    goto LABEL_15;
  }
  for ( i = 0; ; ++i )
  {
    v12 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, Pool2, 0x200u, &ResultLength);
    if ( v12 < 0 )
      break;
    if ( Pool2[1] == 1 )
    {
      LOWORD(v17) = 0;
      v13 = Pool2[3];
      v14 = (_WORD *)((char *)Pool2 + (unsigned int)Pool2[2]);
      v20 = 0;
      PnpRegSzToString(v14, v13, &v20);
      LOWORD(v17) = v20;
      WORD1(v17) = *((_WORD *)Pool2 + 6);
      *((_QWORD *)&v17 + 1) = (char *)Pool2 + (unsigned int)Pool2[2];
      if ( (_WORD)v20 )
      {
        if ( (int)PnpUnicodeStringToWstr(&a5, 0LL, (unsigned __int16 *)&v17) >= 0 )
        {
          RegistryValue = CmOpenDeviceRegKey(
                            *(__int64 *)&PiPnpRtlCtx,
                            (__int64)a5,
                            16,
                            0,
                            983103,
                            0,
                            (__int64)&Handle,
                            0LL);
          PnpUnicodeStringToWstrFree(a5, (__int64)&v17);
          if ( RegistryValue >= 0 )
          {
            v15 = PipAddDevicesToBootDriverWorker(Handle, &v17, a6);
            ZwClose(Handle);
            if ( !v15 )
              goto LABEL_14;
          }
        }
      }
    }
LABEL_11:
    ;
  }
  if ( v12 != -2147483622 )
    goto LABEL_11;
  RegistryValue = 0;
LABEL_14:
  ExFreePoolWithTag(Pool2, 0);
LABEL_15:
  ZwClose(KeyHandle);
  return RegistryValue;
}
