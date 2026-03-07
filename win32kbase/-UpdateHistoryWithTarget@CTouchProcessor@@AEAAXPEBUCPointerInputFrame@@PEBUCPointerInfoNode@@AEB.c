void __fastcall CTouchProcessor::UpdateHistoryWithTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int HistoryCount; // edi
  unsigned int v13; // r15d
  char *v14; // r12
  char *v15; // rsi
  char *v16; // rbp
  bool v17; // zf
  __int64 v18; // rbx
  CTouchProcessor *v19; // rcx

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12094);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12097);
  v13 = *((_DWORD *)a3 + 86);
  v14 = (char *)this + 56;
  v15 = (char *)*((_QWORD *)a2 + 1);
  while ( v15 != v14 )
  {
    v16 = v15;
    v17 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_21;
    v15 = *(char **)v15;
    if ( *((_QWORD *)v16 + 7) == *((_QWORD *)a2 + 8) )
    {
      if ( v13 >= *((_DWORD *)v16 + 10) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12117);
      v18 = *((_QWORD *)v16 + 29) + 480LL * v13;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12119);
      if ( *(_WORD *)(v18 + 172) != *((_WORD *)a3 + 86) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12121);
      if ( *(_QWORD *)(v18 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12122);
      if ( (*(_DWORD *)v18 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12123);
      CTouchProcessor::SetPointerInfoNodeTargetInt(v19, (struct CPointerInfoNode *)v18, a4, a5, a6, a7, 0, a8, a9);
      v13 = *(_DWORD *)(v18 + 344);
      --HistoryCount;
    }
  }
  v17 = HistoryCount == 1;
LABEL_21:
  if ( !v17 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12145);
}
