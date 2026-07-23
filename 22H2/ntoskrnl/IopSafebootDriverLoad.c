/*
 * XREFs of IopSafebootDriverLoad @ 0x140891F74
 * Callers:
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C350 (IopVerifierExAllocatePool.c)
 *     RtlCopyUnicodeString @ 0x1402D3C70 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14032EAB0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1403480C0 (RtlAppendUnicodeStringToString.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x14073EF38 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1407690C4 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

char __fastcall IopSafebootDriverLoad(PCUNICODE_STRING Source, _BYTE *a2)
{
  char v2; // di
  char result; // al
  const WCHAR *v6; // rdx
  NTSTATUS v7; // ebx
  PVOID v8; // rcx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  P = 0LL;
  Destination = 0LL;
  DestinationString = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( InitSafeBootMode == 1 )
  {
    v6 = L"MINIMAL";
  }
  else
  {
    result = InitSafeBootMode - 2;
    if ( InitSafeBootMode != 2 )
    {
      if ( InitSafeBootMode == 3 )
        return result;
      return 0;
    }
    v6 = L"NETWORK";
  }
  RtlInitUnicodeString(&DestinationString, v6);
  Destination.MaximumLength = DestinationString.Length + Source->Length + 8;
  Destination.Buffer = (wchar_t *)IopVerifierExAllocatePool(PagedPool, Destination.MaximumLength);
  if ( !Destination.Buffer )
    return 0;
  RtlCopyUnicodeString(&Destination, &DestinationString);
  if ( RtlAppendUnicodeToString(&Destination, L"\\") < 0 )
  {
    ExFreePoolWithTag(Destination.Buffer, 0);
    return 0;
  }
  if ( RtlAppendUnicodeStringToString(&Destination, Source) >= 0
    && IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlSafeBoot, 0xF003Fu, 0) >= 0 )
  {
    v7 = IopOpenRegistryKey(&KeyHandle, Handle, &Destination, 0xF003Fu, 0);
    ObCloseHandle(Handle, 0);
    if ( v7 >= 0 )
    {
      if ( a2 && IopGetRegistryValue(KeyHandle, L"SafeBootDrivers", 0, &P) >= 0 )
      {
        v8 = P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        {
          if ( *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            *a2 = 1;
        }
        ExFreePoolWithTag(v8, 0);
      }
      ObCloseHandle(KeyHandle, 0);
      v2 = 1;
    }
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  return v2;
}
