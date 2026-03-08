/*
 * XREFs of PopResizeHiberFile @ 0x140985EE0
 * Callers:
 *     PopAdjustHiberFile @ 0x140984CE4 (PopAdjustHiberFile.c)
 *     PopEnlargeHiberFile @ 0x140985550 (PopEnlargeHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x1404127F0 (ZwSetInformationFile.c)
 *     PopSetHiberFileMcb @ 0x1407FC4A4 (PopSetHiberFileMcb.c)
 *     PopSanityCheckHiberFile @ 0x1407FC518 (PopSanityCheckHiberFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140835E18 (FsRtlIssueFileNotificationFsctl.c)
 *     PopValidateHiberFileSize @ 0x140986270 (PopValidateHiberFileSize.c)
 */

__int64 __fastcall PopResizeHiberFile(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int Status; // ecx
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR v10; // [rsp+48h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v13; // [rsp+88h] [rbp+28h] BYREF

  v7 = 0LL;
  P = 0LL;
  v12 = 0;
  v3 = a1;
  IoStatusBlock = 0LL;
  if ( !FileObject )
  {
LABEL_2:
    Status = -1073741823;
    goto LABEL_17;
  }
  if ( qword_140C3CA70 == a1 )
  {
LABEL_16:
    Status = 0;
    goto LABEL_17;
  }
  if ( (int)PopValidateHiberFileSize(a1, &v7) < 0 )
    v3 = v7;
  v13 = v3;
  if ( v3 <= 0 )
    goto LABEL_2;
  FileInformation = v3;
  Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v10 = v13;
    Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &v10, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = PopSanityCheckHiberFile(PopHiberInfo, (__int64)FileObject, &v13, (__int64 **)&P, &v12);
      if ( Status >= 0 )
      {
        Status = PopSetHiberFileMcb(P, v12);
        if ( Status >= 0 )
        {
          qword_140C3CA70 = v13;
          FsRtlIssueFileNotificationFsctl(
            (PFILE_OBJECT)FileObject,
            v5,
            (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
          goto LABEL_16;
        }
      }
    }
  }
LABEL_17:
  *a2 = qword_140C3CA70;
  return (unsigned int)Status;
}
