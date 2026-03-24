/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1C0005DD0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0005BF0 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C0005E40 (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C0007060 (EtwInitializeAsyncKeyMonitor.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(CAsyncKeyEventMonitor *a1)
{
  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1C024A738 - 1) > 2u
    && (qword_1C024A720 & 0x400) != 0
    && (qword_1C024A728 & 0x400) == qword_1C024A728
    && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
  {
    CAsyncKeyEventMonitor::OnKeyStateRequested(a1, *(_DWORD *)(*((_QWORD *)a1 + 53) + 56LL));
  }
}
