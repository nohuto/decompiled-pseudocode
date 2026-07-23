/*
 * XREFs of PopGenerateDeviceFriendlyName @ 0x1407BE5E8
 * Callers:
 *     PopFxRegisterDevice @ 0x1407B4EDC (PopFxRegisterDevice.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x1408F6F90 (PopDirectedDripsDiagCreateDeviceDescription.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1402AB490 (RtlUnicodeStringCat.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     RtlUnicodeStringCatString @ 0x1403C453C (RtlUnicodeStringCatString.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGenerateDeviceFriendlyName(__int64 a1, UNICODE_STRING *a2)
{
  struct _DEVICE_OBJECT *v2; // r15
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v6; // ebx
  const UNICODE_STRING *v7; // r14
  ULONG v8; // ebp
  PVOID PoolWithTag; // rsi
  __int64 v10; // rdx
  _WORD *v11; // rax
  unsigned __int64 Length; // rcx
  unsigned __int16 v14; // bx
  wchar_t *v15; // rax
  ULONG BufferLength; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  BufferLength = 0;
  DeviceProperty = IoGetDeviceProperty(v2, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
  v6 = DeviceProperty;
  if ( DeviceProperty == -1073741789 )
  {
    if ( BufferLength > 0xFFFF
      || (v7 = (const UNICODE_STRING *)(a1 + 128), v8 = *(unsigned __int16 *)(a1 + 128) + BufferLength + 6, v8 > 0xFFFF) )
    {
      v6 = -2147483643;
      goto LABEL_25;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x4D584650u);
    if ( PoolWithTag )
    {
      v6 = IoGetDeviceProperty(v2, DevicePropertyDeviceDescription, BufferLength, PoolWithTag, &BufferLength);
      if ( v6 < 0 )
        goto LABEL_20;
      *a2 = 0LL;
      v10 = 0x7FFFLL;
      v11 = PoolWithTag;
      do
      {
        if ( !*v11 )
          break;
        ++v11;
        --v10;
      }
      while ( v10 );
      v6 = v10 == 0 ? 0xC000000D : 0;
      if ( v10 )
      {
        if ( a2 )
        {
          a2->Buffer = (wchar_t *)PoolWithTag;
          a2->Length = 2 * (v10 != 0 ? 0x7FFF - v10 : 0);
        }
        else
        {
          v6 = -1073741811;
        }
      }
      a2->MaximumLength = v8;
      if ( v6 < 0 )
        goto LABEL_20;
      v6 = RtlUnicodeStringCatString(a2, L" (");
      if ( v6 < 0 )
        goto LABEL_20;
      v6 = RtlUnicodeStringCat(a2, v7);
      if ( v6 < 0 )
        goto LABEL_20;
      v6 = RtlUnicodeStringCatString(a2, L")");
      if ( v6 < 0 )
        goto LABEL_20;
      Length = a2->Length;
      if ( Length > (unsigned __int64)a2->MaximumLength - 2 )
        v6 = -2147483643;
      else
        a2->Buffer[Length >> 1] = 0;
      if ( v6 < 0 )
        goto LABEL_20;
      goto LABEL_19;
    }
LABEL_27:
    v6 = -1073741670;
    goto LABEL_25;
  }
  if ( DeviceProperty != -1073741772 )
    goto LABEL_22;
  v14 = *(_WORD *)(a1 + 128);
  v15 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14, 0x4D584650u);
  if ( !v15 )
    goto LABEL_27;
  a2->Buffer = v15;
  a2->Length = 0;
  a2->MaximumLength = v14;
  RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(a1 + 128));
LABEL_19:
  PoolWithTag = 0LL;
  v6 = 0;
LABEL_20:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4D584650u);
LABEL_22:
  if ( v6 < 0 )
LABEL_25:
    *a2 = 0LL;
  return (unsigned int)v6;
}
