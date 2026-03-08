/*
 * XREFs of BiTranslateSymbolicLink @ 0x140831298
 * Callers:
 *     BiGetNtPartitionPath @ 0x140830938 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLinkFile @ 0x140A5A968 (BiTranslateSymbolicLinkFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1404149D0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x140415030 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiTranslateSymbolicLink(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS result; // eax
  unsigned __int16 v4; // di
  NTSTATUS v5; // ebx
  wchar_t *Pool2; // rax
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
        if ( v5 != -1073741789 )
          break;
        if ( LinkTarget.Buffer )
          ExFreePoolWithTag(LinkTarget.Buffer, 0x4B444342u);
        LinkTarget.MaximumLength = ReturnedLength;
        v4 = ReturnedLength + 2;
        Pool2 = (wchar_t *)ExAllocatePool2(258LL, ReturnedLength + 2, 1262764866LL);
        LinkTarget.Buffer = Pool2;
        if ( !Pool2 )
        {
          v5 = -1073741670;
          goto LABEL_11;
        }
      }
      ZwClose(LinkHandle);
      Pool2 = LinkTarget.Buffer;
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
    }
    while ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 );
    Pool2 = LinkTarget.Buffer;
    v5 = 0;
    *a2 = LinkTarget.Buffer;
LABEL_11:
    if ( LinkHandle )
    {
      ZwClose(LinkHandle);
      Pool2 = LinkTarget.Buffer;
      LinkHandle = 0LL;
    }
    if ( v5 < 0 )
    {
LABEL_16:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x4B444342u);
    }
    return v5;
  }
  return result;
}
