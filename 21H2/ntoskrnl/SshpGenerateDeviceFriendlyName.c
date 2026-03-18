/*
 * XREFs of SshpGenerateDeviceFriendlyName @ 0x140854148
 * Callers:
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140853DB0 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140853E30 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x1409A12C0 (SleepstudyHelperCreateBlockerFromComponent.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x140208C24 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringPrintf @ 0x1402D17BC (RtlUnicodeStringPrintf.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringCatString @ 0x14036BFE0 (RtlUnicodeStringCatString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  _WORD *Pool2; // r14
  NTSTATUS DeviceProperty; // eax
  NTSTATUS v12; // ebx
  ULONG v13; // esi
  unsigned int v14; // esi
  __int64 v15; // r8
  _WORD *v16; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  _WORD *v20; // rdx
  ULONG v21; // [rsp+30h] [rbp-59h]
  ULONG BufferLength; // [rsp+34h] [rbp-55h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-51h] BYREF
  char v24; // [rsp+50h] [rbp-39h] BYREF

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v5 = 0;
  BufferLength = 0;
  v21 = a3;
  DeviceNode = (const UNICODE_STRING *)DeviceObjectExtension->DeviceNode;
  Pool2 = 0LL;
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
      v18 = *a2;
      SourceString.Buffer = (wchar_t *)&v24;
      *(_DWORD *)&SourceString.Length = 0x400000;
      v12 = RtlUnicodeStringPrintf(&SourceString, L" (%d)", v18);
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
      Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * v14, v21);
      if ( !Pool2 )
      {
        v12 = -1073741670;
        goto LABEL_27;
      }
      if ( !BufferLength )
      {
        *a4 = 0LL;
        v19 = 0x7FFFLL;
        v20 = Pool2;
        while ( *v20 )
        {
          ++v20;
          if ( !--v19 )
            goto LABEL_47;
        }
        if ( a4 )
        {
          a4->Buffer = Pool2;
          a4->Length = 2 * (0x7FFF - v19);
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
      v15 = 0x7FFFLL;
      v16 = Pool2;
      do
      {
        if ( !*v16 )
          break;
        ++v16;
        --v15;
      }
      while ( v15 );
      v12 = -1073741811;
      if ( v15 )
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
        a4->Buffer = Pool2;
        a4->Length = 2 * (0x7FFF - v15);
      }
      v12 = v15 == 0 ? 0xC000000D : 0;
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
  if ( Pool2 )
    CmpFreeTransientPoolWithTag(Pool2, a3);
  return (unsigned int)v12;
}
