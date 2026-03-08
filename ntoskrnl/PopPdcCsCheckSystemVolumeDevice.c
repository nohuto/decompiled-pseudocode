/*
 * XREFs of PopPdcCsCheckSystemVolumeDevice @ 0x140B72350
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1404123F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140879C70 (PopNetIsDisconnectStandbyActive.c)
 *     PopPdcCsDeviceNotification @ 0x140994E6C (PopPdcCsDeviceNotification.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 PopPdcCsCheckSystemVolumeDevice()
{
  __int64 result; // rax
  int v1; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp-29h] BYREF
  int v4; // [rsp+68h] [rbp-21h]
  int v5; // [rsp+6Ch] [rbp-1Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  _QWORD InputBuffer[2]; // [rsp+B0h] [rbp+27h] BYREF
  __int64 OutputBuffer; // [rsp+C0h] [rbp+37h] BYREF
  int v10; // [rsp+C8h] [rbp+3Fh]

  result = 0LL;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(InputBuffer, 0, 12);
  OutputBuffer = 0LL;
  v10 = 0;
  v1 = 0;
  if ( PopPlatformAoAc )
  {
    Buffer = IoArcBootDeviceName.Buffer;
    ObjectAttributes.ObjectName = &IoArcBootDeviceName;
    FileHandle = 0LL;
    v5 = 1;
    v4 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
    {
      *(_QWORD *)((char *)InputBuffer + 4) = 0LL;
      IoStatusBlock = 0LL;
      LODWORD(InputBuffer[0]) = 7;
      if ( ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D1400u,
             InputBuffer,
             0xCu,
             &OutputBuffer,
             0xCu) >= 0 )
      {
        if ( (_BYTE)v10 )
          PopBsdSkipLogging = 1;
        else
          BYTE1(v5) = 1;
      }
    }
    PopPdcCsDeviceNotification((__int64)&Buffer);
    if ( FileHandle )
      ZwClose(FileHandle);
    PopAcquirePolicyLock();
    PopNetIsDisconnectStandbyActive(&v1);
    byte_140C3D6F7 = (unsigned int)(v1 - 3) > 1;
    return PopReleasePolicyLock();
  }
  return result;
}
