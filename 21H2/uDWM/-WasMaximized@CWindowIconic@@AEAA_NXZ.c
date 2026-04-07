/*
 * XREFs of ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x180045178
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004506C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180097F74 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

char __fastcall CWindowIconic::WasMaximized(CWindowIconic *this)
{
  char v2; // bl
  CWindowData *v3; // rcx
  struct CWindowData *MDIOwner; // rax
  WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 9);
  if ( (*((_BYTE *)v3 + 610) & 4) == 0 || (MDIOwner = CWindowData::GetMDIOwner(v3)) == 0LL )
    MDIOwner = (struct CWindowData *)*((_QWORD *)this + 10);
  wndpl.length = 44;
  memset(&wndpl.flags, 0, 40);
  if ( GetWindowPlacement(*((HWND *)MDIOwner + 5), &wndpl) )
    return (wndpl.flags & 2) != 0;
  return v2;
}
