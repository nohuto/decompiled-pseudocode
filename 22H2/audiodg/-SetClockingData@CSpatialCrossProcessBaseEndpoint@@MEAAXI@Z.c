/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x14006AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x140068AE8 (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x140068F14 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 *     ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAXXZ @ 0x1400691C0 (-Commit@ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(CSpatialCrossProcessBaseEndpoint *this, int a2)
{
  signed __int64 v3; // rax
  __int64 v4; // rdx
  signed __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
      *((_QWORD *)this + 90),
      (__int64)v6);
    if ( v6[0] )
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 161) + 32LL), 0LL, 0LL);
      v4 = v6[0];
      *(_QWORD *)(v6[0] + 80LL) += *(unsigned int *)(v6[0] + 96LL);
      v5 = *(_QWORD *)(v4 + 80);
      if ( v5 > v3 )
        v5 = v3;
      *(_QWORD *)(v4 + 80) = v5;
      util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(v6);
    }
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(v6);
  }
}
