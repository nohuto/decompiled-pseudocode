/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03CF0DC
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CB020 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C01CBAB0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C035591C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C03CF094 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::ResetWorker(BLTQUEUE *this)
{
  struct DXGSWAPCHAIN **v2; // rcx
  int v3; // eax

  BLTQUEUE::ResetInternal(this);
  KeWaitForSingleObject((char *)this + 2720, Executive, 0, 0, 0LL);
  v2 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
  if ( v2 )
  {
    v3 = SwapChainAbandonInternal(*v2);
    if ( v3 < 0 )
      WdLogSingleEntry2(3LL, **((_QWORD **)this + 339), v3);
    ObfDereferenceObject(*((PVOID *)this + 339));
    *((_QWORD *)this + 339) = 0LL;
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 2720), 0);
  *((_BYTE *)this + 569) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
