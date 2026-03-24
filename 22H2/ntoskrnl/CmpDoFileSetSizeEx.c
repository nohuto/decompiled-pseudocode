/*
 * XREFs of CmpDoFileSetSizeEx @ 0x140723DD0
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14071BF04 (CmpCompleteUnloadKey.c)
 *     HvWriteLogFile @ 0x14071CE2C (HvWriteLogFile.c)
 *     HvpAddBin @ 0x140721E28 (HvpAddBin.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1407237B8 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140724BD8 (HvTruncateAllLogFilesIfRequired.c)
 *     HvWriteExternal @ 0x140729E60 (HvWriteExternal.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AB024 (CmpMountPreloadedHives.c)
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 *     HvpPerformLogFileRecovery @ 0x14087410C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14024FB60 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x1403F9F00 (ZwSetInformationFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140723A2C (HvpLogTypeToLogArrayIndex.c)
 *     CmpAdjustRequestedFileSize @ 0x140724364 (CmpAdjustRequestedFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  void *v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  BOOLEAN v10; // r15
  NTSTATUS v11; // eax
  int v12; // edi
  unsigned __int64 FileInformation; // [rsp+30h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  FileInformation = 0LL;
  v15 = 0LL;
  IoStatusBlock = 0LL;
  v6 = *(void **)(a1 + 8LL * a2 + 1536);
  if ( !v6 )
    return 0LL;
  if ( a2 )
    v7 = a2 - 4 <= 1 || a2 == 1 ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 1800) : 0LL;
  else
    v7 = *(_QWORD *)(a1 + 1792);
  if ( (a4 & 1) != 0 && v7 && a3 <= v7 )
    return 0LL;
  v9 = CmpAdjustRequestedFileSize(a1, a2, v7, a3);
  v10 = IoSetThreadHardErrorMode(0);
  if ( v9 < v7 )
  {
    v15 = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &v15, 8u, FileAllocationInformation);
  }
  else
  {
    FileInformation = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  }
  v12 = v11;
  if ( v11 < 0 )
    goto LABEL_24;
  if ( a2 )
  {
    if ( a2 - 4 <= 1 || a2 == 1 )
      *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 1800) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 1792) = v9;
  }
  if ( v12 < 0 )
  {
LABEL_24:
    CmRegistryIODebug = 3;
    qword_140D2EA98 = (__int64)v6;
    dword_140D2EAA0 = v12;
  }
  IoSetThreadHardErrorMode(v10);
  return (unsigned int)v12;
}
