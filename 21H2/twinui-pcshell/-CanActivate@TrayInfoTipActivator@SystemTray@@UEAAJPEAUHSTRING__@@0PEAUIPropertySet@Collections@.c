/*
 * XREFs of ?CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@Foundation@Windows@@PEAE@Z @ 0x1803EA850
 * Callers:
 *     ?Activate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@00PEAUIPropertySet@Collections@Foundation@Windows@@PEAU?$IVectorView@PEAUHSTRING__@@@567@@Z @ 0x1803EA7A0 (-Activate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@00PEAUIPropertySet@Collections@Fo.c)
 * Callees:
 *     ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x1803EA9E4 (-MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipActivator::CanActivate(
        SystemTray::TrayInfoTipActivator *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        unsigned __int8 *a5)
{
  *a5 = SystemTray::TrayUtility::MatchesTrayInfoTipAppIdFormat(a2, a2);
  return 0LL;
}
