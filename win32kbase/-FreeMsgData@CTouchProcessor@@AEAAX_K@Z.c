void __fastcall CTouchProcessor::FreeMsgData(CTouchProcessor *this, unsigned __int64 a2)
{
  char *NonConstMsgData; // rbx
  char *v4; // rdi
  __int16 v5; // r14
  __int64 v6; // rsi
  char **v7; // rax
  int v8; // eax
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  char *v11; // rbx

  NonConstMsgData = (char *)CTouchProcessor::GetNonConstMsgData(this, a2);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11567);
  if ( *((_DWORD *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11569);
  v4 = *(char **)NonConstMsgData;
  v5 = *((_WORD *)NonConstMsgData + 8);
  v6 = *((_QWORD *)NonConstMsgData + 5);
  if ( *(char **)(*(_QWORD *)NonConstMsgData + 8LL) != NonConstMsgData
    || (v7 = (char **)*((_QWORD *)NonConstMsgData + 1), *v7 != NonConstMsgData) )
  {
    __fastfail(3u);
  }
  *v7 = v4;
  *((_QWORD *)v4 + 1) = v7;
  *((_QWORD *)NonConstMsgData + 1) = NonConstMsgData;
  *(_QWORD *)NonConstMsgData = NonConstMsgData;
  if ( (*((_DWORD *)NonConstMsgData + 9) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11546);
  v8 = *((_DWORD *)NonConstMsgData + 9);
  if ( (v8 & 0x80u) == 0 )
  {
    v9 = gpLeakTrackingAllocator;
    *((_DWORD *)NonConstMsgData + 9) = v8 | 0x80;
    NSInstrumentation::CLeakTrackingAllocator::Free(v9, NonConstMsgData);
  }
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 16) == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt(this, (struct CPointerCaptureInfo *)(v6 + 32));
      CTouchProcessor::ReleasePointerCaptureInt(this, (struct CPointerCaptureInfo *)(v6 + 168));
    }
    if ( (*(_DWORD *)(v6 + 16))-- == 1 )
      CTouchProcessor::FreePointerCaptureData(this, (struct CPointerCaptureData *)v6);
  }
  if ( *(char **)v4 == v4 )
  {
    v11 = v4 - 256;
    if ( *((_WORD *)v4 - 112) != v5 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11613);
    if ( *(char **)v4 != v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11614);
    if ( *((char **)v11 + 30) != v11 + 240 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11615);
    if ( *((_DWORD *)v11 + 14) == 3 && !*((_DWORD *)v11 + 9) )
      CTouchProcessor::FreeNode(this, (struct CInputPointerNode *)(v4 - 256));
  }
}
