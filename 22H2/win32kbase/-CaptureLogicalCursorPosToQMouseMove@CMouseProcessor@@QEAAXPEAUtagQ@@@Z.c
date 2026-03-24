/*
 * XREFs of ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C004386C
 * Callers:
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0043840 (CaptureLogicalCursorPosToQMouseMove.c)
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C009E038 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 */

void __fastcall CMouseProcessor::CaptureLogicalCursorPosToQMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  __int64 v2; // rax
  __int64 v4; // xmm0_8
  int v5; // edi
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  if ( v2 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 424LL) + 280LL);
    CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)&v6);
    v4 = v6;
  }
  else
  {
    v4 = *(_QWORD *)((char *)this + 68);
    v5 = *((_DWORD *)this + 19);
  }
  *((_QWORD *)a2 + 23) = v4;
  *((_DWORD *)a2 + 48) = v5;
}
