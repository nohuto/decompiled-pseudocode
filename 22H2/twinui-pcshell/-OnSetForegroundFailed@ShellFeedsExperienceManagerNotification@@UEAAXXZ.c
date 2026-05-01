/*
 * XREFs of ?OnSetForegroundFailed@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x1800B66B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8DCC (-_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnSetForegroundFailed(
        ShellFeedsExperienceManagerNotification *this)
{
  ShellFeedsExperienceManagerImpl *v1; // rcx

  v1 = (ShellFeedsExperienceManagerImpl *)*((_QWORD *)this + 5);
  if ( v1 )
    ShellFeedsExperienceManagerImpl::_OnSetForegroundFailed(v1);
}
