/*
 * XREFs of BcdOpenObject @ 0x140783940
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC690 (WheaPersistBadPageToBcd.c)
 *     PopBcdSetPendingResume @ 0x140777F80 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140781C60 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140782180 (PopBcdEstablishResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140924238 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14096F218 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140970200 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14097043C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140970678 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x140970978 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x140971320 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140971C10 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140972EE0 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409731BC (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039AE9C (BiIsOfflineHandle.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406F35C8 (RtlStringFromGUIDEx.c)
 *     BiOpenKey @ 0x140784304 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078448C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784674 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784838 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140784C9C (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x140784E9C (BiIsObjectAliased.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140785E08 (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14096F218 (BiGetDefaultBootEntryIdentifier.c)
 */

NTSTATUS __cdecl BcdOpenObject(HANDLE BcdStoreHandle, const GUID *Identifier, PHANDLE BcdObjectHandle)
{
  __int64 v6; // rcx
  char v7; // r12
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  wchar_t *Buffer; // rdi
  int v12; // eax
  __int64 v13; // rcx
  NTSTATUS CurrentBootEntryIdentifier; // eax
  NTSTATUS v15; // eax
  const wchar_t *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING GuidString; // [rsp+28h] [rbp-28h] BYREF
  GUID Guid; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  v21 = 0;
  Guid = 0LL;
  LOBYTE(v6) = BiIsOfflineHandle((char)BcdStoreHandle);
  v7 = v6;
  result = BiAcquireBcdSyncMutant(v6);
  if ( result < 0 )
    return result;
  *BcdObjectHandle = 0LL;
  v18 = 0LL;
  GuidString.Buffer = 0LL;
  v9 = RtlStringFromGUIDEx((PGUID)Identifier, &GuidString, 1u);
  v10 = v9;
  if ( v9 < 0 )
  {
    BiLogMessage(4LL, L"Failed to get object identifier. Status: %x", (unsigned int)v9);
    goto LABEL_20;
  }
  Buffer = GuidString.Buffer;
  BiLogMessage(2LL, L"Opening object %s", GuidString.Buffer);
  v12 = BiOpenKey(BcdStoreHandle, L"Objects", 131097LL, &v18);
  v10 = v12;
  if ( v12 < 0 )
  {
    v16 = L"Failed to open key for all objects. Status: %x";
    v17 = 4LL;
LABEL_28:
    BiLogMessage(v17, v16, (unsigned int)v12);
    goto LABEL_6;
  }
  if ( (unsigned __int8)BiIsObjectAliased(Identifier, &v21) )
  {
    if ( v21 == 1 )
    {
      CurrentBootEntryIdentifier = BiGetCurrentBootEntryIdentifier(&Guid);
    }
    else
    {
      if ( v21 != 2 )
      {
        v10 = -1073741811;
        goto LABEL_15;
      }
      CurrentBootEntryIdentifier = BiGetDefaultBootEntryIdentifier(BcdStoreHandle, &Guid);
    }
    v10 = CurrentBootEntryIdentifier;
LABEL_15:
    if ( v10 < 0 )
    {
      BiLogMessage(4LL, L"Failed to get aliased identifier. Status: %x", (unsigned int)v10);
      goto LABEL_6;
    }
    RtlFreeAnsiString(&GuidString);
    GuidString.Buffer = 0LL;
    v15 = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
    v10 = v15;
    if ( v15 >= 0 )
    {
      Buffer = GuidString.Buffer;
      BiLogMessage(2LL, L"Object alias resolves to %s", GuidString.Buffer);
      goto LABEL_5;
    }
    BiLogMessage(4LL, L"Failed to update object GUID string. Status: %x", (unsigned int)v15);
LABEL_20:
    Buffer = GuidString.Buffer;
    goto LABEL_6;
  }
LABEL_5:
  v12 = BiOpenKey(v18, Buffer, 983103LL, BcdObjectHandle);
  v10 = v12;
  if ( v12 < 0 )
  {
    v16 = L"Failed to open object's key. Status: %x";
    v17 = 4LL;
    if ( v12 == -1073741772 )
      v17 = 2LL;
    goto LABEL_28;
  }
LABEL_6:
  if ( Buffer )
    RtlFreeAnsiString(&GuidString);
  v13 = v18;
  if ( v18 )
    BiCloseKey(v18);
  LOBYTE(v13) = v7;
  BiReleaseBcdSyncMutant(v13);
  return v10;
}
