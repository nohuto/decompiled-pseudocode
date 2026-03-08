/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x140A152D4
 * Callers:
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KCBNeedsVirtualImage @ 0x1402DD15C (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1409C6FC8 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpReparseToVirtualPath @ 0x140A17264 (CmpReparseToVirtualPath.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByName @ 0x140AF2458 (CmObReferenceObjectByName.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  int AccessStateFromSubjectContext; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r9d
  int v27; // eax
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+7Ch] [rbp-84h]
  __int128 v36; // [rsp+80h] [rbp-80h]
  _OWORD v37[19]; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v39[5]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v40[28]; // [rsp+290h] [rbp+190h] BYREF

  DestinationString = 0LL;
  memset(v39, 0, sizeof(v39));
  memset(v40, 0, sizeof(v40));
  v31[1] = 0;
  v35 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v37, 0, 0x128uLL);
  LODWORD(v37[6]) = -1;
  *((_QWORD *)&v37[9] + 1) = &v37[9];
  *(_QWORD *)&v37[9] = &v37[9];
  memset((char *)&v37[13] + 8, 0, 0x50uLL);
  v8 = *a1;
  v29 = 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_WORD *)(v9 + 66)
    || (*(_DWORD *)(v8 + 48) & 0x10) != 0
    || !KCBNeedsVirtualImage()
    || (v11 = *(_DWORD *)(v9 + 184), (v11 & 0x800000) == 0)
    || (v11 & 0x20) != 0 )
  {
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_12;
  }
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v13, v12, v14, v15);
  CmpLockKcbShared(v9);
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( (unsigned __int8)CmpReparseToVirtualPath(v9, v16, a4, &DestinationString) )
    {
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry(v23, v22, v24, v25);
      LODWORD(v37[1]) = *a5;
      LODWORD(v37[0]) = 8;
      *((_QWORD *)&v37[4] + 1) = *(_QWORD *)(v8 + 56);
      AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                        a4,
                                        v39,
                                        v40,
                                        a3,
                                        (_DWORD *)CmKeyObjectType + 19);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v32 = 0LL;
        v27 = 1600;
        v31[0] = 48;
        if ( a2 != 1 )
          v27 = 576;
        v34 = v27;
        p_DestinationString = &DestinationString;
        v36 = 0LL;
        if ( (int)CmObReferenceObjectByName(
                    (unsigned int)v31,
                    (unsigned int)v39,
                    a3,
                    v26,
                    0,
                    (__int64)v37,
                    (__int64)&v29) >= 0 )
        {
          *a1 = v29;
          ObfDereferenceObject((PVOID)v8);
          AccessStateFromSubjectContext = 0;
        }
        else
        {
          AccessStateFromSubjectContext = -1073741790;
        }
        SepDeleteAccessState((__int64)v39);
        SeReleaseSubjectContext(&v39[1]);
      }
      goto LABEL_11;
    }
    AccessStateFromSubjectContext = -1073741790;
  }
  CmpUnlockKcb(v9);
  CmpUnlockRegistry(v18, v17, v19, v20);
LABEL_11:
  CmpDetachFromRegistryProcess(&ApcState);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  CmpCleanupParseContext(v37, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
