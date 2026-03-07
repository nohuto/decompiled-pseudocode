__int64 __fastcall CTouchProcessor::SetQFrameNonCoalescable(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12158);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12159);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12160);
  if ( *((_DWORD *)a3 + 2) >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12161);
  if ( *(_DWORD *)(160LL * *((unsigned int *)a3 + 2) + *((_QWORD *)a2 + 31)) != *((_DWORD *)a3 + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12162);
  result = 1LL;
  v6 = *((_QWORD *)a2 + 31) + 160LL * *((unsigned int *)a3 + 2);
  *(_DWORD *)(v6 + 140) &= ~1u;
  return result;
}
