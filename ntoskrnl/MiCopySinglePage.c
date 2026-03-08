/*
 * XREFs of MiCopySinglePage @ 0x1402A2358
 * Callers:
 *     MmCopyMemory @ 0x1402A1CE0 (MmCopyMemory.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiIsPageSecured @ 0x1402A27F0 (MiIsPageSecured.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledNoReporting @ 0x14040A5A0 (Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledNoReporting.c)
 *     MiCopySinglePageExceptionHandler @ 0x140411660 (MiCopySinglePageExceptionHandler.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int8 v9; // di
  __int64 v10; // r9
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v13; // r13d
  __int64 v14; // rdx
  _KPROCESS *Process; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 NumberOfSecureFaults; // rcx
  const void *v19; // rbx
  unsigned __int64 v20; // rbx
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r11
  _DWORD *v28; // r9
  int v29; // edx
  bool v30; // zf
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v39; // eax
  int v40; // [rsp+24h] [rbp-64h]

  if ( a2 > qword_140C65820 )
    return 3221225793LL;
  v7 = 6 * a2;
  if ( (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
    return 3221225793LL;
  v8 = 48 * a2 - 0x220000000000LL;
  if ( (a6 & 1) != 0 )
    v9 = MiLockPageInline(48 * a2 - 0x220000000000LL);
  else
    v9 = 17;
  if ( a2 > qword_140C65820 || (*(_QWORD *)(8 * v7 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
  {
    if ( v9 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (v9 + 1));
          v30 = (v39 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v39;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v8 + 35) >= 0 && !(unsigned int)MiIsPageSecured(8 * v7 - 0x220000000000LL) )
  {
    v40 = *(unsigned __int8 *)(v8 + 34) >> 6;
    if ( v40 == 3 )
      MiChangePageAttribute(8 * v7 - 0x220000000000LL, 1LL, 1LL, v10);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, 8 * v7 - 0x220000000000LL);
    if ( !a5 )
    {
      v17 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
      goto LABEL_24;
    }
    ValidPte = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u);
    v13 = 0;
    if ( (unsigned int)MiPteInShadowRange(a5) )
    {
      if ( (unsigned int)MiPteHasShadow(Process, v14, v16) )
      {
        v13 = 1;
        if ( HIBYTE(word_140C6697C) || (ValidPte & 1) == 0 )
          goto LABEL_20;
      }
      else
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 || (ValidPte & 1) == 0 )
          goto LABEL_20;
      }
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_20:
    *(_QWORD *)a5 = ValidPte;
    if ( v13 )
      MiWritePteShadow(a5, ValidPte);
    v17 = (__int64)(a5 << 25) >> 16;
LABEL_24:
    if ( (unsigned int)Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledNoReporting(Process) )
      NumberOfSecureFaults = KeGetCurrentPrcb()->NumberOfSecureFaults;
    v19 = (const void *)(a3 + v17);
    Feature_Servicing_AllowSecureQcPagesCopy__private_IsEnabledNoReporting(NumberOfSecureFaults);
    memmove(a1, v19, a4);
    if ( !a5 )
    {
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, 0x11u);
LABEL_37:
      if ( v40 == 3 )
        MiChangePageAttribute(v8, 3LL, 3LL, v25);
      if ( v9 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v26 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && v9 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v30 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        __writecr8(v9);
      }
      return 0LL;
    }
    v20 = ZeroPte;
    v21 = 0;
    if ( (unsigned int)MiPteInShadowRange(a5) )
    {
      if ( (unsigned int)MiPteHasShadow(v23, v22, v24) )
      {
        v21 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
LABEL_32:
          if ( (ZeroPte & 1) != 0 )
            v20 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_32;
      }
    }
    *(_QWORD *)a5 = v20;
    if ( v21 )
      MiWritePteShadow(a5, v20);
    goto LABEL_37;
  }
  if ( v9 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && v9 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v30 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8(v9);
  }
  return 3221227273LL;
}
