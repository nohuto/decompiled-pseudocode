const struct CPointerQFrame *__fastcall CTouchProcessor::GetPointerInfoNodeQFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10291);
  if ( *((_DWORD *)a3 + 2) >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10292);
  if ( *(_DWORD *)(160LL * *((unsigned int *)a3 + 2) + *((_QWORD *)a2 + 31)) != *((_DWORD *)a3 + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10293);
  return (const struct CPointerQFrame *)(*((_QWORD *)a2 + 31) + 160LL * *((unsigned int *)a3 + 2));
}
