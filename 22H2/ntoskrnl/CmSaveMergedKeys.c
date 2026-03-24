/*
 * XREFs of CmSaveMergedKeys @ 0x14087CAE0
 * Callers:
 *     NtSaveMergedKeys @ 0x1408697F0 (NtSaveMergedKeys.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpLockTwoKcbsShared @ 0x1405F38C0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     CmUnlockHiveSecurity @ 0x1406E2FD4 (CmUnlockHiveSecurity.c)
 *     CmpBlockTwoHiveWrites @ 0x1406EB244 (CmpBlockTwoHiveWrites.c)
 *     CmpUuidCreate @ 0x14070D95C (CmpUuidCreate.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14071D558 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14071D590 (HvLockHiveFlusherExclusive.c)
 *     CmpDestroyHive @ 0x140729DF8 (CmpDestroyHive.c)
 *     HvWriteExternal @ 0x140729E60 (HvWriteExternal.c)
 *     CmpCreateTemporaryHive @ 0x14072B2BC (CmpCreateTemporaryHive.c)
 *     CmpCopyKeyPartial @ 0x14076F54C (CmpCopyKeyPartial.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140871B14 (CmpDoAccessCheckOnSubtree.c)
 *     CmLockHiveSecurityShared @ 0x140875BD8 (CmLockHiveSecurityShared.c)
 *     CmpLogUnsupportedOperation @ 0x14087639C (CmpLogUnsupportedOperation.c)
 *     CmpCopySyncTree @ 0x140878534 (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x1408794D0 (CmpMergeKeyValues.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rcx
  ULONG_PTR TemporaryHive; // rdi
  __int64 v7; // r14
  __int64 v8; // r12
  _DWORD *v9; // r13
  __int64 v10; // rsi
  char v11; // r15
  int v12; // ebx
  ULONG_PTR v13; // r13
  ULONG_PTR v14; // r12
  int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  const GUID *v22; // r9
  __int64 v24; // [rsp+28h] [rbp-A1h]
  char v25; // [rsp+40h] [rbp-89h]
  ULONG_PTR v27; // [rsp+48h] [rbp-81h]
  ULONG_PTR v28; // [rsp+50h] [rbp-79h]
  unsigned int v29; // [rsp+58h] [rbp-71h]
  _DWORD v30[2]; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v31[2]; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-59h]
  __int64 v33; // [rsp+78h] [rbp-51h] BYREF
  __int64 v34; // [rsp+80h] [rbp-49h]
  __int64 v35; // [rsp+88h] [rbp-41h]
  UUID v36; // [rsp+90h] [rbp-39h] BYREF
  UUID Uuid; // [rsp+A0h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v39; // [rsp+D0h] [rbp+7h]
  __int64 v40; // [rsp+D8h] [rbp+Fh]

  v34 = a1;
  v33 = a3;
  v31[1] = 0;
  v30[1] = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  v31[0] = -1;
  v30[0] = -1;
  Uuid = 0LL;
  v27 = v4;
  TemporaryHive = 0LL;
  v36 = 0LL;
  v7 = *(_QWORD *)(v4 + 32);
  v8 = 0LL;
  v9 = 0LL;
  v10 = *(_QWORD *)(v5 + 32);
  v11 = 0;
  v32 = *(_DWORD *)(v4 + 40);
  LODWORD(v4) = *(_DWORD *)(v5 + 40);
  v28 = v5;
  v35 = a2;
  v29 = v4;
  v25 = 0;
  v12 = CmpUuidCreate(&Uuid);
  if ( v12 < 0 )
    goto LABEL_41;
  v12 = CmpUuidCreate(&v36);
  if ( v12 < 0 )
    goto LABEL_41;
  if ( v10 == CmpMasterHive || v7 == CmpMasterHive )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      v33 = 0x1000000LL;
      v39 = &v33;
      v40 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_140023BA5,
        0LL,
        v22,
        3u,
        &v38);
    }
    v12 = -1073741790;
    goto LABEL_37;
  }
  if ( v10 == v7 )
  {
    v12 = -1073741811;
LABEL_41:
    v13 = v28;
    goto LABEL_42;
  }
  CmpLockRegistry();
  v13 = v28;
  v14 = v27;
  CmpLockTwoKcbsShared(v27, v28);
  v25 = 1;
  if ( *(_WORD *)(v27 + 66) || *(_WORD *)(v28 + 66) )
  {
    CmpLogUnsupportedOperation(0x13u);
    v12 = -1073741822;
    goto LABEL_43;
  }
  if ( CmpIsKeyDeletedForKeyBody(v34, 0LL) || CmpIsKeyDeletedForKeyBody(v35, 0LL) )
  {
    v12 = -1073741444;
    goto LABEL_43;
  }
  if ( (*(_DWORD *)(v7 + 160) & 2) != 0 && *(_DWORD *)(v7 + 104)
    || (*(_DWORD *)(v10 + 160) & 2) != 0 && *(_DWORD *)(v10 + 104) )
  {
    v12 = -1073741811;
    goto LABEL_43;
  }
  TemporaryHive = CmpCreateTemporaryHive((__int64)&Uuid, (__int64)&v36);
  if ( !TemporaryHive )
  {
    v12 = -1073741670;
    goto LABEL_43;
  }
  v12 = CmpBlockTwoHiveWrites(v10, v7, 0);
  if ( v12 >= 0 )
  {
    v11 = 6;
    CmLockHiveSecurityShared(v7);
    v15 = v32;
    LOBYTE(v16) = a4;
    v12 = CmpDoAccessCheckOnSubtree(v7, v32, v16, (struct _LOOKASIDE_LIST_EX *)0x20019, 3);
    CmUnlockHiveSecurity(v7);
    if ( v12 < 0 )
      goto LABEL_42;
    CmLockHiveSecurityShared(v10);
    LOBYTE(v17) = a4;
    v12 = CmpDoAccessCheckOnSubtree(v10, v29, v17, (struct _LOOKASIDE_LIST_EX *)0x20019, 3);
    CmUnlockHiveSecurity(v10);
    if ( v12 < 0 )
      goto LABEL_42;
    HvLockHiveFlusherExclusive(TemporaryHive);
    v11 = 7;
    v18 = CmpCopyKeyPartial(v7, v32, TemporaryHive, 0xFFFFFFFF, 6, v24, 0);
    if ( v18 == -1
      || (*(_DWORD *)(*(_QWORD *)(TemporaryHive + 64) + 36LL) = v18, !CmpCopySyncTree(v7, v15, TemporaryHive, v18, 2, 0)) )
    {
      v12 = -1073741670;
LABEL_42:
      v14 = v27;
      goto LABEL_43;
    }
    HvUnlockHiveFlusherExclusive(v7);
    v11 = 5;
    v9 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v10 + 8))(v10, v29, v30);
    if ( !v9 )
      goto LABEL_25;
    v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(TemporaryHive + 8))(TemporaryHive, v18, v31);
    v8 = v19;
    if ( v19 && CmpMergeKeyValues(v10, v20, v9, TemporaryHive, v18, v19) )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(v10 + 16))(v10, v30);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(TemporaryHive + 16))(TemporaryHive, v31);
      if ( CmpCopySyncTree(v10, v29, TemporaryHive, v18, 2, 2) )
      {
        HvUnlockHiveFlusherExclusive(v10);
        HvUnlockHiveFlusherExclusive(TemporaryHive);
        v13 = v28;
        v11 = 0;
        v14 = v27;
        CmpUnlockTwoKcbs(v27, v28);
        CmpUnlockRegistry();
        *(_QWORD *)(TemporaryHive + 1552) = v33;
        v25 = 0;
        v21 = HvWriteExternal(TemporaryHive);
        *(_QWORD *)(TemporaryHive + 1552) = 0LL;
        v12 = v21;
        goto LABEL_43;
      }
LABEL_25:
      v12 = -1073741670;
      goto LABEL_41;
    }
    v12 = -1073741670;
LABEL_37:
    if ( v9 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v10 + 16))(v10, v30);
    if ( v8 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(TemporaryHive + 16))(TemporaryHive, v31);
    goto LABEL_41;
  }
LABEL_43:
  if ( (v11 & 4) != 0 )
    HvUnlockHiveFlusherExclusive(v10);
  if ( (v11 & 2) != 0 )
    HvUnlockHiveFlusherExclusive(v7);
  if ( (v11 & 1) != 0 )
    HvUnlockHiveFlusherExclusive(TemporaryHive);
  if ( v25 )
  {
    CmpUnlockTwoKcbs(v14, v13);
    CmpUnlockRegistry();
  }
  if ( TemporaryHive )
    CmpDestroyHive((volatile signed __int32 *)TemporaryHive);
  return (unsigned int)v12;
}
