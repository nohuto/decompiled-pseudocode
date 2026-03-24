/*
 * XREFs of MiWriteValidPteNewProtection @ 0x140290080
 * Callers:
 *     MiValidFault @ 0x140209710 (MiValidFault.c)
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiMarkPteDirty @ 0x14027ABCC (MiMarkPteDirty.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14028CECC (MiUnlockNestedPageTableWritePte.c)
 *     MiMakePteClean @ 0x14028FBEC (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14028FCC0 (MmSetAddressRangeModifiedEx.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402F908C (MiFlushDirtyBitsToPfn.c)
 *     MiDirtySystemCachePte @ 0x1403159C8 (MiDirtySystemCachePte.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 *     MiMakeCombineCandidateClean @ 0x1403696DC (MiMakeCombineCandidateClean.c)
 *     MiDemoteCombinedPte @ 0x14036ABB0 (MiDemoteCombinedPte.c)
 *     MiRevokeExecutePte @ 0x1403751D0 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x1403796F0 (MmSetPageProtection.c)
 *     MiPerformSafePdeWrite @ 0x1403810DC (MiPerformSafePdeWrite.c)
 *     MmProtectMdlSystemAddress @ 0x1405320F0 (MmProtectMdlSystemAddress.c)
 *     MiDbgCopyMemoryTarget @ 0x140545A80 (MiDbgCopyMemoryTarget.c)
 *     MiLargePageFault @ 0x1405489F4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14054B4DC (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 *     MxCreatePfns @ 0x140A56C60 (MxCreatePfns.c)
 *     MiProtectSharedUserPage @ 0x140A73CE0 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiWriteValidPteNewProtection(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  struct _KTHREAD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v11; // rax
  __int64 v12; // r8

  v2 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      v12 = v2 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = *(_QWORD *)a1;
      v2 = v12;
      if ( (v11 & 0x42) != 0 )
        v2 = v12 | 0x42;
    }
  }
  v4 = a2 ^ (a2 ^ v2) & 0x7F00000000000000LL;
  result = (struct _KTHREAD *)MiPteInShadowRange(a1, a2);
  if ( !(_DWORD)result )
    goto LABEL_3;
  if ( !(unsigned int)MiPteHasShadow(v7, v6, v8, v9) )
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v4 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v4 |= 0x8000000000000000uLL;
    }
LABEL_3:
    *(_QWORD *)a1 = v4;
    return result;
  }
  if ( !HIBYTE(word_140C4E008) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  return (struct _KTHREAD *)MiWritePteShadow(a1, v4);
}
