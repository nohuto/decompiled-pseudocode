/*
 * XREFs of ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C01BE990
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BE664 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C5AE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(CTouchProcessor *this, int a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax

  if ( !a2 )
    return 0LL;
  v2 = 240LL * (unsigned int)(a2 - 1);
  if ( v2 > 0xFFFFFFFF )
    return 0LL;
  result = (unsigned int)(v2 + 400);
  if ( (unsigned int)result < 0x190 )
    return 0LL;
  return result;
}
