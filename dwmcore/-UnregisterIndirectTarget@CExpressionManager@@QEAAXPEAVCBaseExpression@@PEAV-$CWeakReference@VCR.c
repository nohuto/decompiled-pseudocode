/*
 * XREFs of ?UnregisterIndirectTarget@CExpressionManager@@QEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@@Z @ 0x180213C5C
 * Callers:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009AF40 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 * Callees:
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x18009942C (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 */

void __fastcall CExpressionManager::UnregisterIndirectTarget(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // [rsp+20h] [rbp-18h]

  CExpressionManager::UnregisterExpressionWorker(a1, a2, a3, a4, v4, 1);
}
