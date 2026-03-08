/*
 * XREFs of ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C0247B60
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0247EA8 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0248474 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C024B080 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 */

SimpleHapticsController *__fastcall SimpleHapticsController::`scalar deleting destructor'(
        SimpleHapticsController *this)
{
  SimpleHapticsController::DeInitialize(this);
  Win32FreePool(this);
  return this;
}
