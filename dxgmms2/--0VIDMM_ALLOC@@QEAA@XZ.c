/*
 * XREFs of ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C001BB36
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 */

VIDMM_ALLOC *__fastcall VIDMM_ALLOC::VIDMM_ALLOC(VIDMM_ALLOC *this)
{
  memset(this, 0, 0xF0uLL);
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)this + 7, SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 29);
  return this;
}
