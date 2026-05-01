/*
 * XREFs of ?Uninitialize@VirtualDesktopDataSource@@UEAAXXZ @ 0x1803E5150
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x1803E5198 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopDataSource::Uninitialize(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v2, this + 38);
  VirtualDesktopDataSource::UninitializeInternal((VirtualDesktopDataSource *)&this[-3]);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v2);
}
