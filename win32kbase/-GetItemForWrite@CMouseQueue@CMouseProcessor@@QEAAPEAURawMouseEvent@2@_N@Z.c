struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        char a2)
{
  __int16 *v2; // rbx
  __int16 v4; // cx

  v2 = (__int16 *)((char *)this + 2690);
  if ( !a2 )
  {
    if ( (unsigned __int16)*v2 > 0x10u )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6539LL);
    v4 = *v2;
    if ( *v2 == 16 )
      return 0LL;
    *((_WORD *)this + 1344) = ((unsigned __int8)*((_WORD *)this + 1344) + 1) & 0xF;
    *v2 = v4 + 1;
  }
  if ( (unsigned __int16)*v2 > 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6518LL);
  return (CMouseProcessor::CMouseQueue *)((char *)this + 168 * *((unsigned __int16 *)this + 1344));
}
