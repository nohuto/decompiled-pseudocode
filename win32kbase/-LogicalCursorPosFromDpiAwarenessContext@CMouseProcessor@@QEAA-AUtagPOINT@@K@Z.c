/*
 * XREFs of ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C000BCC8
 * Callers:
 *     ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C007A118 (-CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C007C068 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C000AD50 (PhysicalToLogicalDPIPoint.c)
 */

struct tagPOINT __fastcall CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(
        CMouseProcessor *this,
        __int64 a2,
        unsigned int a3)
{
  *(_QWORD *)a2 = 0LL;
  if ( (((unsigned __int16)(a3 >> 8) ^ (unsigned __int16)(*((_DWORD *)this + 17) >> 8)) & 0x1FF) != 0 )
  {
    PhysicalToLogicalDPIPoint((_QWORD *)a2, (_QWORD *)gpsi + 620, a3, 0LL);
  }
  else
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 15);
    *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 16);
  }
  return (struct tagPOINT)a2;
}
