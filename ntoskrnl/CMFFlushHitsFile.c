/*
 * XREFs of CMFFlushHitsFile @ 0x1409FF53C
 * Callers:
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x140412390 (ZwWaitForSingleObject.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x140412C10 (ZwCreateEvent.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 *     CMFGetFileSizeEx @ 0x1409FF850 (CMFGetFileSizeEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFFlushHitsFile(void *Src, unsigned __int64 Length)
{
  void *Buffer; // rsi
  __int64 result; // rax
  NTSTATUS v6; // edi
  ULONG v7; // edi
  void *Pool2; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-2B8h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-2B0h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp-2A8h] BYREF
  void *v12; // [rsp+68h] [rbp-2A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-298h] BYREF
  unsigned __int64 v14; // [rsp+A0h] [rbp-268h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+A8h] [rbp-260h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-258h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-248h] BYREF
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-238h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  EventHandle = 0LL;
  ByteOffset.QuadPart = 0LL;
  Buffer = 0LL;
  if ( !Src )
    return 3221225485LL;
  if ( (CMFFlagsCache & 8) != 0
    || (v12 = Src,
        v14 = Length,
        result = MmFlushVirtualMemory(
                   KeGetCurrentThread()->ApcState.Process,
                   (unsigned __int64 *)&v12,
                   &v14,
                   &IoStatusBlock),
        (_DWORD)result == -1073741688) )
  {
    v6 = RtlStringCchPrintfW(pszDest, 0x104uLL, L"%s\\rc%04u\\rescache.hit", L"\\SystemRoot\\Rescache", CMFCacheIndex);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        FileHandle = 0LL;
      }
      else
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( (v6 & 0xC0000000) != 0xC0000000 )
        {
          v11[0] = 0;
          v11[1] = 0;
          v6 = CMFGetFileSizeEx(FileHandle, v11);
          if ( (v6 & 0xC0000000) != 0xC0000000 )
          {
            v7 = v11[0];
            if ( Length < v11[0] )
              v7 = Length;
            Pool2 = (void *)ExAllocatePool2(256LL, v7, 1668114000LL);
            Buffer = Pool2;
            v12 = Pool2;
            if ( Pool2 )
            {
              memmove(Pool2, Src, v7);
              v6 = ZwWriteFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, Buffer, v7, &ByteOffset, 0LL);
              if ( v6 == 259 )
                v6 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            }
            else
            {
              v6 = -1073741801;
            }
          }
        }
      }
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v6;
  }
  return result;
}
