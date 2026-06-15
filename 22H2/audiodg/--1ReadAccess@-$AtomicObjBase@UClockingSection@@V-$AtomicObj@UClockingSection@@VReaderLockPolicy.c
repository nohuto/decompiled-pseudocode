/*
 * XREFs of ??1ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x140068A70
 * Callers:
 *     ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x140069610 (-GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140066C34 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14006B68C (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 */

void __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadAccess::~ReadAccess(
        __int64 a1)
{
  volatile signed __int32 *v2; // rbx

  if ( *(_QWORD *)a1 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a1 + 8) + 8LL));
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 28) = 0;
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(a1 + 8);
  }
  v2 = *(volatile signed __int32 **)(a1 + 16);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v2);
    }
  }
}
