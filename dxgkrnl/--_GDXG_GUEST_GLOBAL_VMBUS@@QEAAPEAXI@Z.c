/*
 * XREFs of ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C0050BF8
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C030CE70 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C030DD7C (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  return P;
}
