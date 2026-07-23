/*
 * XREFs of PopResizeHiberFile @ 0x140776E88
 * Callers:
 *     PopAdjustHiberFile @ 0x140776D94 (PopAdjustHiberFile.c)
 *     PopEnlargeHiberFile @ 0x140776DE8 (PopEnlargeHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     PopValidateHiberFileSize @ 0x140776FE8 (PopValidateHiberFileSize.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D874 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x14078E438 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x14078E9BC (PopSetHiberFileMcb.c)
 */

__int64 __fastcall PopResizeHiberFile(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  __int64 v5; // rax
  NTSTATUS Status; // ecx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR v11; // [rsp+48h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+28h] BYREF

  v8 = 0LL;
  P = 0LL;
  LODWORD(NumberOfBytes) = 0;
  IoStatusBlock = 0LL;
  if ( !FileObject )
    goto LABEL_17;
  if ( qword_140C23E70 == a1 )
  {
LABEL_15:
    Status = 0;
    goto LABEL_16;
  }
  v4 = PopValidateHiberFileSize(a1, &v8);
  v5 = v8;
  if ( v4 >= 0 )
    v5 = a1;
  v14 = v5;
  if ( v5 <= 0 )
  {
LABEL_17:
    Status = -1073741823;
    goto LABEL_16;
  }
  FileInformation = v5;
  Status = ZwSetInformationFile(
             *(HANDLE *)&PopHiberInfo,
             &IoStatusBlock,
             &FileInformation,
             8u,
             FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v11 = v14;
    Status = ZwSetInformationFile(*(HANDLE *)&PopHiberInfo, &IoStatusBlock, &v11, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = PopSanityCheckHiberFile(
                 PopHiberInfo,
                 (_DWORD)FileObject,
                 (unsigned int)&v14,
                 (unsigned int)&P,
                 (__int64)&NumberOfBytes);
      if ( Status >= 0 )
      {
        Status = PopSetHiberFileMcb(P, (unsigned int)NumberOfBytes);
        if ( Status >= 0 )
        {
          qword_140C23E70 = v14;
          FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)FileObject);
          goto LABEL_15;
        }
      }
    }
  }
LABEL_16:
  *a2 = qword_140C23E70;
  return (unsigned int)Status;
}
