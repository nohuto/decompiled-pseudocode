/*
 * XREFs of ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180266C50
 * Callers:
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A19E4 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2248 (-AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ.c)
 *     ?CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1800A2A04 (-CreateKeyAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 *     ?PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ @ 0x1800CC0B8 (-PrecreateStartMenuConfigRegKey@StartRegHelpers@StartUI@@YAXXZ.c)
 *     ?SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18012582C (-SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@Y.c)
 *     ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x18034A134 (-LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ.c)
 *     ?GetDragDropExtensionClsId@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU_GUID@@XZ @ 0x1804D22C8 (-GetDragDropExtensionClsId@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1801B0FD8 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v4, retaddr, 0, (int)a4);
}
