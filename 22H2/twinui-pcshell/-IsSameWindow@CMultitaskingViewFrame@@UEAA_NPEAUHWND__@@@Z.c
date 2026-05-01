/*
 * XREFs of ?IsSameWindow@CMultitaskingViewFrame@@UEAA_NPEAUHWND__@@@Z @ 0x180409A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMultitaskingViewFrame::IsSameWindow(CMultitaskingViewFrame *this, HWND a2)
{
  return *((_QWORD *)this + 5) == (_QWORD)a2;
}
