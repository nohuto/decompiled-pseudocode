/*
 * XREFs of MiUnlockStealVm @ 0x140336320
 * Callers:
 *     MiLockStealSystemVm @ 0x1402EB854 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 * Callees:
 *     MiAttachThreadDone @ 0x14026FAC8 (MiAttachThreadDone.c)
 *     MiUnlockSystemVa @ 0x14029277C (MiUnlockSystemVa.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 *     KeForceDetachProcess @ 0x140311DD8 (KeForceDetachProcess.c)
 */

void __fastcall MiUnlockStealVm(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rdi

  MiUnlockSystemVa(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    KeForceDetachProcess((_OWORD *)(a1 + 72), 0);
    MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v2 = *(struct _DMA_ADAPTER **)(a1 + 56);
    if ( v2 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), a1 + 72);
      HalPutDmaAdapter(v2);
    }
  }
}
