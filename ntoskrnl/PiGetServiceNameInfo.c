/*
 * XREFs of PiGetServiceNameInfo @ 0x140870010
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x140771840 (IoOpenDriverRegistryKey.c)
 *     IoGetDriverDirectory @ 0x140952490 (IoGetDriverDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x1406C1280 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x140761970 (RtlDuplicateUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetServiceNameInfo(__int64 a1, UNICODE_STRING *a2, char *a3)
{
  char v6; // si
  NTSTATUS inited; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v9; // rdi
  UNICODE_STRING *p_DestinationString; // rdx
  unsigned __int64 v12; // rax
  const WCHAR *v13; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  DestinationString = 0LL;
  P = 0LL;
  Handle = 0LL;
  v6 = 1;
  RtlInitUnicodeString(&DestinationString, 0LL);
  inited = PipOpenServiceEnumKeys((UNICODE_STRING *)(*(_QWORD *)(a1 + 48) + 24LL), 0x20019u, &Handle, 0LL, 0);
  if ( inited < 0 )
    goto LABEL_8;
  RegistryValue = IopGetRegistryValue(Handle, L"OriginalServiceName", 256, &P);
  v9 = P;
  inited = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_3;
  if ( RegistryValue >= 0 )
  {
    if ( *((_DWORD *)P + 1) != 1
      || (v12 = *((unsigned int *)P + 3), (unsigned int)v12 < 2)
      || (v13 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2)), v13[(v12 >> 1) - 1]) )
    {
      inited = -1073741492;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, v13);
      if ( inited >= 0 )
      {
        if ( RtlCompareUnicodeString((PCUNICODE_STRING)(*(_QWORD *)(a1 + 48) + 24LL), &DestinationString, 1u) )
        {
          p_DestinationString = &DestinationString;
LABEL_4:
          inited = RtlDuplicateUnicodeString(1u, p_DestinationString, a2);
          if ( inited >= 0 )
            *a3 = v6;
          goto LABEL_6;
        }
LABEL_3:
        v6 = 0;
        p_DestinationString = (UNICODE_STRING *)(*(_QWORD *)(a1 + 48) + 24LL);
        goto LABEL_4;
      }
    }
  }
LABEL_6:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
