/*
 * XREFs of ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C0244E90
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C02451D8 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02457A4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02483A0 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 */

SimpleHapticsController *__fastcall SimpleHapticsController::`scalar deleting destructor'(
        SimpleHapticsController *this)
{
  SimpleHapticsController::DeInitialize(this);
  Win32FreePool(this);
  return this;
}
