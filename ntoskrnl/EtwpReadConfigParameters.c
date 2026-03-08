/*
 * XREFs of EtwpReadConfigParameters @ 0x140B6F720
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x14069DF10 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS EtwpReadConfigParameters()
{
  NTSTATUS result; // eax
  int v1; // ecx
  unsigned int v2; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v3; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v7; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v8; // [rsp+88h] [rbp-78h]
  int v9; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v10; // [rsp+98h] [rbp-68h]
  _QWORD v11[22]; // [rsp+B0h] [rbp-50h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  v2 = 10;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_14;
  memset(v11, 0, 0xA8uLL);
  LODWORD(v11[4]) = 4;
  v11[0] = EtwpQueryRegistryCallback;
  v11[3] = &v7;
  v7 = 4;
  v11[2] = L"MaxNonPagedPoolUsage";
  v11[7] = EtwpQueryRegistryCallback;
  v8 = &v2;
  LODWORD(v11[11]) = 4;
  v11[10] = &v9;
  v11[9] = L"StackCaptureTimeout";
  v9 = 4;
  v10 = &v3;
  if ( (int)RtlQueryRegistryValuesEx(0x40000000LL, (const WCHAR *)KeyHandle, v11, 0LL) < 0 )
  {
LABEL_14:
    result = v2;
    v1 = v3;
  }
  else
  {
    result = 50;
    if ( v2 <= 0x32 )
    {
      result = v2;
      if ( v2 < 0xA )
        result = 10;
    }
    v1 = v3;
    v2 = result;
    if ( v3 > 0x2BF20 )
      v1 = 180000;
    v3 = v1;
  }
  EtwpMaxNonPagedPoolUsage = result;
  if ( v1 )
    EtwpStackCaptureTimeout = v1;
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
