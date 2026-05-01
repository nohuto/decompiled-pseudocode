/*
 * XREFs of ??1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ @ 0x1800D6500
 * Callers:
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$2 @ 0x1800D6CC5 (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$2.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$1 @ 0x1800D6F5F (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x18044A040 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

void __fastcall KioskPositioner::KioskPositionerConfiguration::~KioskPositionerConfiguration(
        KioskPositioner::KioskPositionerConfiguration *this)
{
  if ( *(_QWORD *)this )
    std::default_delete<PrimaryAppProxyBase>::operator()();
}
