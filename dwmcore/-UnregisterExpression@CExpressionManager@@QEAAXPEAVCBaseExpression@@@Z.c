/*
 * XREFs of ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800995D8
 * Callers:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009AF40 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 * Callees:
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x18009942C (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 */

void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  int v2; // [rsp+20h] [rbp-18h]

  CExpressionManager::UnregisterExpressionWorker(
    (__int64)this,
    (__int64)a2,
    *((_QWORD *)a2 + 23),
    *((_DWORD *)a2 + 48),
    v2,
    0);
}
