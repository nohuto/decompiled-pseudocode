/*
 * XREFs of IopAllowRemoteDASD @ 0x1405567C4
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1407803E0 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool IopAllowRemoteDASD()
{
  bool v0; // bl
  char v2; // [rsp+20h] [rbp-30h]
  UNICODE_STRING v3; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+10h] BYREF
  PVOID P; // [rsp+68h] [rbp+18h]

  v0 = 0;
  Handle = 0LL;
  P = 0LL;
  v3 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AllowRemoteDASD");
  RtlInitUnicodeString(&v3, L"\\REGISTRY\\MACHINE\\SOFTWARE\\Policies\\Microsoft\\Windows\\RemovableStorageDevices");
  v2 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, &v3, 131097LL, v2) >= 0 )
  {
    if ( (int)IopGetRegistryValue(Handle) >= 0 )
    {
      if ( *((_DWORD *)P + 3) )
        v0 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  return v0;
}
