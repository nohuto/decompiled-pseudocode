/*
 * XREFs of ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x1C00EAABC
 * Callers:
 *     VidMmTerminateCompanionContext @ 0x1C002D530 (VidMmTerminateCompanionContext.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00AB790 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmTerminateCompanionContext(struct VIDMM_COMPANION_CONTEXT *a1)
{
  if ( KeReadStateSemaphore((PRKSEMAPHORE)((char *)a1 + 24)) )
    VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 80LL)
                                                   + 176LL
                                                   * *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 96LL) + 6LL)));
  operator delete(a1);
}
