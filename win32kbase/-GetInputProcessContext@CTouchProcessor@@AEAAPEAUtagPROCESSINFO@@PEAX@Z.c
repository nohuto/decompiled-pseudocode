/*
 * XREFs of ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C00F25F0
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01E9B90 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C02083AC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 */

struct tagPROCESSINFO *__fastcall CTouchProcessor::GetInputProcessContext(CTouchProcessor *this, void *a2)
{
  int v2; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = (int)a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v4 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v5 = HMValidateHandleNoSecure(v2, 19);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 472);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 360) & 8) != 0 )
      {
        v8 = *(_QWORD *)(v6 + 384);
        if ( v8 )
          return *(struct tagPROCESSINFO **)(v8 + 88);
      }
    }
  }
  return (struct tagPROCESSINFO *)v4;
}
