/*
 * XREFs of KeFlushSingleTb @ 0x140211E60
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140209498 (MiUpdateImagePfnImportRelocations.c)
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiAbortCombineScan @ 0x14021467C (MiAbortCombineScan.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiValidateInPage @ 0x140287570 (MiValidateInPage.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiFillPhysicalPages @ 0x1402CE820 (MiFillPhysicalPages.c)
 *     MiNoFaultFound @ 0x1402D3500 (MiNoFaultFound.c)
 *     MiMapSinglePage @ 0x14034A868 (MiMapSinglePage.c)
 *     MiDbgReleaseAddress @ 0x140387814 (MiDbgReleaseAddress.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403963DC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x1403D1884 (MmStealTopLevelPage.c)
 *     MiPrepareToStealNonPagedPool @ 0x14061B4F4 (MiPrepareToStealNonPagedPool.c)
 *     MiReleaseFaultPte @ 0x140631BE0 (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x140641640 (MiDbgCopyMemoryTarget.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140641B08 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140641E70 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiInitializeBootShadowStackPage @ 0x140642570 (MiInitializeBootShadowStackPage.c)
 *     MiLargePageFault @ 0x140643EB8 (MiLargePageFault.c)
 *     MiClearPageFileHash @ 0x1406635B0 (MiClearPageFileHash.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14080B0BC (MiMarkBootGuardPage.c)
 *     MxSwapPages @ 0x140B50198 (MxSwapPages.c)
 *     MxCopyPage @ 0x140B96330 (MxCopyPage.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x140211FFC (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x140212038 (KiPreprocessFlushTb.c)
 *     KxFlushSingleTb @ 0x1402120DC (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     HvlFlushRangeListTb @ 0x1403C689C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1403C8E3C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x1403C9158 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140417710 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x14045DE9C (VmFlushTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFlushTb @ 0x14060AC48 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // r15
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  char v12; // r11
  int v13; // r9d
  char v14; // r10
  unsigned __int8 v15; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // bl
  _DWORD *v23; // r9
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // [rsp+40h] [rbp-40h] BYREF
  char v30; // [rsp+41h] [rbp-3Fh] BYREF
  char v31[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-28h] BYREF
  __int128 v35; // [rsp+60h] [rbp-20h]

  v33 = 0LL;
  v30 = 0;
  v31[0] = 0;
  v29 = 0;
  v4 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a2, a3, (unsigned int)&v30, (__int64)&v29) )
  {
    if ( ((1 << a2) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
    {
      if ( (KiFlushPcid & 2) != 0 )
      {
        *(_QWORD *)&v35 = 1LL;
        *((_QWORD *)&v35 + 1) = a1;
        _EAX = 0;
        __asm { invpcid eax, [rbp+var_20] }
      }
      else
      {
        KiSetUserTbFlushPending();
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v15 = v29;
      if ( v29 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = v29;
        v20 = ~(unsigned __int16)(-1LL << (v29 + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v15 = v29;
    }
    __writecr8(v15);
    v4 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( (_BYTE)result || v30 )
  {
    KiPrepareFlushParameters(a2, &v33, v31);
    v10 = KiFlushAffinity(a3);
    LOBYTE(v11) = v31[0];
    v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v13) = v12;
    v34 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v33, v10, v11, v13, v14, 1, (__int64)&v34);
    v4 |= result;
  }
  else
  {
    v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( v4 )
  {
    if ( a2 == 4 )
    {
      LOBYTE(v8) = 1;
      result = KeFlushProcessWriteBuffers(v8);
    }
  }
  else
  {
    result = KxFlushSingleTb(a1, a2, a3);
  }
  if ( VmTbFlushEnabled )
  {
    v32 = v9;
    result = VmFlushTb(1LL, &v32, a2);
  }
  if ( ExTbFlushActive )
  {
    v32 = v9;
    v22 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
    {
      v23 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v22 == 15 )
        LODWORD(v24) = 0x8000;
      else
        v24 = (-1LL << (v22 + 1)) & 0xFFFC;
      v23[5] |= v24;
    }
    ExFlushTb(1LL, &v32, a2);
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v22 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (v22 + 1));
        v21 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    result = v22;
    __writecr8(v22);
  }
  return result;
}
