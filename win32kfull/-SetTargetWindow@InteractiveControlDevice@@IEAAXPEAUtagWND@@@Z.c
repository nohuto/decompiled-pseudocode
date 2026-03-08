/*
 * XREFs of ?SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z @ 0x1C02495A0
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0247EA8 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02492DC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlDevice::SetTargetWindow(InteractiveControlDevice *this, struct tagWND *a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = a2;
  v2[0] = (char *)this + 40;
  HMAssignmentLock(v2, 0LL);
}
