/*
 * XREFs of ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C00E7FF8
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BE664 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 */

struct tagPROCESSINFO *__fastcall CTouchProcessor::GetInputProcessContext(CTouchProcessor *this, void *a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = (int)a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v4 = HMValidateHandleNoSecure(v2, 19);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 472);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 360) & 8) != 0 )
      {
        v6 = *(_QWORD *)(v4 + 384);
        if ( v6 )
          return *(struct tagPROCESSINFO **)(v6 + 88);
      }
    }
  }
  return (struct tagPROCESSINFO *)CurrentProcessWin32Process;
}
