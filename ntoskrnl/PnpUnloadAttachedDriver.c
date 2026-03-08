/*
 * XREFs of PnpUnloadAttachedDriver @ 0x140866C04
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpUnloadAttachedDriver(_QWORD *a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  size_t v4; // rsi
  wchar_t *Pool2; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[5] == 0LL;
  v2 = a1[6];
  DestinationString = 0LL;
  if ( v1 || a1[1] )
    return 0LL;
  v4 = CmRegistryMachineSystemCurrentControlSetServices.Length + 6 + (unsigned int)*(unsigned __int16 *)(v2 + 24);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v4, 1701081168LL);
  if ( Pool2 )
  {
    RtlStringCbPrintfW(
      Pool2,
      v4,
      L"%s\\%s",
      CmRegistryMachineSystemCurrentControlSetServices.Buffer,
      *(_QWORD *)(v2 + 32));
    RtlInitUnicodeString(&DestinationString, Pool2);
    IopUnloadDriver(&DestinationString, 1);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return 0LL;
  }
  return 3221225626LL;
}
