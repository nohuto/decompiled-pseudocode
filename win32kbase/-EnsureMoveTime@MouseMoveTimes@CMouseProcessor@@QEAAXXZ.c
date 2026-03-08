/*
 * XREFs of ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C007173C
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0007110 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0071488 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 * Callees:
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C007A338 (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 */

void __fastcall CMouseProcessor::MouseMoveTimes::EnsureMoveTime(CMouseProcessor::MouseMoveTimes *this)
{
  __int64 v2; // rax
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 1) )
    *(_QWORD *)this = 0LL;
  if ( !*(_QWORD *)this )
  {
    v2 = CMouseProcessor::EventTime::Now(v3);
    *(_OWORD *)this = *(_OWORD *)v2;
    *((_QWORD *)this + 2) = *(_QWORD *)(v2 + 16);
  }
}
