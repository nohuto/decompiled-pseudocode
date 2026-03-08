/*
 * XREFs of CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1CC50 (CmpCommitDiscardReplacePost.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A25828 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpRemoveFromDelayedClose @ 0x14074BFBC (CmpRemoveFromDelayedClose.c)
 *     CmpFreeKeyControlBlock @ 0x14074C060 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407AF820 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1C82C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140A1C8D8 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

char __fastcall CmpSearchKeyControlBlockTreeEx(
        __int64 (__fastcall *a1)(ULONG_PTR, ULONG_PTR, __int64, __int64),
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // r13
  unsigned int v6; // edi
  char v8; // bl
  unsigned int v9; // ebp
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 *v12; // r14
  ULONG_PTR v13; // rdi
  int v14; // eax
  unsigned int v16; // [rsp+30h] [rbp-B8h]
  __int64 v17; // [rsp+38h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 1648);
  v6 = *(_DWORD *)(a2 + 1656);
  v17 = v5;
  memset(&ApcState, 0, sizeof(ApcState));
  v16 = v6;
  CmpAttachToRegistryProcess(&ApcState);
  v8 = 0;
  v9 = 0;
  if ( !v6 )
  {
LABEL_28:
    CmpDetachFromRegistryProcess(&ApcState);
    return 1;
  }
  v10 = (__int64 *)(v5 + 16);
  while ( 1 )
  {
    if ( a5 )
      CmpLockHashEntryByIndexExclusive(a2, v9);
    v11 = *v10;
    v12 = v10;
    if ( *v10 )
      break;
LABEL_25:
    if ( a5 )
      CmpUnlockHashEntryByIndex((PVOID)a2);
    ++v9;
    v10 += 3;
    if ( v9 >= v6 )
      goto LABEL_28;
  }
  while ( 1 )
  {
    v13 = v11 - 16;
    if ( a5 )
      CmpLockKcbExclusive(v11 - 16);
    if ( !*(_QWORD *)v13 )
    {
      CmpRemoveFromDelayedClose(v13);
      CmpCleanUpKcbCacheWithLock(v13, a3);
      if ( a5 )
      {
        CmpUnlockKcb(v13);
      }
      else if ( (*(_DWORD *)(v13 + 8) & 0x80000) != 0 )
      {
        CmpFreeKeyControlBlock(v13);
      }
      v12 = (__int64 *)(v5 + 24LL * v9 + 16);
      goto LABEL_23;
    }
    v21 = *(_QWORD *)(v13 + 24);
    v14 = a1(v13, a2, a3, a4);
    if ( v14 == 1 )
      break;
    if ( v14 == 3 )
    {
      if ( a5 )
        CmpUnlockKcb(v13);
      goto LABEL_34;
    }
    if ( v14 == 2 )
    {
      if ( a5 )
        CmpUnlockKcb(v13);
      *v12 = v21;
    }
    else
    {
      v12 = (__int64 *)(v13 + 24);
      if ( a5 )
        CmpUnlockKcb(v13);
    }
    v5 = v17;
LABEL_23:
    v11 = *v12;
    if ( !*v12 )
    {
      v6 = v16;
      goto LABEL_25;
    }
  }
  if ( a5 )
    CmpUnlockKcb(v13);
  v8 = 1;
LABEL_34:
  CmpUnlockHashEntryByIndex((PVOID)a2);
  return v8;
}
