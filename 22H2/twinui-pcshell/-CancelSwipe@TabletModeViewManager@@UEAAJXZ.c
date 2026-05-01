/*
 * XREFs of ?CancelSwipe@TabletModeViewManager@@UEAAJXZ @ 0x1804710A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModeViewManager::CancelSwipe(TabletModeViewManager *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( !v2 )
    return 2147943568LL;
  if ( !*((_BYTE *)this + 88) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
  return 0LL;
}
