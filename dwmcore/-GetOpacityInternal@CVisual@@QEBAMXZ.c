/*
 * XREFs of ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180038938
 * Callers:
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1800095EC (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180023860 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800388A0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801D4FFC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5798 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetOpacityInternal(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v1 + 4) & 0x8000000) == 0 )
    return *(float *)&FLOAT_1_0;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x5000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(float *)(i + 4);
}
