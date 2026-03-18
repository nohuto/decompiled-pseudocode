/*
 * XREFs of ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C009BBEC
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0009088 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C009B9E8 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 * Callees:
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C00553D0 (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 */

void __fastcall CMouseProcessor::MouseMoveTimes::EnsureMoveTime(LARGE_INTEGER *this)
{
  LARGE_INTEGER *v2; // rax
  LARGE_INTEGER v3[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !this[1].QuadPart )
    this->QuadPart = 0LL;
  if ( !this->QuadPart )
  {
    v2 = CMouseProcessor::EventTime::Now(v3);
    *(_OWORD *)&this->LowPart = *(_OWORD *)&v2->LowPart;
    this[2] = v2[2];
  }
}
