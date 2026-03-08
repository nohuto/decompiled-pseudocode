/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x14000C658
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x140007058 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@s.c)
 * Callees:
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x14000D8F4 (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<DISPLAYCONFIG_MODE_INFO>>::~_Tidy_guard<std::vector<DISPLAYCONFIG_MODE_INFO>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy();
  return result;
}
