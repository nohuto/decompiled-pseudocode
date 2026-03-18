/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C01BD108
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01BD564 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01D7F3C (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A4E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     EtwTracePointerCoalesce @ 0x1C013AC70 (EtwTracePointerCoalesce.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C2CB8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01CCB18 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C01D9E10 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CoalesceNodeWithPrevious(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rax
  int v13; // r8d
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  int v15; // ecx
  int v16; // edx
  unsigned int v18; // [rsp+78h] [rbp+48h] BYREF

  v18 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9850);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9852);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9853);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9854);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9855);
  if ( (*(_DWORD *)a4 & 0x800000) != 0 || (*(_DWORD *)a4 & 0x8000000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9856);
  if ( *(int *)a4 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9857);
  if ( (*(_DWORD *)a4 & 0x100000) != 0 && (*(_DWORD *)a4 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9858);
  if ( *((_DWORD *)a4 + 59) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9859);
  v11 = a6;
  v12 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v12 )
      goto LABEL_28;
    v13 = 9862;
  }
  else
  {
    if ( !v12 )
      goto LABEL_28;
    v13 = 9866;
  }
  a6 = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v13);
LABEL_28:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 86), &v18);
  if ( !ValidNodeInFrame )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9877);
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9878);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 1) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9879);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 0x800000) != 0 || (*(_DWORD *)ValidNodeInFrame & 0x8000000) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9880);
  }
  if ( *(int *)ValidNodeInFrame < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9882);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 0x100000) != 0 && (*(_DWORD *)ValidNodeInFrame & 0x400000) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9883);
  }
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9884);
  }
  if ( *((_DWORD *)ValidNodeInFrame + 59) > 0x64u )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9886);
  }
  CTouchProcessor::UpdateMsgData(
    (CTouchProcessor *)this,
    *((_QWORD *)ValidNodeInFrame + 2),
    *((_DWORD *)a2 + 10),
    a5,
    *((_QWORD *)a4 + 2));
  *((_QWORD *)a4 + 2) = *((_QWORD *)ValidNodeInFrame + 2);
  *((_DWORD *)a4 + 59) = *((_DWORD *)ValidNodeInFrame + 59) + 1;
  *((_DWORD *)a4 + 86) = v18;
  if ( !v11 )
  {
    if ( (*(_DWORD *)ValidNodeInFrame & 0x80000) == 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9931);
    }
    if ( (*(_DWORD *)ValidNodeInFrame & 0x800000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9932);
    }
    if ( (*(_DWORD *)ValidNodeInFrame & 0x8000000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9933);
    }
    if ( *(int *)a4 < 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9934);
    }
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9935);
    }
    *(_DWORD *)a4 |= 0x80000u;
    v15 = *(_DWORD *)a4 ^ (*(_DWORD *)ValidNodeInFrame ^ *(_DWORD *)a4) & 0x100000;
    *(_DWORD *)a4 = v15;
    v16 = v15 ^ (*(_DWORD *)ValidNodeInFrame ^ v15) & 0x200000;
    *(_DWORD *)a4 = v16;
    *(_DWORD *)a4 = v16 ^ (*(_DWORD *)ValidNodeInFrame ^ v16) & 0x400000;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 80), *((_WORD *)a4 + 86), v11);
  return *((_QWORD *)a4 + 2);
}
