/*
 * XREFs of UpdatePointerDeviceSystemMetrics @ 0x1C0218D70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C0232C38 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

void __fastcall UpdatePointerDeviceSystemMetrics(struct DEVICEINFO *a1, bool a2)
{
  CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(a1, a1, a2);
}
