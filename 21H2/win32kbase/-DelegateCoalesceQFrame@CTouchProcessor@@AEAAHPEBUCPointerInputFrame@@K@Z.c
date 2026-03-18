/*
 * XREFs of ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01C44C8
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01C4340 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01C0DD4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01D39D4 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01D807C (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalesceQFrame(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  struct CPointerInputFrame *v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // r8

  v5 = (unsigned int)a3;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)v5 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = *((_QWORD *)a2 + 31) + 160 * v5;
  if ( *(_DWORD *)v9 != (_DWORD)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v10 = *(_DWORD *)(v9 + 140);
  if ( (v10 & 8) != 0 )
  {
    v11 = 9LL;
LABEL_13:
    CTouchProcessor::TrackCoalesceOnReassign(v7, v9, v11);
    return 0LL;
  }
  if ( (v10 & 2) == 0 && *(_DWORD *)(v9 + 144) != 9 )
  {
    v7 = *(unsigned int *)(v9 + 148);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 9 )
        return 0LL;
    }
  }
  if ( (v10 & 1) == 0 )
  {
    v11 = 13LL;
    goto LABEL_13;
  }
  v13 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v14 = (__int64)v13;
  if ( !v13 )
  {
    v11 = 10LL;
    goto LABEL_13;
  }
  v15 = (unsigned int)CTouchProcessor::CoalesceQFrames(this, a2, (struct CPointerQFrame *)v9, v13);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v14, v16);
  return v15;
}
