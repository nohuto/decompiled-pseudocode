/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01F23DC
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x1C01F2AC4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C00F2568 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01F2C24 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01FB918 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C0207468 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  unsigned int HistoryCount; // r14d
  unsigned int v7; // ebx
  CTouchProcessor *v8; // rsi
  bool v9; // zf
  char *v10; // rbp
  __int64 v11; // rdi
  _DWORD *v12; // rbx
  unsigned int v13; // [rsp+24h] [rbp-54h]

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11394);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11396);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11399);
  v7 = *((_DWORD *)a3 + 86);
  v8 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
LABEL_22:
  v13 = v7;
  while ( v8 != (CTouchProcessor *)(this + 7) )
  {
    v9 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_25;
    v10 = (char *)v8 - 8;
    v8 = *(CTouchProcessor **)v8;
    if ( *((_QWORD *)v10 + 8) == *((_QWORD *)a2 + 8) )
    {
      if ( v7 >= *((_DWORD *)v10 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11418);
      v11 = *((_QWORD *)v10 + 30) + 480LL * v7;
      v12 = (_DWORD *)(v11 + 172);
      if ( (*(_DWORD *)v11 & 0x2000) != 0 || !*v12 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11420);
      if ( *(_WORD *)v12 != *((_WORD *)a3 + 86) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11422);
      if ( *(_QWORD *)(v11 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11423);
      if ( (*(_DWORD *)v11 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11424);
      v7 = *(_DWORD *)(v11 + 344);
      _InterlockedIncrement((volatile signed __int32 *)v10 + 11);
      CTouchProcessor::FreePointerInfoNodeInt(this, v10, v13);
      CTouchProcessor::UnreferenceFrameInt(this, v10);
      --HistoryCount;
      goto LABEL_22;
    }
  }
  v9 = HistoryCount == 1;
LABEL_25:
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11442);
}
