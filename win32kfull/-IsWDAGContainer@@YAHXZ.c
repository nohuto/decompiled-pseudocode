/*
 * XREFs of ?IsWDAGContainer@@YAHXZ @ 0x1C0010010
 * Callers:
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C0042CB8 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 IsWDAGContainer(void)
{
  unsigned int v0; // ebx
  NTSTATUS v2; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp+27h] BYREF
  int v8; // [rsp+84h] [rbp+2Bh]
  int v9; // [rsp+8Ch] [rbp+33h]

  v0 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  if ( dword_1C036131C )
    return (unsigned int)dword_1C0361318;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Hvsi");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IsHvsiContainer");
    v2 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength);
    if ( v2 >= 0 && v8 == 4 )
      LOBYTE(v0) = v9 != 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741772 )
  {
    dword_1C0361318 = v0;
    dword_1C036131C = 1;
  }
  return v0;
}
