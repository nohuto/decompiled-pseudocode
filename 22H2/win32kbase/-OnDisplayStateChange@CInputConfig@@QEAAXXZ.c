/*
 * XREFs of ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0018FA8
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C001917C (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0063FF4 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::OnDisplayStateChange(CInputConfig *this)
{
  CInputConfig *v1; // rbx

  v1 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  if ( *((_BYTE *)v1 + 1504) )
    CInputConfig::_CreateLegacyInputSpace(v1);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_NotifyExternalComponents(v1);
}
