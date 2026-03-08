/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C03CD0F0
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CB020 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01CB6F0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C03CF094 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C01CBAB0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C02D24A4 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1C03CD3D8 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C03CEE38 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1C03CEE84 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  struct _KMUTANT *v1; // rbx
  _QWORD **v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  struct _EX_RUNDOWN_REF **v6; // rbp

  v1 = (struct _KMUTANT *)((char *)this + 160);
  KeWaitForSingleObject((char *)this + 160, Executive, 0, 0, 0LL);
  v3 = (_QWORD **)((char *)this + 216);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v6 = (struct _EX_RUNDOWN_REF **)(v4 - 1);
    v5[1] = v3;
    if ( v4[4] )
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)(v4 - 1));
    BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v6, 1u);
    DXGALLOCATIONREFERENCE::AssignNull(v6 + 4);
    BLTQUEUE::InsertQueueTail(this, (char *)this + 232, v6, 1LL);
  }
  if ( *((_BYTE *)this + 573) || *((_BYTE *)this + 574) )
  {
    *(_WORD *)((char *)this + 573) = 0;
    BLTQUEUE::FinishCommand(this, 0);
  }
  KeReleaseMutex(v1, 0);
}
