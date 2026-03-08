/*
 * XREFs of MiWriteValidPteNewProtection @ 0x14032E660
 * Callers:
 *     MiMakeCombineCandidateClean @ 0x140210FE0 (MiMakeCombineCandidateClean.c)
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402D4830 (MiFlushDirtyBitsToPfn.c)
 *     MiMarkPteDirty @ 0x1402DFE5C (MiMarkPteDirty.c)
 *     MiDirtySystemCachePte @ 0x1402E46F8 (MiDirtySystemCachePte.c)
 *     MiRevokeExecutePte @ 0x1402EC9B0 (MiRevokeExecutePte.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x14032F6D0 (MiMakePteClean.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140346D60 (MiUnlockNestedPageTableWritePte.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     MiPerformSafePdeWrite @ 0x1403C0578 (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x140641640 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x140643EB8 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1406465DC (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 *     MxCreatePfnsForPtes @ 0x140B4FD40 (MxCreatePfnsForPtes.c)
 *     MiProtectSharedUserPage @ 0x140B6C128 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

char __fastcall MiWriteValidPteNewProtection(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r8

  v2 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v8 = v2 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = *(_QWORD *)a1;
      v2 = v8;
      if ( (v7 & 0x42) != 0 )
        v2 = v8 | 0x42;
    }
  }
  v4 = a2 ^ (a2 ^ v2) & 0x7F00000000000000LL;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_3;
  if ( !MiPteHasShadow() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v4 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v4 |= 0x8000000000000000uLL;
    }
LABEL_3:
    *(_QWORD *)a1 = v4;
    return (char)CurrentThread;
  }
  if ( !HIBYTE(word_140C6697C) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  LOBYTE(CurrentThread) = MiWritePteShadow(a1, v4, v9);
  return (char)CurrentThread;
}
