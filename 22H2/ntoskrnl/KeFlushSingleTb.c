/*
 * XREFs of KeFlushSingleTb @ 0x140334A18
 * Callers:
 *     MiValidFault @ 0x140209710 (MiValidFault.c)
 *     MiValidateInPage @ 0x14023AEE0 (MiValidateInPage.c)
 *     MiAbortCombineScan @ 0x140283DF0 (MiAbortCombineScan.c)
 *     MiNoFaultFound @ 0x140292848 (MiNoFaultFound.c)
 *     MiTradeActivePage @ 0x14030DD40 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x14031FC90 (MiSwapStackPageNoDpc.c)
 *     MiClearPageFileHash @ 0x140324CD4 (MiClearPageFileHash.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiFillPhysicalPages @ 0x1403579D0 (MiFillPhysicalPages.c)
 *     MiMapSinglePage @ 0x14036AA54 (MiMapSinglePage.c)
 *     MiLockPagedAddress @ 0x14036B274 (MiLockPagedAddress.c)
 *     MmStealTopLevelPage @ 0x140387ED8 (MmStealTopLevelPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140397174 (MiUpdateImagePfnImportRelocations.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C4C0C (MiPrepareToStealNonPagedPool.c)
 *     MiReleaseFaultPte @ 0x14053A8AC (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x140545A80 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x140545FFC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546130 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140546504 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x1405489F4 (MiLargePageFault.c)
 *     MiScrubAwePage @ 0x14054DC7C (MiScrubAwePage.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14079FDEC (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x140A568CC (MxCopyPage.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x140231050 (KiPreprocessFlushTb.c)
 *     KiIsSecureProcessFlush @ 0x1402BBB70 (KiIsSecureProcessFlush.c)
 *     KxFlushSingleTb @ 0x140334B68 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140343D14 (KeFlushProcessWriteBuffers.c)
 *     HvlFlushRangeListTb @ 0x14038F85C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14039062C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390664 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403FEB70 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x1405A268C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7158 (ExFlushTb.c)
 */

char __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // si
  __int64 v7; // r8
  __int64 v8; // r9
  char result; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // r8d
  char v14; // r11
  int v15; // r9d
  char v16; // r10
  _KPROCESS *Process; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v20; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // bl
  _DWORD *v26; // r10
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 v31; // [rsp+40h] [rbp-40h] BYREF
  char v32; // [rsp+41h] [rbp-3Fh] BYREF
  char v33[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  __int128 v37; // [rsp+60h] [rbp-20h]

  v35 = 0LL;
  v32 = 0;
  v33[0] = 0;
  v31 = 0;
  v4 = 0;
  if ( KiPreprocessFlushTb(0, a2, a3, &v32, &v31) )
  {
    if ( ((1 << a2) & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v37 = 1LL;
            *((_QWORD *)&v37 + 1) = a1;
            _EAX = 0;
            __asm { invpcid eax, [rbp+var_20] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, 15LL, v7, v8);
          }
        }
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v20 = v31;
      if ( v31 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = v31;
        v23 = ~(unsigned __int16)(-1LL << (v31 + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v20 = v31;
    }
    __writecr8(v20);
    v4 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( result || v32 )
  {
    KiPrepareFlushParameters(a2, &v35, v33);
    v12 = KiFlushAffinity(a3);
    LOBYTE(v13) = v33[0];
    LOBYTE(v15) = v14;
    v36 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v35, v12, v13, v15, v16, 1, (__int64)&v36);
    v4 |= result;
  }
  if ( v4 )
  {
    if ( a2 == 4 )
    {
      LOBYTE(v10) = 1;
      result = KeFlushProcessWriteBuffers(v10);
    }
  }
  else
  {
    result = KxFlushSingleTb(a1, a2, a3);
  }
  v11 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v34 = v11;
    result = VmFlushTb(1LL, &v34, a2);
  }
  if ( ExTbFlushActive )
  {
    v34 = v11;
    v25 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
    {
      v26 = KeGetCurrentPrcb()->SchedulerAssist;
      v26[5] |= (-1 << (v25 + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v34, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && v25 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (v25 + 1));
          v24 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    result = v25;
    __writecr8(v25);
  }
  return result;
}
