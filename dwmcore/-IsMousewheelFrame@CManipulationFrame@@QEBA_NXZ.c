/*
 * XREFs of ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180129132
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019A7E4 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019BEFC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C094 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019DA94 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18019E5C8 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801A3D00 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CManipulationFrame::IsMousewheelFrame(CManipulationFrame *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 4) != 1 || (*((_DWORD *)this + 95) & 0x180000) == 0 )
    return 0;
  return result;
}
