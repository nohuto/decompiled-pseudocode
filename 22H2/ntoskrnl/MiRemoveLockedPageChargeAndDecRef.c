/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250
 * Callers:
 *     MiProbeLockFrame @ 0x14020AC90 (MiProbeLockFrame.c)
 *     MiResolveDemandZeroFault @ 0x14020FB10 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14029AAFC (MiFinishMdlForMappedFileFault.c)
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 *     MiHandleCollidedFault @ 0x1402E1E9C (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402E2190 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiLockProtoPage @ 0x14031D6D4 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14032161C (MiUnlockNestedProtoPoolPage.c)
 *     MiReturnPfnReferenceCount @ 0x140328468 (MiReturnPfnReferenceCount.c)
 *     MiDeletePerSessionProtos @ 0x1403285B0 (MiDeletePerSessionProtos.c)
 *     MiInitializeImageProtos @ 0x140336F8C (MiInitializeImageProtos.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x14035914C (MiFinalizeImageHeaderPage.c)
 *     MiDoubleUnlockMdlPage @ 0x14037F2F8 (MiDoubleUnlockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140381BF8 (MiMirrorPerformBrownWrites.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140396E8C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiUnlockCodePage @ 0x1403A0950 (MiUnlockCodePage.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C8FCC (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x140535F90 (MiJumpStackTarget.c)
 *     MiUnlockPagedAddress @ 0x140536930 (MiUnlockPagedAddress.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FCB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 *     MiFinishLastForkPageTable @ 0x14055A5E0 (MiFinishLastForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x14055B238 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402A7960 (MiIsPfnCommitNotCharged.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3F5C (MiBadRefCount.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int16 v1; // dx
  bool v3; // zf
  __int16 v4; // dx
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // esi
  unsigned __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // r11
  int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rdi
  unsigned __int64 v16; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v19; // eax

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    MiBadRefCount(a1);
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( v3 && MiIsPfnFileOnly(a1) )
    goto LABEL_41;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 0x1000000000LL) == 0 && (v5 & 0x2000000000000LL) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = v6 & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v4 )
    {
      v8 = 1;
LABEL_15:
      v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
      {
        v10 = *(_BYTE *)(a1 + 35);
        if ( (v10 & 0x20) != 0 )
        {
          *(_BYTE *)(a1 + 35) = v10 & 0xDF;
          goto LABEL_40;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(a1) && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v13 = 1;
      }
      else if ( (unsigned int)MiIsPfnCommitNotCharged(v11) )
      {
        v13 = 1;
      }
      else if ( v8 == 1 && (v6 & 0x4000000000000000LL) != 0 )
      {
        v13 = 1;
      }
      v14 = (v12 >> 39) & 0x3FF;
      v15 = *(_QWORD *)(qword_140C4E648 + 8 * v14);
      if ( v13 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * v14), 1LL);
      v16 = 1LL;
      if ( (ULONG_PTR *)v15 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v19 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v3 = (_DWORD)CachedResidentAvailable == v19;
              LODWORD(CachedResidentAvailable) = v19;
              if ( v3 )
                break;
              if ( v19 == -1 || (unsigned __int64)(v19 + 1LL) > 0x100 )
                goto LABEL_35;
            }
LABEL_40:
            if ( v8 )
            {
LABEL_41:
              MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
              return 1LL;
            }
            return 0LL;
          }
LABEL_35:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v16 = (int)CachedResidentAvailable - 192 + 1LL;
          }
          if ( !v16 )
            goto LABEL_40;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 7168), v16);
      goto LABEL_40;
    }
    if ( v4 == 1 )
    {
      if ( v7 )
      {
LABEL_13:
        v8 = 0;
        goto LABEL_15;
      }
    }
    else if ( v4 != 2 || !v7 )
    {
      return 0LL;
    }
    if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
      return 0LL;
    goto LABEL_13;
  }
  return 0LL;
}
