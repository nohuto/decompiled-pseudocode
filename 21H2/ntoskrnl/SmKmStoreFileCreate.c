/*
 * XREFs of SmKmStoreFileCreate @ 0x14092C13C
 * Callers:
 *     SmcCacheStart @ 0x14092D990 (SmcCacheStart.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1403FAEA0 (ZwQueryVolumeInformationFile.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoRegisterPlugPlayNotification @ 0x140673180 (IoRegisterPlugPlayNotification.c)
 *     SmKmFileInfoCleanup @ 0x14092B3D8 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C5EC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14092C89C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092C938 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CE34 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CFD4 (SmKmStoreFileWriteHeader.c)
 */

__int64 __fastcall SmKmStoreFileCreate(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        int a6,
        unsigned int *a7,
        _OWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        __int64 a11)
{
  char *v11; // r13
  unsigned int v15; // r15d
  HANDLE *v16; // rdi
  HANDLE v17; // r14
  char *v18; // rsi
  __int64 v19; // rax
  NTSTATUS Status; // ebx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  unsigned int v23; // r13d
  __int128 v24; // xmm1
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _DWORD *v28; // rcx
  int v30; // [rsp+28h] [rbp-D8h]
  BOOLEAN EnableHardErrors; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+6Ch] [rbp-94h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+84h] [rbp-7Ch]
  __int64 FileInformation; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  PVOID NotificationEntry; // [rsp+98h] [rbp-68h] BYREF
  HANDLE FileHandle[8]; // [rsp+A0h] [rbp-60h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+E0h] [rbp-20h]
  _OWORD *v44; // [rsp+E8h] [rbp-18h]
  _DWORD *v45; // [rsp+F0h] [rbp-10h]
  _DWORD *v46; // [rsp+F8h] [rbp-8h]
  __int64 *v47; // [rsp+100h] [rbp+0h]
  unsigned int *v48; // [rsp+108h] [rbp+8h]
  __int64 v49; // [rsp+110h] [rbp+10h]
  __int128 FsInformation; // [rsp+118h] [rbp+18h] BYREF
  __int64 v51; // [rsp+128h] [rbp+28h]
  __int128 v52; // [rsp+130h] [rbp+30h] BYREF
  __int64 v53; // [rsp+140h] [rbp+40h]

  v11 = 0LL;
  v44 = a8;
  v45 = a9;
  v46 = a10;
  v49 = a11;
  DriverObject = PnpDriverObject;
  v53 = 0LL;
  v51 = 0LL;
  v38 = a4;
  v37 = a3;
  v47 = a5;
  v48 = a7;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v52 = 0LL;
  v40 = 0LL;
  FsInformation = 0LL;
  v34 = 0LL;
  NotificationEntry = 0LL;
  memset(FileHandle, 0, sizeof(FileHandle));
  v15 = *a7;
  v35 = 0;
  v33 = v15;
  EnableHardErrors = IoSetThreadHardErrorMode(0);
  if ( (a2 & 1) != 0 )
  {
    v16 = (HANDLE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
    v17 = *v16;
    v18 = (char *)v16[1];
    FileHandle[5] = v16[5];
    FileHandle[0] = v17;
    FileHandle[1] = v18;
    memset(v16, 0, 0x40uLL);
    a2 = 0LL;
    v19 = -1LL;
    v11 = v18;
  }
  else
  {
    v19 = *a5;
    v18 = (char *)FileHandle[1];
    v17 = FileHandle[0];
  }
  v32 = v19;
  if ( a4 > a3 )
  {
    Status = -1073741811;
    goto LABEL_40;
  }
  if ( a2 )
  {
    Status = SmKmStoreFileCreateForIoType(FileHandle, a2, &v33);
    if ( Status < 0 )
      goto LABEL_40;
    v17 = FileHandle[0];
    v35 = 1;
    FileInformation = v32;
    v21 = ZwSetInformationFile(FileHandle[0], &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
    v18 = (char *)FileHandle[1];
    Status = v21;
    if ( v21 == 259 )
    {
      KeWaitForSingleObject((char *)FileHandle[1] + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
LABEL_39:
      SmKmStoreFileDelete(FileHandle);
      goto LABEL_40;
    }
    v15 = v33;
    if ( v33 )
    {
      v40 = v32;
      v22 = ZwSetInformationFile(v17, &IoStatusBlock, &v40, 8u, FileValidDataLengthInformation);
      if ( v22 == 259 )
      {
        KeWaitForSingleObject(v18 + 152, Executive, 0, 0, 0LL);
        v22 = IoStatusBlock.Status;
      }
      if ( v22 < 0 )
        HIDWORD(v34) = 1;
    }
LABEL_20:
    v23 = v37;
    if ( v32 / v37 < 0xFFFFFFFFLL )
    {
      Status = ZwQueryVolumeInformationFile(v17, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(v18 + 152, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( !HIDWORD(v51)
          || ((HIDWORD(v51) - 1) & HIDWORD(v51)) != 0
          || HIDWORD(v51) > v38
          || HIDWORD(v51) > v23
          || HIDWORD(v51) > 0x1000 )
        {
          Status = -1070071787;
        }
        else
        {
          Status = SmKmStoreFileGetExtents(
                     v17,
                     v38,
                     v30,
                     v15,
                     (__int64)&v34,
                     (__int64)&FileHandle[6],
                     (__int64)&FileHandle[7]);
          if ( Status >= 0 )
          {
            if ( v15 || (Status = SmKmStoreFileOpenVolume(FileHandle[1], &FileHandle[2], &FileHandle[3]), Status >= 0) )
            {
              if ( !a2 || (Status = SmKmStoreFileWriteHeader(FileHandle, v15), Status >= 0) )
              {
                Status = IoRegisterPlugPlayNotification(
                           EventCategoryTargetDeviceChange,
                           0,
                           FileHandle[1],
                           DriverObject,
                           SmcVolumePnpNotification,
                           0LL,
                           &NotificationEntry);
                if ( Status >= 0 )
                {
                  v24 = *(_OWORD *)&FileHandle[2];
                  FileHandle[4] = NotificationEntry;
                  v25 = v44;
                  *v44 = *(_OWORD *)FileHandle;
                  v26 = *(_OWORD *)&FileHandle[4];
                  v25[1] = v24;
                  v27 = *(_OWORD *)&FileHandle[6];
                  v25[2] = v26;
                  v25[3] = v27;
                  memset(FileHandle, 0, sizeof(FileHandle));
                  Status = 0;
                  *v45 = HIDWORD(v51);
                  *v46 = v34;
                  *v47 = v32;
                  v28 = (_DWORD *)v49;
                  *v48 = v15;
                  *v28 = HIDWORD(v34);
                  goto LABEL_40;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      Status = -1073741811;
    }
    if ( !v35 )
      goto LABEL_40;
    goto LABEL_39;
  }
  Status = ZwQueryInformationFile(v17, &IoStatusBlock, &v52, 0x18u, FileStandardInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(v11 + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v32 = *((_QWORD *)&v52 + 1);
    goto LABEL_20;
  }
LABEL_40:
  SmKmFileInfoCleanup((__int64)FileHandle);
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)Status;
}
