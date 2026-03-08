/*
 * XREFs of CmSaveMergedKeys @ 0x140A09144
 * Callers:
 *     NtSaveMergedKeys @ 0x140A0C200 (NtSaveMergedKeys.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpUuidCreate @ 0x140733C60 (CmpUuidCreate.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyKeyPartial @ 0x14078ECB4 (CmpCopyKeyPartial.c)
 *     CmpLockTwoKcbsShared @ 0x1407ACF00 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1407ACF58 (CmpUnlockTwoKcbs.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpCreateTemporaryHive @ 0x140A09630 (CmpCreateTemporaryHive.c)
 *     CmpBlockTwoHiveWrites @ 0x140A10BB8 (CmpBlockTwoHiveWrites.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 *     CmpLogUnsupportedOperation @ 0x140A1D140 (CmpLogUnsupportedOperation.c)
 *     HvWriteExternal @ 0x140A1DE94 (HvWriteExternal.c)
 *     CmpCopySyncTree @ 0x140A1E748 (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x140A1F628 (CmpMergeKeyValues.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmLockHiveSecurityShared @ 0x140AF2590 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AF25F0 (CmUnlockHiveSecurity.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AF2AFC (CmpDoAccessCheckOnSubtree.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rdi
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rsi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r14
  unsigned int v16; // r12d
  int v17; // r9d
  unsigned int v18; // edx
  __int64 CellFlat; // rax
  __int64 CellPaged; // rax
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG_PTR v31; // [rsp+28h] [rbp-91h]
  int BugCheckParameter4; // [rsp+44h] [rbp-75h] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+48h] [rbp-71h]
  __int64 v34; // [rsp+50h] [rbp-69h] BYREF
  __int64 v35; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v36; // [rsp+60h] [rbp-59h]
  unsigned __int64 v37; // [rsp+68h] [rbp-51h]
  unsigned __int64 v38; // [rsp+70h] [rbp-49h]
  __int64 v39; // [rsp+78h] [rbp-41h] BYREF
  UUID v40; // [rsp+80h] [rbp-39h] BYREF
  UUID Uuid; // [rsp+90h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+A0h] [rbp-19h] BYREF
  __int64 *v43; // [rsp+C0h] [rbp+7h]
  __int64 v44; // [rsp+C8h] [rbp+Fh]

  BugCheckParameter4 = 0;
  v39 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v35 = 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = 0LL;
  v34 = 0xFFFFFFFFLL;
  Uuid = 0LL;
  v38 = v5;
  v40 = 0LL;
  v8 = *(_QWORD *)(v5 + 32);
  v9 = *(_QWORD *)(v6 + 32);
  v36 = *(_DWORD *)(v5 + 40);
  BugCheckParameter4_4 = *(_DWORD *)(v6 + 40);
  v37 = v6;
  v10 = CmpUuidCreate(&Uuid);
  if ( v10 >= 0 )
  {
    v10 = CmpUuidCreate(&v40);
    if ( v10 >= 0 )
    {
      if ( v9 != CmpMasterHive && v8 != CmpMasterHive )
      {
        if ( v9 == v8 )
          return (unsigned int)-1073741811;
        CmpLockRegistry(v12, v11, v13, v14);
        CmpLockTwoKcbsShared(v38, v6);
        if ( *(_WORD *)(v38 + 66) || *(_WORD *)(v37 + 66) )
        {
          CmpLogUnsupportedOperation(19LL);
          v10 = -1073741822;
          goto LABEL_56;
        }
        if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, 0LL) )
        {
          v10 = -1073741444;
          goto LABEL_56;
        }
        if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104)
          || (*(_DWORD *)(v9 + 160) & 2) != 0 && *(_DWORD *)(v9 + 104) )
        {
          v10 = -1073741811;
          goto LABEL_56;
        }
        v7 = CmpCreateTemporaryHive(&Uuid, &v40);
        if ( !v7 )
        {
          v10 = -1073741670;
          goto LABEL_56;
        }
        v10 = CmpBlockTwoHiveWrites((PVOID)v9);
        if ( v10 < 0 )
        {
LABEL_56:
          CmpUnlockTwoKcbs(v38, v37);
          CmpUnlockRegistry(v27, v26, v28, v29);
          if ( !v7 )
            return (unsigned int)v10;
LABEL_57:
          CmpDestroyHive((PVOID)v7);
          return (unsigned int)v10;
        }
        v15 = 6;
        CmLockHiveSecurityShared(v8);
        v10 = CmpDoAccessCheckOnSubtree(v8, 3);
        CmUnlockHiveSecurity(v8);
        if ( v10 >= 0 )
        {
          CmLockHiveSecurityShared(v9);
          v10 = CmpDoAccessCheckOnSubtree(v9, 3);
          CmUnlockHiveSecurity(v9);
          if ( v10 >= 0 )
          {
            HvLockHiveFlusherExclusive(v7);
            v15 = 7;
            v10 = CmpCopyKeyPartial(v8, v36, v7, -1, 6, v31, 0, (unsigned int *)&BugCheckParameter4);
            if ( v10 >= 0 )
            {
              v16 = BugCheckParameter4;
              v17 = BugCheckParameter4;
              v18 = v36;
              *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) = BugCheckParameter4;
              v10 = CmpCopySyncTree(v8, v18, v7, v17, 2, 0);
              if ( v10 >= 0 )
              {
                HvUnlockHiveFlusherExclusive(v8);
                v15 = 5;
                if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v9, BugCheckParameter4_4, &v34);
                else
                  CellFlat = HvpGetCellPaged(v9, BugCheckParameter4_4, (unsigned int *)&v34);
                if ( CellFlat )
                {
                  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                    CellPaged = HvpGetCellFlat(v7, v16, &v35);
                  else
                    CellPaged = HvpGetCellPaged(v7, v16, (unsigned int *)&v35);
                  v21 = CellPaged;
                  if ( CellPaged )
                  {
                    v10 = CmpMergeKeyValues(v9, BugCheckParameter4, CellPaged);
                    if ( v10 >= 0 )
                    {
                      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v9, &v34);
                      else
                        HvpReleaseCellPaged(v9, (unsigned int *)&v34);
                      if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v7, &v35);
                      else
                        HvpReleaseCellPaged(v7, (unsigned int *)&v35);
                      v10 = CmpCopySyncTree(v9, BugCheckParameter4_4, v7, BugCheckParameter4, 2, 2);
                      if ( v10 >= 0 )
                      {
                        HvUnlockHiveFlusherExclusive(v9);
                        HvUnlockHiveFlusherExclusive(v7);
                        CmpUnlockTwoKcbs(v38, v37);
                        CmpUnlockRegistry(v23, v22, v24, v25);
                        *(_QWORD *)(v7 + 1560) = v39;
                        v10 = HvWriteExternal(v7);
                        *(_QWORD *)(v7 + 1560) = 0LL;
                        goto LABEL_57;
                      }
                      goto LABEL_49;
                    }
                  }
                  else
                  {
                    v10 = -1073741670;
                  }
                  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v9, &v34);
                  else
                    HvpReleaseCellPaged(v9, (unsigned int *)&v34);
                  if ( v21 )
                  {
                    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v7, &v35);
                    else
                      HvpReleaseCellPaged(v7, (unsigned int *)&v35);
                  }
                }
                else
                {
                  v10 = -1073741670;
                }
              }
            }
          }
        }
LABEL_49:
        HvUnlockHiveFlusherExclusive(v9);
        if ( (v15 & 2) != 0 )
          HvUnlockHiveFlusherExclusive(v8);
        if ( (v15 & 1) != 0 )
          HvUnlockHiveFlusherExclusive(v7);
        goto LABEL_56;
      }
      if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
      {
        v39 = 0x1000000LL;
        v43 = &v39;
        v44 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04328,
          (unsigned __int8 *)byte_140036503,
          0LL,
          0LL,
          3u,
          &v42);
      }
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v10;
}
