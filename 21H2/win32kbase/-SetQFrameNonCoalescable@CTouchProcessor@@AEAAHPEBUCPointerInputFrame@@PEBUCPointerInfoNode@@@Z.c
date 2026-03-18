/*
 * XREFs of ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01D72C4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01D6E88 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetQFrameNonCoalescable(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 result; // rax

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, 0LL, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = *((unsigned int *)a3 + 2);
  if ( (unsigned int)v11 >= *((_DWORD *)a2 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v11, v10);
    v11 = *((unsigned int *)a3 + 2);
  }
  v12 = *((_QWORD *)a2 + 31);
  v13 = 160LL * (unsigned int)v11;
  if ( *(_DWORD *)(v13 + v12) != (_DWORD)v11 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v11, v12);
    LODWORD(v11) = *((_DWORD *)a3 + 2);
    v12 = *((_QWORD *)a2 + 31);
  }
  result = 1LL;
  *(_DWORD *)(160LL * (unsigned int)v11 + v12 + 140) &= ~1u;
  return result;
}
