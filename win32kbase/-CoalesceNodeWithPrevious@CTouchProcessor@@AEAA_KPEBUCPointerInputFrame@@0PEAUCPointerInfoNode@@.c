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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9941);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9943);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9944);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9945);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9946);
  if ( (*(_DWORD *)a4 & 0x800000) != 0 || (*(_DWORD *)a4 & 0x8000000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9947);
  if ( *(int *)a4 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9948);
  if ( (*(_DWORD *)a4 & 0x100000) != 0 && (*(_DWORD *)a4 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9949);
  if ( *((_DWORD *)a4 + 59) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9950);
  v11 = a6;
  v12 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v12 )
      goto LABEL_28;
    v13 = 9953;
  }
  else
  {
    if ( !v12 )
      goto LABEL_28;
    v13 = 9957;
  }
  a6 = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v13);
LABEL_28:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 86), &v18);
  if ( !ValidNodeInFrame )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9968);
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9969);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 1) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9970);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 0x800000) != 0 || (*(_DWORD *)ValidNodeInFrame & 0x8000000) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9971);
  }
  if ( *(int *)ValidNodeInFrame < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9973);
  }
  if ( (*(_DWORD *)ValidNodeInFrame & 0x100000) != 0 && (*(_DWORD *)ValidNodeInFrame & 0x400000) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9974);
  }
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9975);
  }
  if ( *((_DWORD *)ValidNodeInFrame + 59) > 0x64u )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9977);
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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10022);
    }
    if ( (*(_DWORD *)ValidNodeInFrame & 0x800000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10023);
    }
    if ( (*(_DWORD *)ValidNodeInFrame & 0x8000000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10024);
    }
    if ( *(int *)a4 < 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10025);
    }
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10026);
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
