/*
 * XREFs of ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x1C01EB530
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00C9900 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C0202354 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01F280C (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 */

void __fastcall CTouchProcessor::CheckFreeOnDeparture(struct _KTHREAD **this, unsigned __int16 a2)
{
  struct CInputPointerNode *NodeById; // rax

  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById
    && *((_DWORD *)NodeById + 14) == 3
    && *((struct CInputPointerNode **)NodeById + 32) == (struct CInputPointerNode *)((char *)NodeById + 256)
    && !*((_DWORD *)NodeById + 9) )
  {
    CTouchProcessor::FreeNode((CTouchProcessor *)this, NodeById);
  }
}
