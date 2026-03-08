/*
 * XREFs of IopUpdateSecureDeviceClassState @ 0x14083B398
 * Callers:
 *     IoCreateDeviceSecure @ 0x14083BAD0 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402C0CD0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     IopCreateRegistryKeyEx @ 0x14078BB90 (IopCreateRegistryKeyEx.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUpdateSecureDeviceClassState(unsigned int *a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rdx
  void *v6; // rsi
  void *v7; // r15
  void *Pool2; // rdi
  int PersistedStateLocation; // eax
  int inited; // ebx
  int v11; // eax
  ULONG v12; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  void *v17; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES v19; // [rsp+78h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v21; // [rsp+130h] [rbp+77h] BYREF
  void *v22; // [rsp+138h] [rbp+7Fh] BYREF

  v22 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v4 = 256;
  v17 = 0LL;
  v5 = 256LL;
  LODWORD(v21) = 0;
  v6 = 0LL;
  memset(&v19, 0, 44);
  v7 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  while ( 1 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v5, 1665560393LL);
    if ( !Pool2 )
    {
      inited = -1073741670;
      goto LABEL_14;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
                               0,
                               Pool2,
                               v4,
                               (unsigned int *)&v21);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( (unsigned int)v21 <= v4 )
    {
      inited = -1073741595;
      goto LABEL_28;
    }
    v4 = v21;
    ExFreePoolWithTag(Pool2, 0);
    v5 = v4;
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_28:
  ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
LABEL_5:
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
    if ( inited >= 0 )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      if ( inited >= 0 )
      {
        inited = RtlStringFromGUIDEx(a1, (__int64)&UnicodeString, 1);
        if ( inited >= 0 )
        {
          inited = IopCreateRegistryKeyEx(&v22, KeyHandle, &UnicodeString, 0xF003Fu, 0, 0LL);
          if ( inited < 0 )
          {
            v6 = v22;
          }
          else
          {
            v11 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                    (__int64)L"D:PAI(A;OICI;GA;;;SY)",
                    1,
                    (__int64)&v17,
                    0LL);
            v7 = v17;
            if ( v11 < 0 )
              v7 = 0LL;
            RtlInitUnicodeString(&DestinationString, L"Properties");
            v6 = v22;
            v19.ObjectName = &DestinationString;
            v19.Length = 48;
            v19.RootDirectory = v22;
            v19.Attributes = 576;
            v19.SecurityDescriptor = v7;
            v19.SecurityQualityOfService = 0LL;
            inited = ZwCreateKey(&Handle, 0xF003Fu, &v19, 0, 0LL, 0, 0LL);
            if ( inited >= 0 )
            {
              v12 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
              RtlInitUnicodeString(&DestinationString, L"Security");
              inited = ZwSetValueKey(Handle, &DestinationString, 0, 3u, *(PVOID *)(a2 + 8), v12);
            }
          }
        }
      }
    }
  }
LABEL_14:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v6 )
    ZwClose(v6);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)inited;
}
