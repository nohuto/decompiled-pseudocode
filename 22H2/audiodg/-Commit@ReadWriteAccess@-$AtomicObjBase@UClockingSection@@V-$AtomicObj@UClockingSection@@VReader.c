/*
 * XREFs of ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAXXZ @ 0x1400691C0
 * Callers:
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14006AE70 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z.c)
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x14006AFB0 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14006B68C (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(
        _QWORD *a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // r9
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int v6; // [rsp+20h] [rbp-18h]
  __int16 v7; // [rsp+24h] [rbp-14h]

  if ( *a1 )
  {
    v1 = a1[1];
    *a1 = 0LL;
    v2 = *(volatile signed __int32 **)(v1 + 56);
    v3 = _InterlockedCompareExchange(v2, 0, 0);
    v6 = 33751041;
    v7 = 1029;
    do
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange(v2, *((unsigned __int8 *)&v6 + (v3 & 0xFFFFFFF7)) | 8, v3);
    }
    while ( v4 != v3 );
  }
  return std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(a1 + 1);
}
