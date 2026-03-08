/*
 * XREFs of BmlIsSupportedByMonitorTargetMode @ 0x1C016E808
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C016E538 (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C016E85C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

bool __fastcall BmlIsSupportedByMonitorTargetMode(__int64 a1, unsigned __int8 a2)
{
  int IsSupportedByMonitor; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  _QWORD *v10; // rdi
  unsigned __int8 v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0;
  v11 = 0;
  IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(
                           (DMMVIDPNTARGETMODE *)a1,
                           a2,
                           &v11,
                           (enum _D3DKMDT_MODE_PRUNING_REASON *const)&v12);
  v8 = IsSupportedByMonitor;
  if ( IsSupportedByMonitor >= 0 )
    return v11 != 0;
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  v10[3] = v8;
  v10[4] = *(unsigned int *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 40) )
    WdLogSingleEntry0(1LL);
  v10[5] = *(_QWORD *)(a1 + 40);
  return 0;
}
