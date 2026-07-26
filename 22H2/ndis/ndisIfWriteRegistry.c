/*
 * XREFs of ndisIfWriteRegistry @ 0x1C0127588
 * Callers:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106F5C (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C01277D0 (NdisIfFreeNetLuidIndex.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisIfWriteRegistry(__int64 a1)
{
  ULONG v2; // ecx
  unsigned int RegistryKey; // ebx
  wchar_t *PoolWithTag; // rax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-29h] BYREF
  int ValueData; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  char v10; // [rsp+68h] [rbp+Fh] BYREF

  *(_QWORD *)&String.Length = 2621440LL;
  *(_QWORD *)&Destination.Length = 0LL;
  v2 = *(unsigned __int16 *)(a1 + 16);
  Destination.Buffer = 0LL;
  ValueData = 0;
  String.Buffer = (wchar_t *)&v10;
  DestinationString = 0LL;
  if ( RtlIntegerToUnicodeString(v2, 0xAu, &String) )
  {
    RegistryKey = -1073741670;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes\\");
    Destination.Length = 0;
    Destination.MaximumLength = String.Length + DestinationString.Length + 4;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &String);
    if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer)
      || (RegistryKey = RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer)) == 0 )
    {
      ValueData = *(unsigned __int16 *)(a1 + 16);
      RegistryKey = RtlWriteRegistryValue(1u, (PCWSTR)Destination.Buffer, L"IfType", 4u, &ValueData, 4u);
      if ( !RegistryKey )
        RegistryKey = RtlWriteRegistryValue(
                        1u,
                        (PCWSTR)Destination.Buffer,
                        L"IfUsedNetLuidIndices",
                        3u,
                        *(PVOID *)(a1 + 56),
                        *(_DWORD *)(a1 + 40));
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return RegistryKey;
}
