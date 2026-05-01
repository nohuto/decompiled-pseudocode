/*
 * XREFs of ??1ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x18024B890
 * Callers:
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x18024E360 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 *     _CQuickConnectExperienceManager::PopulateDelayLoadedContactCard_::_1_::dtor$0 @ 0x18024E465 (_CQuickConnectExperienceManager--PopulateDelayLoadedContactCard_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024C5F8 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::~ExperienceManager_PopulateDelayLoadedContactCard(
        QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard *this)
{
  *(_QWORD *)this = &QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
