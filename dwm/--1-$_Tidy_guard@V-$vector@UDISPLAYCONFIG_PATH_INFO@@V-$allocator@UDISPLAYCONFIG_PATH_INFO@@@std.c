/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x14000C678
 * Callers:
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x14000CE78 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 * Callees:
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXXZ @ 0x14000D930 (-_Tidy@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<DISPLAYCONFIG_PATH_INFO>>::~_Tidy_guard<std::vector<DISPLAYCONFIG_PATH_INFO>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<DISPLAYCONFIG_PATH_INFO>::_Tidy();
  return result;
}
