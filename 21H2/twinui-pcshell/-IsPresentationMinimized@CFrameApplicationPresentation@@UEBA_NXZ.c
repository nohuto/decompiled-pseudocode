/*
 * XREFs of ?IsPresentationMinimized@CFrameApplicationPresentation@@UEBA_NXZ @ 0x18007D230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFrameApplicationPresentation::IsPresentationMinimized(HWND *this)
{
  return IsIconic(this[16]);
}
