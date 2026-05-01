/*
 * XREFs of ?_OnMessageHandler@ShellFeedsExperienceManagerImpl@@AEAAJI_K_J@Z @ 0x1800B8D10
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8C04 (-_OnDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnMessageHandler(ShellFeedsExperienceManagerImpl *this, int a2)
{
  if ( a2 == *((_DWORD *)this + 34) )
    ShellFeedsExperienceManagerImpl::_OnDeferredSuspensionTimer(this);
  return 0LL;
}
