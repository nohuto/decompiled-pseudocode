/*
 * XREFs of ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00FCA3C
 * Callers:
 *     ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C00F9420 (-DeferredSetVprCallback@@YAXPEAX@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FE564 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C010049C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FD558 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

char __fastcall VIDMM_SEGMENT::CheckFreeVPRReserve(VIDMM_SEGMENT *this, struct _DXGKARG_SETVIDEOPROTECTEDREGION *a2)
{
  char v2; // di
  VIDMM_GLOBAL *v6; // r14
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 57) )
    return 0;
  if ( *((_QWORD *)this + 52) + *((_QWORD *)this + 58) == *((_QWORD *)this + 53) )
  {
    v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v6 + 8LL) )
    {
      VIDMM_SEGMENT::FreeVPRReserve(this);
    }
    else
    {
      memset(v7, 0, 0x58uLL);
      LODWORD(v7[6]) = 0;
      v2 = 1;
      LODWORD(v7[0]) = 128;
      v7[5] = this;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v7, 1);
    }
    a2->NewSize = 0LL;
    a2->NewStartOffset = *((_QWORD *)this + 53);
  }
  return v2;
}
