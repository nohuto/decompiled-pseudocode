__int64 __fastcall CTouchProcessor::FreePointerInfoNode(
        struct _KTHREAD **a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx

  v6 = a4;
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9129);
  result = CTouchProcessor::FindAndReferenceFrameById((__int64)a1, a3, 4u);
  v8 = result;
  if ( result )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(result + 48) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9139);
    v9 = *(_QWORD *)(v8 + 240) + 480 * v6;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9141);
    if ( (*(_DWORD *)v9 & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9143);
    if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v9) > 1 )
      CTouchProcessor::FreeHistory(a1, (const struct CPointerInputFrame *)v8, (const struct CPointerInfoNode *)v9);
    CInputDest::SetEmpty((CInputDest *)(v9 + 24));
    CInputDest::SetEmpty((CInputDest *)(v9 + 352));
    CTouchProcessor::FreePointerInfoNodeInt(a1, v8, (unsigned int)v6);
    return CTouchProcessor::UnreferenceFrameInt(a1, v8);
  }
  return result;
}
