/*
 * XREFs of SiGetEfiSystemDevice @ 0x140973DB0
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x1406024B0 (SiGetFirmwareSystemPartition.c)
 *     SiGetSystemDisk @ 0x14077AFB0 (SiGetSystemDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403FB080 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FCE00 (ZwQueryDirectoryObject.c)
 *     SiGetDriveLayoutInformation @ 0x14077AECC (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140973A2C (SiIssueSynchronousIoctl.c)
 *     SiDisambiguateSystemDevice @ 0x140973CE4 (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140974188 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x1409744FC (SiIsValidDiskDevice.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiGetEfiSystemDevice(int a1, __int64 a2, wchar_t **a3)
{
  wchar_t *v3; // rbx
  wchar_t **v4; // r15
  wchar_t **v5; // r14
  PVOID v6; // rdi
  unsigned int v7; // r12d
  int v8; // r13d
  wchar_t *PoolWithTag; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS EspFromFirmware; // ebx
  ULONG v13; // r15d
  SIZE_T i; // rdx
  NTSTATUS v15; // eax
  wchar_t **v16; // rbx
  __int64 v17; // rdx
  bool v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r9
  int DriveLayoutInformation; // eax
  unsigned int v22; // eax
  char *v23; // rcx
  __int64 v24; // rax
  bool v25; // cf
  NTSTATUS v26; // eax
  BOOLEAN RestartScan[8]; // [rsp+28h] [rbp-99h]
  int v29; // [rsp+48h] [rbp-79h] BYREF
  ULONG Context; // [rsp+4Ch] [rbp-75h] BYREF
  int v31; // [rsp+50h] [rbp-71h]
  unsigned int v32; // [rsp+54h] [rbp-6Dh] BYREF
  PVOID P; // [rsp+58h] [rbp-69h] BYREF
  HANDLE DirectoryHandle; // [rsp+60h] [rbp-61h] BYREF
  PVOID v35; // [rsp+68h] [rbp-59h]
  wchar_t *v36; // [rsp+70h] [rbp-51h]
  wchar_t **v37; // [rsp+78h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v40[2]; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v41; // [rsp+D0h] [rbp+Fh] BYREF
  __int128 v42; // [rsp+E0h] [rbp+1Fh]

  v31 = a1;
  v37 = a3;
  Context = 0;
  v3 = 0LL;
  DirectoryHandle = 0LL;
  v4 = a3;
  P = 0LL;
  v5 = 0LL;
  v36 = 0LL;
  v6 = 0LL;
  v32 = 0;
  v7 = 0;
  v29 = 0;
  v8 = 0;
  memset(v40, 0, 12);
  v41 = 0LL;
  v42 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x4B505953u);
  if ( !PoolWithTag )
  {
    EspFromFirmware = -1073741801;
    goto LABEL_55;
  }
  if ( (int)SiDisambiguateSystemDevice(&v32, &v29, v10, v11) >= 0 )
    goto LABEL_44;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EspFromFirmware = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( EspFromFirmware < 0 )
    goto LABEL_49;
  v13 = 4096;
  for ( i = 4096LL; ; i = v13 )
  {
    v5 = (wchar_t **)ExAllocatePoolWithTag(PagedPool, i, 0x4B505953u);
    v35 = v5;
    if ( !v5 )
    {
      EspFromFirmware = -1073741801;
      goto LABEL_49;
    }
    Context = 0;
    v15 = ZwQueryDirectoryObject(DirectoryHandle, v5, v13, 0, 1u, &Context, 0LL);
    EspFromFirmware = v15;
    if ( v15 != 261 )
      break;
    ExFreePoolWithTag(v5, 0);
    v13 += 4096;
  }
  if ( (int)(v15 + 0x80000000) >= 0 && v15 != -2147483622 )
  {
LABEL_42:
    if ( EspFromFirmware < 0 )
      goto LABEL_49;
    v3 = v36;
    v4 = v37;
LABEL_44:
    v25 = v31 != 0;
    v31 = -v31;
    *(_DWORD *)RestartScan = v25 ? v29 : 0;
    if ( v3 )
      v26 = RtlStringCbPrintfW(PoolWithTag, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v3, *(_QWORD *)RestartScan);
    else
      v26 = RtlStringCbPrintfW(
              PoolWithTag,
              0x6AuLL,
              L"\\Device\\Harddisk%lu\\Partition%lu",
              v32,
              *(_QWORD *)RestartScan);
    EspFromFirmware = v26;
    if ( v26 >= 0 )
    {
      *v4 = PoolWithTag;
      goto LABEL_51;
    }
LABEL_49:
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_51;
  }
  if ( !*(_WORD *)v5 )
  {
LABEL_46:
    EspFromFirmware = -1073740718;
    goto LABEL_49;
  }
  v16 = v5 + 1;
  do
  {
    if ( !(unsigned __int8)SiIsValidDiskDevice(*v16, v16[2]) )
      goto LABEL_34;
    RtlStringCbPrintfW(PoolWithTag, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *v16, 0LL);
    LODWORD(v40[0]) = 1;
    *(_QWORD *)((char *)v40 + 4) = 0LL;
    v18 = 0;
    v41 = 0LL;
    v42 = 0LL;
    if ( (int)SiIssueSynchronousIoctl(PoolWithTag, v19, v40, v20, &v41, 0x20u) >= 0 )
    {
      if ( BYTE8(v42) == 15 )
        goto LABEL_34;
      v18 = BYTE8(v42) == 16;
    }
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      P = 0LL;
    }
    DriveLayoutInformation = SiGetDriveLayoutInformation(PoolWithTag, &P);
    v6 = P;
    if ( DriveLayoutInformation >= 0 && *(_DWORD *)P == 1 )
    {
      v22 = *((_DWORD *)P + 1);
      if ( v22 )
      {
        v23 = (char *)P + 72;
        v17 = v22;
        do
        {
          v24 = *((_QWORD *)v23 + 1) - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
          if ( !v24 )
            v24 = *((_QWORD *)v23 + 2) - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
          if ( !v24 )
          {
            if ( !v7 || !v8 && v18 )
            {
              v36 = *v16;
              v29 = *(_DWORD *)v23;
            }
            ++v7;
            if ( v18 )
              ++v8;
          }
          v23 += 144;
          --v17;
        }
        while ( v17 );
      }
    }
LABEL_34:
    v16 += 4;
  }
  while ( *((_WORD *)v16 - 4) );
  v5 = (wchar_t **)v35;
  if ( !v7 )
    goto LABEL_46;
  if ( v7 <= 1 || v8 == 1 )
  {
    EspFromFirmware = 0;
    goto LABEL_42;
  }
  EspFromFirmware = SiGetEspFromFirmware(PoolWithTag, v17, 0LL, 1LL);
  if ( EspFromFirmware < 0 )
  {
    EspFromFirmware = -1073740719;
    goto LABEL_49;
  }
  *v37 = PoolWithTag;
LABEL_51:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_55:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)EspFromFirmware;
}
