/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C018EEB4
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C018F590 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 * Callees:
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCE40 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CCF60 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C00CCFB4 (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD1DC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C019197C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  unsigned int HistoryCount; // esi
  unsigned int v7; // r12d
  CTouchProcessor *v8; // rdi
  bool v9; // zf
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // ebx

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10675);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10677);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10680);
  v7 = *((_DWORD *)a3 + 86);
  v8 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  while ( v8 != (CTouchProcessor *)(this + 7) )
  {
    v9 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_24;
    v10 = (__int64)v8 - 8;
    v8 = *(CTouchProcessor **)v8;
    if ( *(_QWORD *)(v10 + 64) == *((_QWORD *)a2 + 8) )
    {
      if ( v7 >= *(_DWORD *)(v10 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10699);
      v11 = *(_QWORD *)(v10 + 136) + 480LL * v7;
      if ( (*(_DWORD *)v11 & 0x2000) != 0 || !*(_DWORD *)(v11 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10701);
      if ( *(_WORD *)(v11 + 172) != *((_WORD *)a3 + 86) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10703);
      if ( *(_QWORD *)(v11 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10704);
      v12 = 2LL;
      if ( (*(_DWORD *)v11 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10705);
      v13 = *(_DWORD *)(v11 + 344);
      CTouchProcessor::ReferenceFrameInt(v12, v10);
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v10, v7);
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v10);
      --HistoryCount;
      v7 = v13;
    }
  }
  v9 = HistoryCount == 1;
LABEL_24:
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10723);
}
