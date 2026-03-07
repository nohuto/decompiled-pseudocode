__int64 __fastcall PopGenerateDeviceFriendlyName(__int64 a1, char a2, UNICODE_STRING *a3)
{
  int v4; // r12d
  ULONG v5; // edx
  struct _DEVICE_OBJECT *v8; // r13
  char v9; // si
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v11; // ebx
  const UNICODE_STRING *v12; // r14
  unsigned int Length; // ebx
  ULONG v14; // ecx
  signed int v15; // eax
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  wchar_t *Pool2; // rbp
  unsigned int v21; // edx
  unsigned int v22; // ecx
  ULONG BufferLength; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2 & 2;
  v5 = 0;
  BufferLength = 0;
  *a3 = 0LL;
  v8 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v9 = a2 & 1;
  if ( v9 )
  {
    DeviceProperty = IoGetDeviceProperty(v8, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    v11 = DeviceProperty;
    if ( DeviceProperty != -1073741789 )
    {
      if ( DeviceProperty != -1073741772 )
        goto LABEL_40;
      v9 = 0;
      v12 = (const UNICODE_STRING *)(a1 + 128);
      goto LABEL_28;
    }
    v5 = BufferLength;
  }
  v12 = (const UNICODE_STRING *)(a1 + 128);
  if ( !v9 )
  {
LABEL_28:
    Length = v12->Length;
    v15 = 0;
    goto LABEL_11;
  }
  Length = -1;
  v14 = v5 + v12->Length;
  if ( v14 >= v5 )
    Length = v5 + v12->Length;
  v15 = v14 < v5 ? 0xC0000095 : 0;
  if ( v14 >= v5 )
  {
    v16 = -1;
    v17 = Length + 8;
    v18 = Length;
    if ( Length + 8 >= Length )
      v16 = Length + 8;
    Length = v16;
    v15 = v17 < v18 ? 0xC0000095 : 0;
  }
LABEL_11:
  if ( v4 )
  {
    if ( v15 < 0 )
      goto LABEL_42;
    v21 = Length + 8;
    if ( Length + 8 < Length )
      goto LABEL_42;
    Length = -1;
    v22 = v21 + *(unsigned __int16 *)(a1 + 56);
    if ( v22 >= v21 )
      Length = v21 + *(unsigned __int16 *)(a1 + 56);
    v15 = v22 < v21 ? 0xC0000095 : 0;
  }
  if ( v15 < 0 || Length >= 0xFFFF )
  {
LABEL_42:
    v11 = -1073741675;
    goto LABEL_43;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, Length, 1297630800LL);
  if ( !Pool2 )
  {
    v11 = -1073741670;
    goto LABEL_43;
  }
  a3->Buffer = Pool2;
  a3->Length = 0;
  a3->MaximumLength = Length;
  if ( v9
    && ((v11 = IoGetDeviceProperty(v8, DevicePropertyDeviceDescription, BufferLength, Pool2, &BufferLength), v11 < 0)
     || (a3->Length = BufferLength - 2, v11 = RtlUnicodeStringCatString(a3, L" ("), v11 < 0))
    || (v11 = RtlUnicodeStringCat(a3, v12), v9) )
  {
    if ( v11 >= 0 )
      v11 = RtlUnicodeStringCatString(a3, L")");
  }
  if ( v4 )
  {
    if ( v11 < 0 )
      goto LABEL_39;
    v11 = RtlUnicodeStringCatString(a3, L" [");
    if ( v11 < 0 )
      goto LABEL_39;
    v11 = RtlUnicodeStringCat(a3, (PCUNICODE_STRING)(a1 + 56));
    if ( v11 < 0 )
      goto LABEL_39;
    v11 = RtlUnicodeStringCatString(a3, L"]");
  }
  if ( v11 < 0 )
  {
LABEL_39:
    ExFreePoolWithTag(Pool2, 0x4D584650u);
LABEL_40:
    if ( v11 >= 0 )
      return (unsigned int)v11;
LABEL_43:
    *a3 = 0LL;
    return (unsigned int)v11;
  }
  return 0;
}
