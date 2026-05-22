/*
 * XREFs of ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1801202E4
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x180121D84 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C38D8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180123288 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyZoomDelta(ControllerProcessor *this)
{
  float v1; // xmm0_4
  __int64 v3; // rdx

  v1 = *((float *)this + 103);
  if ( v1 == 0.0 )
  {
    if ( ((*((_DWORD *)this + 309) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    v3 = 16LL;
    if ( v1 <= 1.0 )
      v3 = 32LL;
    ControllerProcessor::TryUpdateInteractionType(this, v3);
    if ( ((*((_DWORD *)this + 309) - 16) & 0xFFFFFFEF) == 0 )
      ManipulationInjector::InjectZoom((ControllerProcessor *)((char *)this + 424), *((float *)this + 103), 0);
    *((_DWORD *)this + 103) = 0;
  }
  return 0LL;
}
