/*
 * XREFs of CmSetKeyFlags @ 0x140A12D14
 * Callers:
 *     NtSetInformationKey @ 0x1407590A0 (NtSetInformationKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14024185C (CmpTransEnlistUowInCmTrans.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpTransEnlistUowInKcb @ 0x1402C0814 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x1406B6040 (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x1406B7020 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1406B70A0 (CmpLockIXLockExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1406B7CA4 (CmpGetKeyNodeForKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmAddLogForAction @ 0x14073485C (CmAddLogForAction.c)
 *     CmpCleanupRollbackPacket @ 0x14074A888 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14074C150 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x14074C8DC (CmpAbortRollbackPacket.c)
 *     CmpAllocateUnitOfWork @ 0x140784388 (CmpAllocateUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     CmpRetryBackOff @ 0x140A1BA24 (CmpRetryBackOff.c)
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpIsShutdownRundownActive @ 0x140AF24D4 (CmpIsShutdownRundownActive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  ULONG_PTR v12; // rsi
  __int64 v13; // r12
  int v14; // edx
  char v15; // al
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int64 *v28; // rdi
  __int64 v29; // r13
  __int64 KeyNodeForKcb; // rax
  __int64 v31; // rdx
  int v32; // r15d
  int v33; // r15d
  int v34; // r15d
  __int16 v35; // cx
  __int16 v36; // ax
  unsigned int v37; // r14d
  __int64 v38; // rcx
  __int64 v39; // rbx
  _QWORD *UnitOfWork; // rax
  __int64 v41; // rbx
  __int64 v43; // [rsp+38h] [rbp-59h] BYREF
  __int64 v44; // [rsp+40h] [rbp-51h] BYREF
  int v45; // [rsp+48h] [rbp-49h] BYREF
  __int128 v46; // [rsp+50h] [rbp-41h] BYREF
  __int128 v47; // [rsp+60h] [rbp-31h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-9h] BYREF

  v44 = 0LL;
  v47 = 0LL;
  WORD1(v47) = -1;
  v43 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextReinitialize(&v44);
  v45 = 0;
  v46 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v6 = -1073741811;
    goto LABEL_71;
  }
  while ( !(unsigned __int8)CmpIsShutdownRundownActive() )
  {
    v11 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v8, v7, v9, v10);
    v12 = *(_QWORD *)(a1 + 8);
    CmpStartKcbStackForTopLayerKcb((__int64)&v47, v12);
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v47);
    v6 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( v6 < 0 )
      goto LABEL_68;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v6 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v43);
      if ( v6 < 0 )
        goto LABEL_68;
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 32) + 160LL) & 2) != 0 )
      {
        v6 = -1072103423;
        goto LABEL_68;
      }
      v13 = v43;
      v6 = CmpPerformKeyBodyDeletionCheck(a1, v43);
      if ( v6 < 0 )
        goto LABEL_68;
    }
    else
    {
      v13 = v43;
    }
    v14 = *(__int16 *)(v12 + 66);
    if ( v14 == *(unsigned __int16 *)(a1 + 4) )
    {
      v15 = *(_BYTE *)(v12 + 65);
      if ( !v15 )
        goto LABEL_18;
    }
    else
    {
      if ( !(_WORD)v14 )
        goto LABEL_18;
      v15 = *(_BYTE *)(v12 + 65);
    }
    if ( v15 == 1 )
    {
      v6 = -1073741790;
      goto LABEL_68;
    }
LABEL_18:
    if ( (unsigned int)(a2 - 2) <= 2 )
      v13 = 0LL;
    v43 = v13;
    if ( v13 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      v41 = (__int64)UnitOfWork;
      if ( UnitOfWork )
      {
        CmpTransEnlistUowInKcb(UnitOfWork, v12);
        v6 = CmpTransEnlistUowInCmTrans((_QWORD *)v41, v13);
        if ( v6 >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v12 + 248), v41)
            && CmpLockIXLockExclusive(v12 + 264, (_QWORD *)v41, 1) )
          {
            *(_DWORD *)(v41 + 68) = 7;
            *(_DWORD *)(v41 + 88) = a3;
            v6 = CmAddLogForAction(v41, 1u);
            if ( v6 >= 0 )
            {
              v6 = 0;
              goto LABEL_68;
            }
          }
          else
          {
            v6 = -1072103423;
          }
        }
        CmpRundownUnitOfWork((_QWORD *)v41);
        ExFreePoolWithTag((PVOID)v41, 0x77554D43u);
      }
      else
      {
        v6 = -1073741670;
      }
LABEL_68:
      CmpUnlockKcbStack((__int64)&v47);
LABEL_69:
      CmpUnlockRegistry(v25, v24, v26, v27);
      goto LABEL_71;
    }
    v16 = CmpTryAcquireKcbIXLocks(v12, 0LL, 0LL, (__int64)&v46);
    v6 = v16;
    if ( v16 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v12, 0LL, 3u, v17, v46);
      CmpUnlockKcbStack((__int64)&v47);
      CmpUnlockRegistry(v19, v18, v20, v21);
      v6 = CmpAbortRollbackPacket((__int64)&v46, 0LL);
      if ( v6 < 0 )
        goto LABEL_71;
      CmpRetryBackOff(&v45, v22, v23);
      CmpCleanupRollbackPacket((__int64)&v46);
      v46 = 0LL;
    }
    else
    {
      if ( v16 < 0 )
        goto LABEL_68;
      if ( *(_DWORD *)(v12 + 40) != -1 )
      {
        v28 = (signed __int64 *)(*(_QWORD *)(v12 + 32) + 72LL);
        v29 = KeAbPreAcquire((__int64)v28, 0LL);
        if ( _InterlockedCompareExchange64(v28, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v28, 0, v29, (__int64)v28);
        if ( v29 )
          *(_BYTE *)(v29 + 18) = 1;
        v6 = HvpMarkCellDirty(*(_QWORD *)(v12 + 32), *(unsigned int *)(v12 + 40), 0);
        if ( v6 >= 0 )
        {
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v12, (__int64)&v44, 1);
          v31 = KeyNodeForKcb;
          v32 = a2 - 1;
          if ( !v32 )
          {
            v37 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
            *(_DWORD *)(KeyNodeForKcb + 52) = v37;
            *(_DWORD *)(v12 + 184) ^= (*(_DWORD *)(v12 + 184) ^ HIWORD(v37)) & 0xF;
            goto LABEL_52;
          }
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( !v34 )
            {
              v35 = *(_WORD *)(KeyNodeForKcb + 2);
              if ( (a3 & 4) != 0 )
              {
                v36 = 128;
                *(_WORD *)(v31 + 2) = v35 | 0x80;
              }
              else
              {
                if ( (a3 & 1) != 0 )
                {
                  *(_WORD *)(KeyNodeForKcb + 2) = v35 | 0x300;
                  *(_WORD *)(v12 + 186) |= 0x300u;
                }
                else
                {
                  *(_WORD *)(KeyNodeForKcb + 2) = v35 & 0xFEFF;
                  *(_WORD *)(v12 + 186) &= ~0x100u;
                }
                if ( (a3 & 2) == 0 )
                  goto LABEL_52;
                v36 = 512;
                *(_WORD *)(v31 + 2) |= 0x200u;
              }
              *(_WORD *)(v12 + 186) |= v36;
              goto LABEL_52;
            }
            if ( v34 == 1 )
            {
              *(_BYTE *)(KeyNodeForKcb + 55) = a3;
              *(_BYTE *)(v12 + 185) = a3;
            }
          }
          else
          {
            *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
            *(_DWORD *)(v12 + 184) ^= (*(_DWORD *)(v12 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF0;
            if ( (a3 & 2) != 0 )
            {
              *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
              *(_WORD *)(v12 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
            }
          }
LABEL_52:
          *(_QWORD *)(v31 + 4) = v11;
          v6 = 0;
          ++*(_QWORD *)(v12 + 304);
          *(_QWORD *)(v12 + 168) = v11;
          v38 = *(_QWORD *)(v12 + 32);
          if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v38, &v44);
          else
            HvpReleaseCellPaged(v38, (unsigned int *)&v44);
        }
        v39 = *(_QWORD *)(v12 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v39 + 72));
        KeAbPostRelease(v39 + 72);
        goto LABEL_68;
      }
      CmpUnlockKcbStack((__int64)&v47);
      v6 = CmpPromoteKey(&v47, 0LL, 0LL);
      if ( v6 < 0 )
        goto LABEL_69;
      CmpUnlockRegistry(v25, v24, v26, v27);
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v47 = 0LL;
      WORD1(v47) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  v6 = -1073741431;
LABEL_71:
  CmpDetachFromRegistryProcess(&ApcState);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket((__int64)&v46);
  return (unsigned int)v6;
}
