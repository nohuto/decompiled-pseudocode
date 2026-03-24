/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1C0006A00
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0006820 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C0006A70 (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C00083E8 (EtwInitializeAsyncKeyMonitor.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(CAsyncKeyEventMonitor *a1)
{
  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1C0249748 - 1) > 2u
    && (qword_1C0249730 & 0x400) != 0
    && (qword_1C0249738 & 0x400) == qword_1C0249738
    && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
  {
    CAsyncKeyEventMonitor::OnKeyStateRequested(a1, *(_DWORD *)(*((_QWORD *)a1 + 53) + 56LL));
  }
}
