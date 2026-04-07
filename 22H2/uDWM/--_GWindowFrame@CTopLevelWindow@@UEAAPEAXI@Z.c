/*
 * XREFs of ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x18004F060
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x18004F0A8 (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::`scalar deleting destructor'(
        CTopLevelWindow::WindowFrame *this,
        char a2)
{
  CTopLevelWindow::WindowFrame::~WindowFrame(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CTopLevelWindow::WindowFrame *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
