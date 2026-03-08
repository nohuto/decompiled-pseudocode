/*
 * XREFs of CmReplaceKey @ 0x140A12A54
 * Callers:
 *     NtReplaceKey @ 0x140A0B850 (NtReplaceKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x140412C70 (ZwFlushBuffersFile.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpCmdHiveOpen @ 0x1406C0FC8 (CmpCmdHiveOpen.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140820C84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140820D0C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpCmdRenameHive @ 0x140A0ED14 (CmpCmdRenameHive.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 *     CmpPreserveSystemHiveData @ 0x140A1F84C (CmpPreserveSystemHiveData.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmReplaceKey(ULONG_PTR BugCheckParameter3, __int64 a2, const UNICODE_STRING *a3, const void **a4)
{
  ULONG_PTR v6; // rsi
  char v8; // r14
  char v9; // r12
  struct _PRIVILEGE_SET *Pool; // r15
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _BYTE v32[8]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v33; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-90h] BYREF
  const void *ObjectInformation[64]; // [rsp+A0h] [rbp-60h] BYREF

  v32[0] = 0;
  v6 = 0LL;
  v33 = 0LL;
  IoStatusBlock = 0LL;
  v8 = 0;
  v9 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 432LL, 859393347LL);
  if ( !Pool )
  {
    v11 = -1073741670;
    goto LABEL_21;
  }
  v11 = CmpCmdHiveOpen(a3, 0, v32, &v33, 0x1190001u, 0, 0LL, 0LL, Pool);
  if ( v11 < 0 )
  {
    v6 = v33;
    goto LABEL_21;
  }
  CmpAttachToRegistryProcess(&ApcState);
  v8 = 1;
  CmpLockRegistry(v13, v12, v14, v15);
  HvLockHiveFlusherExclusive(BugCheckParameter3);
  v6 = v33;
  if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 4) != 0 )
    goto LABEL_5;
  if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0 )
  {
LABEL_7:
    v11 = -1073741811;
    goto LABEL_18;
  }
  if ( BugCheckParameter3 != qword_140C028D0 || (v11 = CmpPreserveSystemHiveData(BugCheckParameter3, v33), v11 >= 0) )
  {
    HvUnlockHiveFlusherExclusive(BugCheckParameter3);
    CmpUnlockRegistry(v17, v16, v18, v19);
    v11 = CmpFlushHive(v6, 0xCu);
    if ( v11 < 0 )
      goto LABEL_21;
    CmpDetachFromRegistryProcess(&ApcState);
    v8 = 0;
    CmpBecomeActiveFlusherAndReconciler(BugCheckParameter3);
    v9 = 1;
    CmpLockRegistry(v21, v20, v22, v23);
    HvLockHiveFlusherExclusive(BugCheckParameter3);
    if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 4) != 0 )
    {
LABEL_5:
      v11 = -1073741611;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) == 0 )
    {
      v11 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter3 + 1544), ObjectInformation, a4, 0x200u, 0);
      if ( v11 >= 0 )
      {
        *(_DWORD *)(BugCheckParameter3 + 160) |= 4u;
        v11 = CmpCmdRenameHive(*(HANDLE *)(v6 + 1544), 0LL, ObjectInformation, 0, 0);
        if ( v11 < 0 || (v11 = ZwFlushBuffersFile(*(HANDLE *)(v6 + 1544), &IoStatusBlock), v11 < 0) )
        {
          if ( CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter3 + 1544), 0LL, ObjectInformation, 0, 0) < 0 )
            v11 = -1073741492;
        }
      }
      goto LABEL_18;
    }
    goto LABEL_7;
  }
LABEL_18:
  HvUnlockHiveFlusherExclusive(BugCheckParameter3);
  CmpUnlockRegistry(v25, v24, v26, v27);
  if ( v9 )
    CmpFinishBeingActiveFlusherAndReconciler(BugCheckParameter3, v28, v29, v30);
LABEL_21:
  if ( v6 )
  {
    if ( !v8 )
    {
      CmpAttachToRegistryProcess(&ApcState);
      v8 = 1;
    }
    if ( v11 >= 0 )
    {
      *(_OWORD *)(v6 + 1544) = 0LL;
      *(_OWORD *)(v6 + 1560) = 0LL;
      *(_OWORD *)(v6 + 1576) = 0LL;
    }
    CmpDestroyHive((PVOID)v6);
  }
  if ( v8 )
    CmpDetachFromRegistryProcess(&ApcState);
  if ( Pool )
    CmSiFreeMemory(Pool);
  return (unsigned int)v11;
}
