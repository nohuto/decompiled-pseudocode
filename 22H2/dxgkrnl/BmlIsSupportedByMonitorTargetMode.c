/*
 * XREFs of BmlIsSupportedByMonitorTargetMode @ 0x1C0144A74
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0144804 (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C011E6B8 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

bool __fastcall BmlIsSupportedByMonitorTargetMode(__int64 a1, __int64 a2)
{
  int IsSupportedByMonitor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+40h] [rbp+18h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0;
  v12 = 0;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a1,
                           a2,
                           &v12,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v13);
  v6 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor >= 0 )
    return v12 != 0;
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
  v9[3] = v6;
  v9[4] = *(unsigned int *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 40);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, v8);
    WdLogEvent5_WdAssertion(v11);
    v10 = *(_QWORD *)(a1 + 40);
  }
  v9[5] = v10;
  return 0;
}
