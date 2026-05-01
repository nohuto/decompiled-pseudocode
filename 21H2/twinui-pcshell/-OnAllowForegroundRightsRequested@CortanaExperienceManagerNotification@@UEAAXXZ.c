/*
 * XREFs of ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180229470
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18022B24C (-_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18022B4BC (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnAllowForegroundRightsRequested(
        CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    CortanaSharedExperienceManager::_AllowForegroundRights(*(CortanaSharedExperienceManager **)(v1 + 48));
}
