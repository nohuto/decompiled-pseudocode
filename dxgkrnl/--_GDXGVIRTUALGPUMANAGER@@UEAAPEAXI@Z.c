/*
 * XREFs of ??_GDXGVIRTUALGPUMANAGER@@UEAAPEAXI@Z @ 0x1C005A510
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C0363370 (-DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 */

DXGVIRTUALGPUMANAGER *__fastcall DXGVIRTUALGPUMANAGER::`scalar deleting destructor'(DXGVIRTUALGPUMANAGER *P, char a2)
{
  *(_QWORD *)P = &DXGVIRTUALGPUMANAGER::`vftable';
  DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
