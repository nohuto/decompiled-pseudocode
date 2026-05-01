/*
 * XREFs of ?Destroy@ForegroundStagingWindow@@UEAAXXZ @ 0x1803ED450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundStagingWindow::Destroy(HWND *this)
{
  DestroyWindow(this[3]);
}
