/*
 * XREFs of UpdatePointerDeviceSystemMetrics @ 0x1C01E87E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01F8448 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

void __fastcall UpdatePointerDeviceSystemMetrics(struct DEVICEINFO *a1, bool a2)
{
  CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(a1, a1, a2);
}
