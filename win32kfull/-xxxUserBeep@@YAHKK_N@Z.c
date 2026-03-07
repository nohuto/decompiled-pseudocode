__int64 __fastcall xxxUserBeep(unsigned int a1, int a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v9; // r14d
  __int64 v10; // rcx
  void *FileHandle; // [rsp+68h] [rbp-29h] BYREF
  unsigned __int64 InputBuffer; // [rsp+70h] [rbp-21h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp+Fh] BYREF
  char v17; // [rsp+110h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = a2;
  InputBuffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  Interval.QuadPart = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( gProtocolType )
  {
    if ( !gpRemoteBeepDevice )
      return 0LL;
    v7 = ObOpenObjectByPointer(gpRemoteBeepDevice, 0, 0LL, 0x1F0003u, 0LL, 0, &FileHandle);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\Beep");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwCreateFile(&FileHandle, 3u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 3u, 0, 0LL, 0);
  }
  if ( v7 < 0 )
    return 0LL;
  if ( (a1 || (_DWORD)v4) && a1 - 37 > 0x7FDA )
  {
    v9 = -1073741811;
  }
  else
  {
    InputBuffer = __PAIR64__(v4, a1);
    v9 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x10000u, &InputBuffer, 8u, 0LL, 0);
  }
  if ( a3 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
    xxxSoundSentry();
    if ( !v17 )
      UserSessionSwitchLeaveCrit(v10);
  }
  if ( v9 >= 0 )
  {
    if ( (_DWORD)v4 != -1 && (a1 || (_DWORD)v4) )
    {
      Interval.QuadPart = -10000 * v4;
      KeDelayExecutionThread(1, 0, &Interval);
    }
    v3 = 1;
  }
  ZwClose(FileHandle);
  return v3;
}
