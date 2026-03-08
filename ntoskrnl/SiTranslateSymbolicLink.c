/*
 * XREFs of SiTranslateSymbolicLink @ 0x14076E918
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x14076E380 (SiGetFirmwareSystemPartition.c)
 *     SiGetBootDeviceName @ 0x14076E464 (SiGetBootDeviceName.c)
 *     SiGetSystemDisk @ 0x14087C0C0 (SiGetSystemDisk.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140A5D904 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1404149D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x140415030 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SiTranslateSymbolicLink(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS result; // eax
  unsigned __int16 v4; // di
  NTSTATUS v5; // ebx
  wchar_t *Buffer; // rax
  UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnedLength; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE LinkHandle; // [rsp+A8h] [rbp+38h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&LinkTarget.Length = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  LinkHandle = 0LL;
  LinkTarget.Buffer = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&LinkTarget, 0LL);
    v4 = 0;
    ReturnedLength = 0;
    do
    {
      while ( 1 )
      {
        v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
        if ( v5 == -1073741789 )
          break;
        ZwClose(LinkHandle);
        Buffer = LinkTarget.Buffer;
        LinkHandle = 0LL;
        if ( v5 < 0 )
          goto LABEL_16;
        LinkTarget.Buffer[(unsigned __int64)LinkTarget.Length >> 1] = 0;
        ObjectAttributes.ObjectName = &LinkTarget;
        LinkTarget.MaximumLength = v4;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) < 0 )
        {
          Buffer = LinkTarget.Buffer;
          v5 = 0;
          *a2 = LinkTarget.Buffer;
          goto LABEL_7;
        }
      }
      if ( LinkTarget.Buffer )
        ExFreePoolWithTag(LinkTarget.Buffer, 0);
      LinkTarget.MaximumLength = ReturnedLength;
      v4 = ReturnedLength + 2;
      Buffer = (wchar_t *)ExAllocatePool2(256LL, ReturnedLength + 2, 1263556947LL);
      LinkTarget.Buffer = Buffer;
    }
    while ( Buffer );
    v5 = -1073741670;
LABEL_7:
    if ( LinkHandle )
    {
      ZwClose(LinkHandle);
      Buffer = LinkTarget.Buffer;
      LinkHandle = 0LL;
    }
    if ( v5 < 0 )
    {
LABEL_16:
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
    }
    return v5;
  }
  return result;
}
