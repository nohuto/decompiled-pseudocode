/*
 * XREFs of SshpGenerateDeviceFriendlyName @ 0x1408FB280
 * Callers:
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x1408FB0C0 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x1408FB1B0 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x1408FB550 (SleepstudyHelper_GetPdoFriendlyName.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringCat @ 0x1402AB490 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringCatString @ 0x1403C453C (RtlUnicodeStringCatString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  void *v10; // r14
  NTSTATUS v11; // ebx
  NTSTATUS DeviceProperty; // eax
  ULONG v13; // esi
  __int64 v14; // r8
  __int64 v15; // rsi
  PVOID PoolWithTag; // rax
  __int64 v17; // r8
  _WORD *v18; // rax
  signed int v19; // ecx
  __int64 v20; // rdx
  _WORD *v21; // rax
  ULONG Tag; // [rsp+30h] [rbp-59h]
  ULONG BufferLength; // [rsp+34h] [rbp-55h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  char v26; // [rsp+50h] [rbp-39h] BYREF

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v5 = 0;
  BufferLength = 0;
  Tag = a3;
  DeviceNode = (const UNICODE_STRING *)DeviceObjectExtension->DeviceNode;
  v10 = 0LL;
  DestinationString = 0LL;
  if ( !DeviceNode )
  {
    v11 = -1073741811;
    goto LABEL_46;
  }
  DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
  v11 = DeviceProperty;
  if ( DeviceProperty == -1073741789 )
  {
    if ( BufferLength > 0xFFFF )
    {
      v11 = -2147483643;
      goto LABEL_45;
    }
    v5 = BufferLength + 4;
  }
  else if ( DeviceProperty != -1073741772 )
  {
    goto LABEL_44;
  }
  v13 = DeviceNode[8].Length + v5;
  if ( a2 )
  {
    v14 = *a2;
    DestinationString.Buffer = (wchar_t *)&v26;
    *(_DWORD *)&DestinationString.Length = 0x400000;
    v11 = RtlUnicodeStringPrintf(&DestinationString, L" (%d)", v14);
    if ( v11 < 0 )
      goto LABEL_45;
    v13 += DestinationString.Length;
  }
  if ( !v13 )
  {
    v11 = -1073741811;
    goto LABEL_45;
  }
  a3 = Tag;
  v15 = v13 + 2;
  if ( (unsigned int)v15 >= 0xFFFF )
  {
    v11 = -2147483643;
    goto LABEL_46;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v15, Tag);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    goto LABEL_45;
  }
  memset(PoolWithTag, 0, (unsigned int)v15);
  if ( BufferLength )
  {
    v11 = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, v10, &BufferLength);
    if ( v11 < 0 )
      goto LABEL_45;
    *a4 = 0LL;
    v17 = 0x7FFFLL;
    v18 = v10;
    do
    {
      if ( !*v18 )
        break;
      ++v18;
      --v17;
    }
    while ( v17 );
    v19 = v17 == 0 ? 0xC000000D : 0;
    if ( v17 )
    {
      if ( a4 )
      {
        a4->Buffer = (wchar_t *)v10;
        a4->Length = 2 * (v17 != 0 ? 0x7FFF - v17 : 0);
      }
      else
      {
        v19 = -1073741811;
      }
    }
    a4->MaximumLength = v15;
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_45;
    v11 = RtlUnicodeStringCatString(a4, L" (");
  }
  else
  {
    *a4 = 0LL;
    v20 = 0x7FFFLL;
    v21 = v10;
    do
    {
      if ( !*v21 )
        break;
      ++v21;
      --v20;
    }
    while ( v20 );
    if ( v20 && a4 )
    {
      a4->Buffer = (wchar_t *)v10;
      a4->Length = 2 * (v20 != 0 ? 0x7FFF - v20 : 0);
    }
    a4->MaximumLength = v15;
    v11 = 0;
  }
  if ( v11 >= 0 )
  {
    v11 = RtlUnicodeStringCat(a4, DeviceNode + 8);
    if ( v11 >= 0 )
    {
      if ( BufferLength )
        v11 = RtlUnicodeStringCatString(a4, L")");
      if ( v11 >= 0 )
      {
        if ( a2 )
          v11 = RtlUnicodeStringCat(a4, &DestinationString);
        if ( v11 >= 0 )
        {
          v11 = 0;
LABEL_44:
          v10 = 0LL;
          if ( v11 >= 0 )
            return (unsigned int)v11;
        }
      }
    }
  }
LABEL_45:
  a3 = Tag;
LABEL_46:
  *a4 = 0LL;
  if ( v10 )
    CmpFreeTransientPoolWithTag(v10, a3);
  return (unsigned int)v11;
}
