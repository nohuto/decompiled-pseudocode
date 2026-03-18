/*
 * XREFs of ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x1C01BFD54
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C01C04E0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01C6170 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 */

void __fastcall CTouchProcessor::CheckFreeOnDeparture(CTouchProcessor *this, unsigned __int16 a2)
{
  struct CInputPointerNode *NodeById; // rax

  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById
    && *((_DWORD *)NodeById + 14) == 3
    && *((struct CInputPointerNode **)NodeById + 32) == (struct CInputPointerNode *)((char *)NodeById + 256)
    && !*((_DWORD *)NodeById + 9) )
  {
    CTouchProcessor::FreeNode(this, NodeById);
  }
}
