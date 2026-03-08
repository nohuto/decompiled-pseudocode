/*
 * XREFs of ?DxgkpQueryHostDriverStoreAvailability@@YA_NXZ @ 0x1C0350714
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C01DDA00 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

char DxgkpQueryHostDriverStoreAvailability(void)
{
  void *FileHandle; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-61h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-21h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-9h] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  wcscpy(SourceString, L"\\SystemRoot\\System32\\HostDriverStore\\");
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u) < 0 )
    return 0;
  ZwClose(FileHandle);
  return 1;
}
