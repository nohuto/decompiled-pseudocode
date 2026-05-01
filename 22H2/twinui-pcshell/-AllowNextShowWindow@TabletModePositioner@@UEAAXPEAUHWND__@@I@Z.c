/*
 * XREFs of ?AllowNextShowWindow@TabletModePositioner@@UEAAXPEAUHWND__@@I@Z @ 0x18008E720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::AllowNextShowWindow(TabletModePositioner *this, HWND a2, int a3)
{
  *((_QWORD *)this + 47) = a2;
  *((_DWORD *)this + 96) = a3;
}
