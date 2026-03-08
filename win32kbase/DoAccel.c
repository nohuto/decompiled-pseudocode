/*
 * XREFs of DoAccel @ 0x1C0217870
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00F449A (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0232E18 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 */

void __fastcall DoAccel(__int64 a1, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax

  v5 = (int)a1;
  v8 = SGDGetUserSessionState(a1, a2, a3, a4);
  CDeviceAcceleration::Accelerate(*(CDeviceAcceleration **)(v8 + 24 * (v5 + 667)), a2, a3, a4);
}
