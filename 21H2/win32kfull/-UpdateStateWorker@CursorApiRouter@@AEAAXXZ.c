/*
 * XREFs of ?UpdateStateWorker@CursorApiRouter@@AEAAXXZ @ 0x1C0072EF0
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0071510 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CursorApiRouter::UpdateStateWorker(CursorApiRouter *this)
{
  int v1; // [rsp+60h] [rbp+8h] BYREF
  int v2; // [rsp+64h] [rbp+Ch]

  v2 = HIDWORD(this);
  v1 = 3;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       (__int64)&Feature_DesktopDWMCursor__private_reporting,
                       0x1A8A411u,
                       0,
                       0,
                       6u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0x1A8A411u,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_Win32kBugcheckOnFailedBCryptgenRandom_logged_traits,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v1,
      0LL,
      0,
      1uLL);
  }
  dword_1C03374D0 = 2;
}
