/*
 * XREFs of ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008EDE4
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008ECEC (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1C000CDAC (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1C000CDF0 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C005BB7C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00724BC (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008EA50 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1C008F05C (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1C008F1DC (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x1C008F3A8 (--$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall GroupedFGBoostProp::SetGroupedFGBoost(
        struct tagWND *a1,
        __int64 a2,
        struct _EPROCESS **a3,
        __int64 a4)
{
  __int64 v5; // r14
  int v6; // r15d
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  unsigned __int64 v8; // rbx
  int v9; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  GroupedFGBoostProp *v11; // rdi
  unsigned int v12; // esi
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  char *v15; // rdi
  unsigned __int64 v16; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rdi
  size_t v19; // r14
  int v20; // ecx
  __int64 Pool2; // rbx
  struct _EPROCESS **v22; // r8
  GroupedFGBoostProp *v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // r10
  size_t v26; // r11
  _QWORD *v27; // rax
  __int64 v28; // r10
  char v29; // r14
  __int64 v30; // [rsp+28h] [rbp-E0h] BYREF
  GroupedFGBoostProp *v31; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  struct tagWND **v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v38[28]; // [rsp+108h] [rbp+0h] BYREF
  struct tagWND *v39; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned int v40; // [rsp+200h] [rbp+F8h]
  void *Src; // [rsp+208h] [rbp+100h]
  unsigned __int64 v42; // [rsp+210h] [rbp+108h] BYREF

  Src = a3;
  v40 = a2;
  v39 = a1;
  v5 = (unsigned int)a2;
  LockRefactorStagingAssertOwned(*((struct _KTHREAD ***)a1 + 18), a2, (__int64)a3, a4);
  v6 = 0;
  v31 = 0LL;
  if ( !(unsigned int)CWindowProp::GetProp<GroupedFGBoostProp>(a1, &v31) )
  {
    v6 = CWindowProp::CreateWindowProp<GroupedFGBoostProp>(&v31);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v18 = gpLeakTrackingAllocator;
    v19 = 8 * v5;
    v32 = 1734767445;
    v35 = 260LL;
    v20 = *(_DWORD *)gpLeakTrackingAllocator;
    v30 = v19;
    if ( !v20 )
    {
      Pool2 = ExAllocatePool2(260LL, v19, 1734767445LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
LABEL_17:
      if ( Pool2 )
      {
LABEL_18:
        memmove((void *)Pool2, Src, v19);
        v22 = (struct _EPROCESS **)Pool2;
        v23 = v31;
        GroupedFGBoostProp::cleanUpAndReplace(v31, v40, v22);
        if ( !(unsigned int)CWindowProp::SetProp(v23, (unsigned __int64)v39) )
        {
          (**(void (__fastcall ***)(GroupedFGBoostProp *))v23)(v23);
          return (unsigned int)-1073741811;
        }
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v42, (struct _EX_PUSH_LOCK *)&unk_1C02D2E50);
        GroupedFGBoostProp::doImmediateBoostAll(v23, 1LL);
        v16 = v42;
        goto LABEL_11;
      }
LABEL_39:
      (**(void (__fastcall ***)(GroupedFGBoostProp *))v31)(v31);
      return (unsigned int)-1073741801;
    }
    if ( v20 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x67667355u)
        || v19 + 16 < v19 )
      {
        goto LABEL_39;
      }
      v24 = (_QWORD *)ExAllocatePool2(v35 & 0xFFFFFFFFFFFFFFFDuLL, v19 + 16, v32);
      Pool2 = (__int64)v24;
      if ( !v24
        || (_InterlockedIncrement64((volatile signed __int64 *)v18 + 14),
            *v24 = 1734767445LL,
            Pool2 = (__int64)(v24 + 2),
            v24 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v18 + 1),
          (const void *)0x67667355);
      }
      goto LABEL_17;
    }
    if ( v20 != 2 )
      goto LABEL_39;
    v33 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x67667355u, &v33) )
    {
      v33 = (unsigned __int64)&v35;
      v34 = (struct tagWND **)&v32;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v18,
                (__int64)&v33,
                &v30);
      goto LABEL_17;
    }
    LOBYTE(v42) = 0;
    if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
    {
      v26 = v19 + 16;
      LOBYTE(v42) = 1;
      v30 = v19 + 16;
    }
    Pool2 = ExAllocatePool2(v25, v26, 1734767445LL);
    if ( !Pool2 )
      goto LABEL_39;
    _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( (_BYTE)v42 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v18,
                              Pool2,
                              v33,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_17;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v18,
                                 Pool2,
                                 v33,
                                 BackTrace) )
    {
      goto LABEL_18;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_39;
  }
  v7 = gpLeakTrackingAllocator;
  v8 = 8 * v5;
  v35 = v5;
  LODWORD(v39) = 1734767445;
  v36 = 260LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  v30 = 8 * v5;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x67667355u)
        || v8 + 16 < v8 )
      {
        return 3221225495LL;
      }
      v27 = (_QWORD *)ExAllocatePool2(v36 & 0xFFFFFFFFFFFFFFFDuLL, v8 + 16, (unsigned int)v39);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v27;
      if ( !v27
        || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
            *v27 = 1734767445LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v27 + 2),
            v27 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v7 + 1),
          (const void *)0x67667355);
      }
      goto LABEL_5;
    }
    if ( v9 != 2 )
      return 3221225495LL;
    v42 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x67667355u, &v42) )
    {
      v33 = (unsigned __int64)&v36;
      v34 = &v39;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                         (__int64)v7,
                                                                                         (__int64)&v33,
                                                                                         &v30);
      goto LABEL_5;
    }
    v29 = 0;
    if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
    {
      v8 += 16LL;
      v29 = 1;
      v30 = v8;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       v28,
                                                                                       v8,
                                                                                       1734767445LL);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      return 3221225495LL;
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(v38);
    if ( v29
      && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v7,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v42,
                              v38) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_5;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v7,
                                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                 v42,
                                 v38) )
    {
      goto LABEL_6;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return 3221225495LL;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     8 * v5,
                                                                                     1734767445LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
LABEL_5:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_6:
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v42, (struct _EX_PUSH_LOCK *)&unk_1C02D2E50);
    v11 = v31;
    GroupedFGBoostProp::doImmediateBoostAll(v31, 0LL);
    ExReleasePushLockExclusiveEx(v42, 0LL);
    KeLeaveCriticalRegion();
    v12 = v40;
    if ( v40 )
    {
      v13 = (_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      v14 = v35;
      v15 = (char *)Src - UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      do
      {
        *v13 = *(_QWORD *)((char *)v13 + (_QWORD)v15);
        ++v13;
        --v14;
      }
      while ( v14 );
      v11 = v31;
    }
    GroupedFGBoostProp::deRefAll(v11);
    GroupedFGBoostProp::cleanUpAndReplace(
      v11,
      v12,
      (struct _EPROCESS **)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v30, (struct _EX_PUSH_LOCK *)&unk_1C02D2E50);
    GroupedFGBoostProp::doImmediateBoostAll(v11, 1LL);
    v16 = v30;
LABEL_11:
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v6;
  }
  return 3221225495LL;
}
