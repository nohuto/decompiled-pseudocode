/*
 * XREFs of SshpGenerateDeviceFriendlyName @ 0x140842DE4
 * Callers:
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140842BD0 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140842D00 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x14099EFE0 (SleepstudyHelperCreateBlockerFromComponent.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringCatString @ 0x1402BD420 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCat @ 0x1402BD900 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringPrintf @ 0x1403BEBCC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SshpGenerateDeviceFriendlyName(
        PDEVICE_OBJECT DeviceObject,
        unsigned int *a2,
        ULONG a3,
        UNICODE_STRING *a4)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  ULONG v5; // esi
  const UNICODE_STRING *DeviceNode; // r15
  wchar_t *v10; // r14
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v12; // ebx
  ULONG v13; // esi
  unsigned int v14; // esi
  wchar_t *Pool2; // rax
  __int64 v16; // r8
  wchar_t *v17; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  ULONG v21; // [rsp+30h] [rbp-59h]
  ULONG BufferLength; // [rsp+34h] [rbp-55h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-51h] BYREF
  char v24; // [rsp+50h] [rbp-39h] BYREF

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v5 = 0;
  BufferLength = 0;
  v21 = a3;
  DeviceNode = (const UNICODE_STRING *)DeviceObjectExtension->DeviceNode;
  v10 = 0LL;
  SourceString = 0LL;
  if ( DeviceNode )
  {
    DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    v12 = DeviceProperty;
    if ( DeviceProperty == -1073741789 )
    {
      if ( BufferLength > 0xFFFF )
      {
        v12 = -2147483643;
        goto LABEL_27;
      }
      v5 = BufferLength + 4;
    }
    else if ( DeviceProperty != -1073741772 )
    {
      if ( DeviceProperty >= 0 )
        return (unsigned int)v12;
      goto LABEL_27;
    }
    v13 = DeviceNode[8].Length + v5;
    if ( a2 )
    {
      v19 = *a2;
      SourceString.Buffer = (wchar_t *)&v24;
      *(_DWORD *)&SourceString.Length = 0x400000;
      v12 = RtlUnicodeStringPrintf(&SourceString, L" (%d)", v19);
      if ( v12 < 0 )
        goto LABEL_27;
      v13 += SourceString.Length;
    }
    if ( !v13 )
    {
      v12 = -1073741811;
      goto LABEL_27;
    }
    a3 = v21;
    v14 = v13 + 2;
    if ( v14 < 0xFFFF )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v14, v21);
      v10 = Pool2;
      if ( !Pool2 )
      {
        v12 = -1073741670;
        goto LABEL_27;
      }
      if ( !BufferLength )
      {
        *a4 = 0LL;
        v20 = 0x7FFFLL;
        while ( *Pool2 )
        {
          ++Pool2;
          if ( !--v20 )
            goto LABEL_47;
        }
        if ( a4 )
        {
          a4->Buffer = v10;
          a4->Length = 2 * (0x7FFF - v20);
        }
LABEL_47:
        a4->MaximumLength = v14;
LABEL_20:
        v12 = RtlUnicodeStringCat(a4, DeviceNode + 8);
        if ( v12 >= 0 )
        {
          if ( !BufferLength || (v12 = RtlUnicodeStringCatString(a4, L")"), v12 >= 0) )
          {
            if ( !a2 )
              return 0;
            v12 = RtlUnicodeStringCat(a4, &SourceString);
            if ( v12 >= 0 )
              return 0;
          }
        }
        goto LABEL_27;
      }
      v12 = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, Pool2, &BufferLength);
      if ( v12 < 0 )
      {
LABEL_27:
        a3 = v21;
        goto LABEL_31;
      }
      *a4 = 0LL;
      v16 = 0x7FFFLL;
      v17 = v10;
      do
      {
        if ( !*v17 )
          break;
        ++v17;
        --v16;
      }
      while ( v16 );
      v12 = -1073741811;
      if ( v16 )
      {
        if ( !a4 )
        {
LABEL_18:
          a4->MaximumLength = v14;
          if ( v12 >= 0 )
          {
            v12 = RtlUnicodeStringCatString(a4, L" (");
            if ( v12 >= 0 )
              goto LABEL_20;
          }
          goto LABEL_27;
        }
        a4->Buffer = v10;
        a4->Length = 2 * (0x7FFF - v16);
      }
      v12 = v16 == 0 ? 0xC000000D : 0;
      goto LABEL_18;
    }
    v12 = -2147483643;
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_31:
  *a4 = 0LL;
  if ( v10 )
    CmpFreeTransientPoolWithTag(v10, a3);
  return (unsigned int)v12;
}
