/*
 * XREFs of ?_Tidy@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXXZ @ 0x14000D930
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x14000C678 (--1-$_Tidy_guard@V-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std.c)
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x14000CE78 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14000C484 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Tidy(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
