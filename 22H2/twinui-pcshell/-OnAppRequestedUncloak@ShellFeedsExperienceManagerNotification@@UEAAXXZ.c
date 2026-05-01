/*
 * XREFs of ?OnAppRequestedUncloak@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x1800B6620
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8AD8 (-_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnAppRequestedUncloak(
        ShellFeedsExperienceManagerNotification *this)
{
  ShellFeedsExperienceManagerImpl *v1; // rcx

  v1 = (ShellFeedsExperienceManagerImpl *)*((_QWORD *)this + 5);
  if ( v1 )
    ShellFeedsExperienceManagerImpl::_OnAppRequestedUncloak(v1);
}
