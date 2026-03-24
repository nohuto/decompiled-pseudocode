/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x14086F870
 * Callers:
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1406E5000 (NtDeleteKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KCBNeedsVirtualImage @ 0x140314E3C (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     CmpLockKcbShared @ 0x140640230 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x1406854AC (CmpReparseToVirtualPath.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D21C (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  ULONG_PTR v9; // rdi
  int AccessStateFromSubjectContext; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // r9
  int v18; // eax
  struct _DMA_ADAPTER *v20; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  __int128 v27; // [rsp+80h] [rbp-80h]
  _OWORD v28[19]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v29[3]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v30[5]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v31[224]; // [rsp+290h] [rbp+190h] BYREF

  DestinationString = 0LL;
  memset(v30, 0, sizeof(v30));
  memset(v31, 0, sizeof(v31));
  v22[1] = 0;
  v26 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v29, 0, sizeof(v29));
  memset(v28, 0, 0x128uLL);
  LODWORD(v28[6]) = -1;
  *((_QWORD *)&v28[9] + 1) = &v28[9];
  *(_QWORD *)&v28[9] = &v28[9];
  memset((char *)&v28[13] + 8, 0, 0x50uLL);
  v8 = *a1;
  v20 = 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_WORD *)(v9 + 66)
    || (*(_DWORD *)(v8 + 48) & 0x10) != 0
    || !KCBNeedsVirtualImage()
    || (v14 = *(_DWORD *)(v9 + 184), (v14 & 0x800000) == 0)
    || (v14 & 0x20) != 0 )
  {
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_12;
  }
  CmpAttachToRegistryProcess((__int64)v29, v11, v12, v13);
  CmpLockRegistry();
  CmpLockKcbShared(v9);
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( CmpReparseToVirtualPath(v9, v15, a4, &DestinationString) )
    {
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry();
      LODWORD(v28[1]) = *a5;
      LODWORD(v28[0]) = 8;
      *((_QWORD *)&v28[4] + 1) = *(_QWORD *)(v8 + 56);
      AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                        a4,
                                        (unsigned int)v30,
                                        (unsigned int)v31,
                                        a3,
                                        (__int64)CmKeyObjectType + 76);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v23 = 0LL;
        v18 = 1600;
        v22[0] = 48;
        if ( a2 != 1 )
          v18 = 576;
        v25 = v18;
        p_DestinationString = &DestinationString;
        v27 = 0LL;
        if ( (int)CmObReferenceObjectByName((int)v22, (int)v30, a3, v17, 0, (__int64)v28, &v20) >= 0 )
        {
          *a1 = (__int64)v20;
          HalPutDmaAdapter((PADAPTER_OBJECT)v8);
          AccessStateFromSubjectContext = 0;
        }
        else
        {
          AccessStateFromSubjectContext = -1073741790;
        }
        SeDeleteAccessState(v30);
      }
      goto LABEL_11;
    }
    AccessStateFromSubjectContext = -1073741790;
  }
  CmpUnlockKcb(v9);
  CmpUnlockRegistry();
LABEL_11:
  CmpDetachFromRegistryProcess((__int64)v29);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v28, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
