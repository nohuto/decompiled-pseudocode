/*
 * XREFs of MiCreateSectionForDriver @ 0x1407F5C64
 * Callers:
 *     MiObtainSectionForDriver @ 0x14072EE44 (MiObtainSectionForDriver.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiCreateSystemSection @ 0x14036BD9C (MiCreateSystemSection.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     MiLogFailedDriverLoad @ 0x140A2D5B4 (MiLogFailedDriverLoad.c)
 *     KdPullRemoteFile @ 0x140AADD28 (KdPullRemoteFile.c)
 */

NTSTATUS __fastcall MiCreateSectionForDriver(UNICODE_STRING *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rsi
  NTSTATUS result; // eax
  int v9; // r14d
  int SessionId; // eax
  int v11; // ebx
  int v12; // [rsp+40h] [rbp-39h]
  int v13; // [rsp+48h] [rbp-31h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+F8h] [rbp+7Fh] BYREF

  byte_140C65574 = 1;
  v17 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *a4 = 0LL;
  v6 = a2;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  if ( a2 )
    goto LABEL_8;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (int)KdPullRemoteFile() >= 0 )
    DbgPrintEx(0x66u, 2u, "MmLoadSystemImage: Pulled %wZ from kd\n", a1);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( result >= 0 )
  {
    v6 = (__int64)FileHandle;
LABEL_8:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    v9 = (((a3 & 1) << 21) + 0x100000) | 0x400000;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a3 >= 0 )
      v9 = ((a3 & 1) << 21) + 0x100000;
    if ( (a3 & 1) != 0 )
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    else
      SessionId = -1;
    v11 = MiCreateSystemSection(
            &v17,
            a2,
            (int)&ObjectAttributes,
            (__int64)a4,
            16,
            v9,
            ((unsigned int)a3 >> 27) & 8,
            v6,
            v12,
            v13,
            SessionId,
            0,
            0);
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    if ( v11 < 0 )
    {
      MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)v11);
      return v11;
    }
    else
    {
      *a4 = v17;
      return 0;
    }
  }
  return result;
}
