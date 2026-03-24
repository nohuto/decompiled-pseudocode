/*
 * XREFs of CmSetKeyFlags @ 0x14086DCC8
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402FBC44 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1403613FC (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405EF510 (CmpGetEffectiveKcbSemantics.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14066D87C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14069B770 (CmpAllocateUnitOfWork.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1406E4DC4 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupRollbackPacket @ 0x14071B8E8 (CmpCleanupRollbackPacket.c)
 *     CmpLockIXLockExclusive @ 0x14071C7B0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071C810 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076D874 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x14077A7CC (CmpAbortRollbackPacket.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E54 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRetryBackOff @ 0x140875090 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAF8 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140880318 (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // r12
  int v5; // r14d
  __int64 v6; // r15
  int v7; // r13d
  int v8; // edi
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 KeyNodeForKcb; // rax
  __int64 v19; // rcx
  int v20; // r13d
  int v21; // r13d
  int v22; // r13d
  __int16 v23; // ax
  unsigned int v24; // r14d
  _QWORD *UnitOfWork; // rax
  __int64 v27; // [rsp+28h] [rbp-59h] BYREF
  _QWORD *v28; // [rsp+30h] [rbp-51h]
  __int64 v29; // [rsp+38h] [rbp-49h] BYREF
  int v30; // [rsp+40h] [rbp-41h] BYREF
  __int128 v31; // [rsp+48h] [rbp-39h] BYREF
  __int128 v32; // [rsp+58h] [rbp-29h] BYREF
  __int128 v33; // [rsp+68h] [rbp-19h]
  _OWORD v34[3]; // [rsp+78h] [rbp-9h] BYREF

  v28 = (_QWORD *)a1;
  v4 = (_QWORD *)a1;
  v5 = a3;
  v6 = 0LL;
  v29 = 0xFFFFFFFFLL;
  v7 = a2;
  v32 = 0LL;
  WORD1(v32) = -1;
  v27 = 0LL;
  v30 = 0;
  memset(v34, 0, sizeof(v34));
  v33 = 0LL;
  v31 = 0LL;
  CmpAttachToRegistryProcess((__int64)v34, a2, a3, a4);
  if ( v7 == 1 && (v5 & 0xFFFFFFF0) != 0 )
  {
    v8 = -1073741811;
  }
  else
  {
    while ( (CmpShutdownRundown & 1) == 0 )
    {
      v9 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry();
      v10 = v4[1];
      CmpStartKcbStackForTopLayerKcb((__int64)&v32, v10, v11, v12);
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v32);
      v8 = CmpPerformKeyBodyDeletionCheck((__int64)v4, 0LL);
      if ( v8 < 0 )
        goto LABEL_55;
      if ( v4[7] || v4[8] )
      {
        v8 = CmpTransSearchAddTransFromKeyBody(v4, &v27);
        if ( v8 < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 160LL) & 2) != 0 )
        {
          v8 = -1072103423;
          goto LABEL_55;
        }
        v13 = v27;
        v8 = CmpPerformKeyBodyDeletionCheck((__int64)v28, v27);
        if ( v8 < 0 )
          goto LABEL_55;
      }
      else
      {
        v13 = v27;
      }
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v10, (__int64)v28) == 1 )
      {
        v8 = -1073741790;
        goto LABEL_55;
      }
      if ( (unsigned int)(v7 - 2) <= 2 )
        v13 = v16;
      v27 = v13;
      if ( v13 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v6 = (__int64)UnitOfWork;
        if ( UnitOfWork )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, v10);
          v8 = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v13);
          if ( v8 < 0 )
            goto LABEL_43;
          if ( !CmpLockIXLockIntent((unsigned int *)(v10 + 248), v6)
            || !CmpLockIXLockExclusive(v10 + 264, (_QWORD *)v6, 1) )
          {
            v8 = -1072103423;
            goto LABEL_43;
          }
          *(_DWORD *)(v6 + 68) = 7;
          *(_DWORD *)(v6 + 88) = v5;
          v8 = CmAddLogForAction(v6, 1);
          if ( v8 < 0 )
            goto LABEL_43;
          v8 = 0;
        }
        else
        {
          v8 = -1073741670;
        }
LABEL_55:
        CmpUnlockKcbStack((__int64)&v32);
LABEL_56:
        CmpUnlockRegistry();
        goto LABEL_58;
      }
      v17 = CmpTryAcquireKcbIXLocks(v14, 0LL, v15, (__int64)&v31);
      v8 = v17;
      if ( v17 == -1073741267 )
      {
        CmpLogTransactionAbortedForRollbackPacket(v10, 3u);
        CmpUnlockKcbStack((__int64)&v32);
        CmpUnlockRegistry();
        v8 = CmpAbortRollbackPacket((__int64)&v31, 0LL);
        if ( v8 < 0 )
          goto LABEL_58;
        CmpRetryBackOff(&v30);
        CmpCleanupRollbackPacket((__int64)&v31);
        v31 = 0LL;
      }
      else
      {
        if ( v17 < 0 )
          goto LABEL_55;
        if ( *(_DWORD *)(v10 + 40) != -1 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v10 + 32));
          if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v10 + 32), *(unsigned int *)(v10 + 40), 0LL) )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v10, (__int64)&v29, 1);
            v19 = KeyNodeForKcb;
            v20 = v7 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                v22 = v21 - 1;
                if ( v22 )
                {
                  if ( v22 == 1 )
                  {
                    *(_BYTE *)(KeyNodeForKcb + 55) = v5;
                    *(_BYTE *)(v10 + 185) = v5;
                  }
                }
                else
                {
                  v23 = *(_WORD *)(KeyNodeForKcb + 2);
                  if ( (v5 & 4) != 0 )
                  {
                    *(_WORD *)(v19 + 2) = v23 | 0x80;
                    *(_WORD *)(v10 + 186) |= 0x80u;
                  }
                  else
                  {
                    if ( (v5 & 1) != 0 )
                    {
                      *(_WORD *)(v19 + 2) = v23 | 0x300;
                      *(_WORD *)(v10 + 186) |= 0x300u;
                    }
                    else
                    {
                      *(_WORD *)(v19 + 2) = v23 & 0xFEFF;
                      *(_WORD *)(v10 + 186) &= ~0x100u;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      *(_WORD *)(v19 + 2) |= 0x200u;
                      *(_WORD *)(v10 + 186) |= 0x200u;
                    }
                  }
                }
              }
              else
              {
                *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (v5 << 20)) & 0xF00000;
                *(_DWORD *)(v10 + 184) ^= (*(_DWORD *)(v10 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF0;
                if ( (v5 & 2) != 0 )
                {
                  *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
                  *(_WORD *)(v10 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
                }
              }
            }
            else
            {
              v24 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (v5 << 16)) & 0xF0000;
              *(_DWORD *)(KeyNodeForKcb + 52) = v24;
              *(_DWORD *)(v10 + 184) ^= (*(_DWORD *)(v10 + 184) ^ HIWORD(v24)) & 0xF;
            }
            *(_QWORD *)(v19 + 4) = v9;
            ++*(_QWORD *)(v10 + 304);
            *(_QWORD *)(v10 + 168) = v9;
            v8 = 0;
            CmpReleaseKeyNodeForKcb(v10);
          }
          else
          {
            v8 = -1073741443;
          }
          HvUnlockHiveFlusherShared(*(_QWORD *)(v10 + 32));
LABEL_43:
          if ( v6 )
          {
            CmpRundownUnitOfWork((_QWORD *)v6);
            CmpFreeUnitOfWork(v6);
          }
          goto LABEL_55;
        }
        CmpUnlockKcbStack((__int64)&v32);
        v8 = CmpPromoteKey(&v32, 0LL, 0LL);
        if ( v8 < 0 )
          goto LABEL_56;
        CmpUnlockRegistry();
        CmpCleanupKcbStack((__int64)&v32);
        v32 = 0LL;
        WORD1(v32) = -1;
        v33 = 0LL;
      }
      v4 = v28;
    }
    v8 = -1073741431;
  }
LABEL_58:
  CmpDetachFromRegistryProcess((__int64)v34);
  CmpCleanupKcbStack((__int64)&v32);
  CmpCleanupRollbackPacket((__int64)&v31);
  return (unsigned int)v8;
}
