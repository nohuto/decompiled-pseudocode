/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1C003CF4C
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C003CD30 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C003CFBC (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C00C4DC8 (EtwInitializeAsyncKeyMonitor.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(CAsyncKeyEventMonitor *a1)
{
  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x400) != 0
    && (qword_1C028DB28 & 0x400) == qword_1C028DB28
    && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
  {
    CAsyncKeyEventMonitor::OnKeyStateRequested(a1, *(_DWORD *)(*((_QWORD *)a1 + 53) + 56LL));
  }
}
