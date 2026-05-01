/*
 * XREFs of _VirtualDesktopDataSource::CurrentVirtualDesktopChanged_::_1_::dtor$1 @ 0x1803E3F78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopDataSource::CurrentVirtualDesktopChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((RTL_SRWLOCK **)(a2 + 40));
}
