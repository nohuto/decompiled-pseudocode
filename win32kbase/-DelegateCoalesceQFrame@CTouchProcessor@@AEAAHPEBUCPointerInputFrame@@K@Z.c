/*
 * XREFs of ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01F0154
 * Callers:
 *     ?DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01EFBF0 (-DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01EFF70 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01EC428 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01FB918 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0201654 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0206AB0 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C0207468 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalesceQFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  struct CPointerInputFrame *v11; // rax
  struct CPointerInputFrame *v12; // rsi
  unsigned int v13; // ebx

  v4 = a3;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15331);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15333);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15334);
  if ( (unsigned int)v4 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15335);
  v7 = *((_QWORD *)a2 + 31) + 160 * v4;
  if ( *(_DWORD *)v7 != (_DWORD)v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15337);
  v8 = *(_DWORD *)(v7 + 140);
  if ( (v8 & 8) != 0 )
  {
    v9 = 9LL;
LABEL_13:
    CTouchProcessor::TrackCoalesceOnReassign(v6, v7, v9);
    return 0LL;
  }
  if ( (v8 & 2) == 0 && *(_DWORD *)(v7 + 144) != 9 )
  {
    v6 = *(unsigned int *)(v7 + 148);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 9 )
        return 0LL;
    }
  }
  if ( (v8 & 1) == 0 )
  {
    v9 = 13LL;
    goto LABEL_13;
  }
  v11 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v12 = v11;
  if ( !v11 )
  {
    v9 = 10LL;
    goto LABEL_13;
  }
  v13 = (unsigned int)CTouchProcessor::CoalesceQFrames(this, a2, (struct CPointerQFrame *)v7, v11);
  CTouchProcessor::UnreferenceFrameInt(this, v12);
  return v13;
}
