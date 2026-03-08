/*
 * XREFs of ExpTranslateNtPath @ 0x1409FB67C
 * Callers:
 *     NtTranslateFilePath @ 0x14083EB70 (NtTranslateFilePath.c)
 *     ExpConvertArcName @ 0x1409F8CB8 (ExpConvertArcName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x1404123F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExpTranslateSymbolicLink @ 0x14083F2E8 (ExpTranslateSymbolicLink.c)
 *     ExpCreateOutputARC @ 0x1409F90C0 (ExpCreateOutputARC.c)
 *     ExpCreateOutputEFI @ 0x1409F91B8 (ExpCreateOutputEFI.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409F9388 (ExpCreateOutputSIGNATURE.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpTranslateNtPath(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  int v5; // r15d
  const WCHAR *v8; // rbx
  char v9; // di
  char v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  wchar_t *Src; // rsi
  NTSTATUS result; // eax
  wchar_t *Buffer; // rbx
  int OutputARC; // esi
  NTSTATUS v17; // ebx
  __int64 OutputBufferLength; // r14
  __int64 i; // rdx
  NTSTATUS v20; // r15d
  int *Pool2; // rbx
  int *v22; // r8
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v24; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  __int64 OutputBuffer[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v29; // [rsp+190h] [rbp+90h] BYREF
  int v30; // [rsp+198h] [rbp+98h]

  v30 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = a2;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  v24 = 0LL;
  IoStatusBlock = 0LL;
  memset(OutputBuffer, 0, 0x8CuLL);
  v8 = (const WCHAR *)(a1 + 12);
  v29 = 0;
  v9 = 1;
  v10 = 1;
  RtlInitUnicodeString(&DestinationString, v8);
  v11 = (unsigned __int64)v8 + DestinationString.Length + 2;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(v11 + 2 * v12) );
  Src = (wchar_t *)(v11 & -(__int64)((_DWORD)v12 != 0));
  if ( v5 != 1 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result < 0 )
      return result;
    v17 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
    if ( v17 >= 0 )
    {
      if ( LODWORD(OutputBuffer[0]) )
      {
        if ( LODWORD(OutputBuffer[0]) != 1 )
        {
          v17 = -1073741804;
          goto LABEL_24;
        }
      }
      else
      {
        LODWORD(OutputBufferLength) = 2352;
        for ( i = 2352LL; ; i = OutputBufferLength )
        {
          Pool2 = (int *)ExAllocatePool2(64LL, i, 1920364101LL);
          if ( !Pool2 )
          {
            ZwClose(FileHandle);
            return -1073741670;
          }
          v20 = ZwDeviceIoControlFile(
                  FileHandle,
                  0LL,
                  0LL,
                  0LL,
                  &IoStatusBlock,
                  0x70050u,
                  0LL,
                  0,
                  Pool2,
                  OutputBufferLength);
          if ( v20 >= 0 )
            break;
          ExFreePoolWithTag(Pool2, 0);
          if ( v20 != -1073741789 )
          {
            v17 = v20;
            goto LABEL_24;
          }
          OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
        }
        v29 = Pool2[2];
        ExFreePoolWithTag(Pool2, 0);
        v5 = v30;
      }
      ZwClose(FileHandle);
      if ( LODWORD(OutputBuffer[0]) == 1 )
      {
        v22 = (int *)&OutputBuffer[6];
      }
      else
      {
        v22 = &v29;
        v9 = 0;
      }
      if ( v5 == 4 )
        return ExpCreateOutputEFI(a3, a4, v22, (int *)&OutputBuffer[3], &OutputBuffer[1], &OutputBuffer[2], Src, v9);
      else
        return ExpCreateOutputSIGNATURE(
                 (__int64)a3,
                 a4,
                 (unsigned int *)v22,
                 (unsigned int *)&OutputBuffer[3],
                 &OutputBuffer[1],
                 &OutputBuffer[2],
                 Src,
                 v9);
    }
LABEL_24:
    ZwClose(FileHandle);
    return v17;
  }
  result = ExpTranslateSymbolicLink(v8, &v24);
  if ( result >= 0 )
  {
    Buffer = v24.Buffer;
  }
  else
  {
    if ( result != -1073741788 )
      return result;
    v10 = 0;
    Buffer = DestinationString.Buffer;
    *(_DWORD *)&v24.Length = *(_DWORD *)&DestinationString.Length;
    v24.Buffer = DestinationString.Buffer;
  }
  OutputARC = ExpCreateOutputARC(a3, a4, (__int64)&v24, Src);
  if ( v10 == 1 )
    ExFreePoolWithTag(Buffer, 0);
  return OutputARC;
}
