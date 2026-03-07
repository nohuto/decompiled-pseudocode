__int64 IrqPolicyConfigure()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+40h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+18h] BYREF

  Handle = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  if ( (int)OSOpenUnicodeHandle(&DestinationString, 0LL, &Handle) >= 0 )
  {
    if ( OSGetRegistryValue(Handle, L"IrqDefaultDevicePolicy", &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 && (unsigned __int16)(*((_WORD *)P + 4) - 1) <= 3u )
      {
        IrqMachinePolicy = *((_WORD *)P + 4);
        IrqPolicyRegistrySpecified = 1;
      }
      ExFreePoolWithTag(P, 0);
    }
    if ( OSGetRegistryValue(Handle, L"PCIDeviceExclusionMask", &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
        PciExclusionMask = *((_WORD *)P + 4);
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  return 0LL;
}
