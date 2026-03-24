/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C018A128
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018A584 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C019F42C (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CCF60 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTracePointerCoalesce @ 0x1C0123530 (EtwTracePointerCoalesce.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E998 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C01A0B24 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
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
  int v11; // ecx
  int v12; // esi
  __int64 v13; // rax
  int v14; // r8d
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  unsigned int v21; // [rsp+78h] [rbp+48h] BYREF

  v21 = 0;
  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9247);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9249);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9250);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9251);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9252);
  v11 = *(_DWORD *)a4;
  if ( (*(_DWORD *)a4 & 0x800000) != 0 || (v11 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9253);
    v11 = *(_DWORD *)a4;
  }
  if ( v11 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9254);
    v11 = *(_DWORD *)a4;
  }
  if ( (v11 & 0x100000) != 0 && (v11 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9255);
  if ( *((_DWORD *)a4 + 59) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9256);
  v12 = a6;
  v13 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v13 )
      goto LABEL_28;
    v14 = 9259;
  }
  else
  {
    if ( !v13 )
      goto LABEL_28;
    v14 = 9263;
  }
  a6 = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, v14);
LABEL_28:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 86), &v21);
  if ( !ValidNodeInFrame )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9274);
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9275);
  }
  v16 = *(_DWORD *)ValidNodeInFrame;
  if ( (*(_DWORD *)ValidNodeInFrame & 1) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9276);
    v16 = *(_DWORD *)ValidNodeInFrame;
  }
  if ( (v16 & 0x800000) != 0 || (v16 & 0x8000000) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9277);
    v16 = *(_DWORD *)ValidNodeInFrame;
  }
  if ( v16 < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9279);
    v16 = *(_DWORD *)ValidNodeInFrame;
  }
  if ( (v16 & 0x100000) != 0 && (v16 & 0x400000) == 0 )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9280);
  }
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9281);
  }
  if ( *((_DWORD *)ValidNodeInFrame + 59) > 0x64u )
  {
    a6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9283);
  }
  CTouchProcessor::UpdateMsgData(
    (CTouchProcessor *)this,
    *((_QWORD *)ValidNodeInFrame + 2),
    *((_DWORD *)a2 + 10),
    a5,
    *((_QWORD *)a4 + 2));
  *((_QWORD *)a4 + 2) = *((_QWORD *)ValidNodeInFrame + 2);
  *((_DWORD *)a4 + 59) = *((_DWORD *)ValidNodeInFrame + 59) + 1;
  *((_DWORD *)a4 + 86) = v21;
  if ( !v12 )
  {
    v17 = *(_DWORD *)ValidNodeInFrame;
    if ( (*(_DWORD *)ValidNodeInFrame & 0x80000) == 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9328);
      v17 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v17 & 0x800000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9329);
      v17 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v17 & 0x8000000) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9330);
    }
    if ( *(int *)a4 < 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9331);
    }
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
    {
      a6 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 9332);
    }
    *(_DWORD *)a4 |= 0x80000u;
    v18 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ *(_DWORD *)ValidNodeInFrame) & 0x100000;
    *(_DWORD *)a4 = v18;
    v19 = v18 ^ (v18 ^ *(_DWORD *)ValidNodeInFrame) & 0x200000;
    *(_DWORD *)a4 = v19;
    *(_DWORD *)a4 = v19 ^ (v19 ^ *(_DWORD *)ValidNodeInFrame) & 0x400000;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 80), *((_WORD *)a4 + 86), v12);
  return *((_QWORD *)a4 + 2);
}
