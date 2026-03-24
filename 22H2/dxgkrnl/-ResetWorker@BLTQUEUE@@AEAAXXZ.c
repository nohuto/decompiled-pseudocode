/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FF7D4
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0127404 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C015D80C (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C02ACEFC (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C02FF790 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::ResetWorker(BLTQUEUE *this)
{
  struct DXGSWAPCHAIN **v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rax

  BLTQUEUE::ResetInternal(this);
  KeWaitForSingleObject((char *)this + 2704, Executive, 0, 0, 0LL);
  v2 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 337);
  if ( v2 )
  {
    v3 = SwapChainAbandonInternal(*v2);
    v7 = v3;
    if ( v3 < 0 )
    {
      v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v8 + 24) = **((_QWORD **)this + 337);
      *(_QWORD *)(v8 + 32) = v7;
      WdLogEvent5_WdWarning(v8);
    }
    ObfDereferenceObject(*((PVOID *)this + 337));
    *((_QWORD *)this + 337) = 0LL;
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 2704), 0);
  *((_BYTE *)this + 561) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
