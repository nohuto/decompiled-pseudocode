/*
 * XREFs of ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C01D0208
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01CFECC (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01D011C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C020F290 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0306E54 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpGetFileVersion(struct _UNICODE_STRING *a1, union _LARGE_INTEGER *a2, int *a3)
{
  PVOID v5; // r15
  char v6; // r12
  NTSTATUS v7; // eax
  __int64 v8; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  int v11; // eax
  int Resource; // eax
  __int64 v13; // rcx
  const wchar_t *v15; // r9
  int v16; // eax
  unsigned __int64 v17; // [rsp+58h] [rbp-F0h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-D8h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-D0h] BYREF
  void *FileHandle; // [rsp+80h] [rbp-C8h] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-70h] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  v5 = 0LL;
  SectionHandle = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  MappedBase = 0LL;
  v6 = 1;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a3 )
    *a3 = 0;
  v20 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0x1200A9u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v8 = v7;
  if ( a3 )
    *a3 = v7;
  if ( v7 < 0 )
  {
    if ( a3 )
      goto LABEL_14;
    WdLogSingleEntry1(2LL, v7);
    v15 = L"Failed ZwOpenFile in DxgkpGetFileVersion (ntStatus = %I64d).";
    goto LABEL_28;
  }
  ObjectAttributes.ObjectName = 0LL;
  v9 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x11000000u, FileHandle);
  v8 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    v15 = L"Failed to create the section on the opened file in DxgkpGetFileVersion (ntStatus = %I64d).";
LABEL_28:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_14;
  }
  Object[0] = 0LL;
  v10 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, Object, 0LL);
  v8 = v10;
  v5 = Object[0];
  Object[1] = Object[0];
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    v15 = L"Failed to get the section object from the file in DxgkpGetFileVersion (ntStatus = %I64d).";
    goto LABEL_28;
  }
  v11 = MmMapViewInSystemSpaceEx(Object[0], &MappedBase, &v17, &v19, 1LL);
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(3LL, v11);
    MappedBase = 0LL;
    v17 = 0LL;
    v19 = 0LL;
    v6 = 0;
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    v16 = MmMapViewOfSection(v5, PsInitialSystemProcess, &MappedBase, 0LL, 0LL, &v19, &v17, 2, 0, 2, 0);
    v8 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v16);
      v15 = L"Failed to map the file with MmMapViewOfSection in DxgkpGetFileVersion (ntStatus = %I64d).";
      goto LABEL_28;
    }
  }
  a2->QuadPart = 0LL;
  Resource = LdrResFindResource(MappedBase, 16LL, 1LL, 0LL, &v20, &v17, 0LL, 0LL, 16);
  v8 = Resource;
  if ( Resource < 0 )
  {
    WdLogSingleEntry1(2LL, Resource);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the file version resource in DxgkpGetFileVersion (ntStatus = %I64d).",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v8) = 0;
  }
  else if ( v17 >= 0x5C && !wcsncmp((const wchar_t *)(v20 + 6), L"VS_VERSION_INFO", 0x20uLL) )
  {
    v13 = v20;
    a2->HighPart = *(_DWORD *)(v20 + 48);
    a2->LowPart = *(_DWORD *)(v13 + 52);
  }
LABEL_14:
  if ( MappedBase )
  {
    if ( v6 )
      MmUnmapViewInSystemSpace(MappedBase);
    else
      MmUnmapViewOfSection(PsInitialSystemProcess);
  }
  if ( !v6 )
    KeUnstackDetachProcess(&ApcState);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v8;
}
