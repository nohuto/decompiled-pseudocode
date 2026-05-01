/*
 * XREFs of ?Shutdown@JointResizeAcc@@UEAAXXZ @ 0x18048F120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall JointResizeAcc::Shutdown(HWND *this)
{
  DestroyWindow(this[3]);
  this[3] = 0LL;
}
