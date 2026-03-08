/*
 * XREFs of ?DxgkpCreateFile@@YAJPEAGKKKKPEAPEAX@Z @ 0x1C0306B40
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0305F44 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003F8DC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

NTSTATUS __fastcall DxgkpCreateFile(
        size_t *a1,
        ACCESS_MASK DesiredAccess,
        ULONG FileAttributes,
        ULONG CreateOptions,
        ULONG CreateDisposition,
        void **a6)
{
  __int64 v8; // rbx
  NTSTATUS result; // eax
  NTSTATUS v11; // edi
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v8 = -1LL;
  *a6 = (void *)-1LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  result = RtlStringCbCopyW(SourceString, 0x208uLL, a1);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    FileHandle = (void *)-1LL;
    v11 = ZwCreateFile(
            &FileHandle,
            DesiredAccess,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            FileAttributes,
            1u,
            CreateDisposition,
            CreateOptions,
            0LL,
            0);
    if ( v11 >= 0 )
      v8 = (__int64)FileHandle;
    else
      WdLogSingleEntry1(3LL, 78LL);
    *a6 = (void *)v8;
    return v11;
  }
  return result;
}
