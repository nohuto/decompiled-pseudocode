/*
 * XREFs of ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE6FC
 * Callers:
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00E8782 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01D2144 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE6CC (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimaryDown(CPointerInfoNode *this)
{
  int IsPrimary; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsPrimary = CPointerInfoNode::IsPrimary(this);
  v3 = 0;
  if ( IsPrimary )
    return (*(_DWORD *)(v2 + 180) & 0x10000) != 0;
  return v3;
}
