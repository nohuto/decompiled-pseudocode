/*
 * XREFs of SiGetEfiSystemDevice @ 0x140A5CDB0
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x14076E380 (SiGetFirmwareSystemPartition.c)
 *     SiGetSystemDisk @ 0x14087C0C0 (SiGetSystemDisk.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140412E10 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x140414C90 (ZwQueryDirectoryObject.c)
 *     SiGetDriveLayoutInformation @ 0x140A5C928 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140A5CA28 (SiIssueSynchronousIoctl.c)
 *     SiDisambiguateSystemDevice @ 0x140A5CCE4 (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140A5D1A4 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140A5D574 (SiIsValidDiskDevice.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEfiSystemDevice(unsigned int a1, __int64 a2, wchar_t **a3)
{
  wchar_t **v3; // r15
  wchar_t *v4; // rbx
  wchar_t **v5; // r14
  PVOID v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // r8
  __int64 v9; // r9
  wchar_t *v10; // rdi
  NTSTATUS EspFromFirmware; // ebx
  unsigned int v12; // r15d
  __int64 i; // rdx
  NTSTATUS DirectoryObject; // eax
  int v15; // r12d
  wchar_t **v16; // rbx
  bool v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r9
  int DriveLayoutInformation; // eax
  unsigned int v21; // eax
  int v22; // edi
  char *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // cf
  NTSTATUS v27; // eax
  __int64 v29; // [rsp+28h] [rbp-A9h]
  int *v30; // [rsp+30h] [rbp-A1h]
  __int64 v31; // [rsp+38h] [rbp-99h]
  int v32; // [rsp+48h] [rbp-89h]
  int v33; // [rsp+4Ch] [rbp-85h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-81h]
  int v35; // [rsp+54h] [rbp-7Dh] BYREF
  unsigned int v36; // [rsp+58h] [rbp-79h] BYREF
  PVOID P; // [rsp+60h] [rbp-71h] BYREF
  wchar_t *v38; // [rsp+68h] [rbp-69h]
  wchar_t **v39; // [rsp+70h] [rbp-61h]
  HANDLE DirectoryHandle; // [rsp+78h] [rbp-59h] BYREF
  __int64 Pool2; // [rsp+80h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-9h] BYREF
  int v45; // [rsp+D0h] [rbp-1h]
  __int128 v46; // [rsp+D8h] [rbp+7h] BYREF
  __int128 v47; // [rsp+E8h] [rbp+17h]

  v39 = a3;
  v34 = a1;
  v35 = 0;
  v3 = a3;
  v4 = 0LL;
  v44 = 0LL;
  v45 = 0;
  DirectoryHandle = 0LL;
  v46 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v47 = 0LL;
  P = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  v38 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v36 = 0;
  v33 = 0;
  v32 = 0;
  Pool2 = ExAllocatePool2(256LL, 106LL, 1263556947LL);
  v10 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    EspFromFirmware = -1073741801;
    goto LABEL_55;
  }
  if ( (int)SiDisambiguateSystemDevice(&v36, &v33, v8, v9) >= 0 )
  {
    v15 = v33;
    goto LABEL_45;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EspFromFirmware = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( EspFromFirmware < 0 )
    goto LABEL_49;
  v12 = 4096;
  for ( i = 4096LL; ; i = v12 )
  {
    v5 = (wchar_t **)ExAllocatePool2(256LL, i, 1263556947LL);
    if ( !v5 )
    {
      EspFromFirmware = -1073741801;
      goto LABEL_49;
    }
    v31 = 0LL;
    v30 = &v35;
    LOBYTE(v29) = 1;
    v35 = 0;
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v5);
    EspFromFirmware = DirectoryObject;
    if ( DirectoryObject != 261 )
      break;
    ExFreePoolWithTag(v5, 0);
    v12 += 4096;
  }
  if ( (int)(DirectoryObject + 0x80000000) >= 0 && DirectoryObject != -2147483622 )
    goto LABEL_49;
  if ( !*(_WORD *)v5 )
  {
LABEL_42:
    EspFromFirmware = -1073740718;
    goto LABEL_49;
  }
  v15 = v33;
  v16 = v5 + 1;
  do
  {
    if ( !(unsigned __int8)SiIsValidDiskDevice(*v16, v16[2]) )
      goto LABEL_35;
    RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *v16, 0LL, v30, v31);
    v45 = 0;
    v46 = 0LL;
    v44 = 1LL;
    v17 = 0;
    v47 = 0LL;
    if ( (int)SiIssueSynchronousIoctl(v10, v18, &v44, v19, &v46, 0x20u) >= 0 )
    {
      if ( BYTE8(v47) == 15 )
        goto LABEL_35;
      v17 = BYTE8(v47) == 16;
    }
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      P = 0LL;
    }
    DriveLayoutInformation = SiGetDriveLayoutInformation(v10, &P);
    v6 = P;
    if ( DriveLayoutInformation >= 0 && *(_DWORD *)P == 1 )
    {
      v21 = *((_DWORD *)P + 1);
      if ( v21 )
      {
        v22 = v32;
        v23 = (char *)P + 72;
        v24 = v21;
        do
        {
          v25 = *((_QWORD *)v23 + 1) - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
          if ( !v25 )
            v25 = *((_QWORD *)v23 + 2) - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
          if ( !v25 )
          {
            if ( !v7 || !v22 && v17 )
            {
              v15 = *(_DWORD *)v23;
              v38 = *v16;
            }
            ++v7;
            if ( v17 )
              ++v22;
          }
          v23 += 144;
          --v24;
        }
        while ( v24 );
        v32 = v22;
        v10 = (wchar_t *)Pool2;
      }
    }
LABEL_35:
    v16 += 4;
  }
  while ( *((_WORD *)v16 - 4) );
  if ( !v7 )
    goto LABEL_42;
  if ( v7 <= 1 || v32 == 1 )
  {
    v3 = v39;
    v4 = v38;
LABEL_45:
    v26 = v34 != 0;
    v34 = -v34;
    LODWORD(v29) = v26 ? v15 : 0;
    if ( v4 )
      v27 = RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v4, v29);
    else
      v27 = RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v36, v29);
    EspFromFirmware = v27;
    if ( v27 >= 0 )
    {
      *v3 = v10;
      goto LABEL_51;
    }
LABEL_49:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_51;
  }
  EspFromFirmware = SiGetEspFromFirmware(v34, v10, 0LL, 1LL, v29);
  if ( EspFromFirmware < 0 )
  {
    EspFromFirmware = -1073740719;
    goto LABEL_49;
  }
  *v39 = v10;
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
