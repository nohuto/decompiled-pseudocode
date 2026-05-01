/*
 * XREFs of ?BringToFront@CDragVisual@@UEAAXXZ @ 0x1804948F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDragVisual::BringToFront(HWND *this)
{
  SetWindowPos(this[16], 0LL, 0, 0, 0, 0, 0x13u);
}
