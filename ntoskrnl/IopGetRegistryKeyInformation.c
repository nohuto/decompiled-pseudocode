/*
 * XREFs of IopGetRegistryKeyInformation @ 0x140780288
 * Callers:
 *     pIoQueryDeviceDescription @ 0x14077FA74 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14077FF18 (pIoQueryBusDescription.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryKeyInformation(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  void *Pool2; // rbx
  NTSTATUS v6; // edi
  ULONG Length; // [rsp+50h] [rbp+18h] BYREF

  Length = 0;
  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( result == -1073741789 || result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, Length, 1699442505LL);
    if ( Pool2 )
    {
      v6 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, Length, &Length);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return v6;
      }
      else
      {
        *a2 = Pool2;
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
