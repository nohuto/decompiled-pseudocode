/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C004222C
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0041BB0 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00A21AC (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        char a2)
{
  unsigned __int16 v3; // cx
  bool v4; // zf

  if ( !a2 )
  {
    v3 = *((_WORD *)this + 1345);
    v4 = v3 == 16;
    if ( v3 > 0x10u )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6281LL);
      v3 = *((_WORD *)this + 1345);
      v4 = v3 == 16;
    }
    if ( v4 )
      return 0LL;
    *((_WORD *)this + 1344) = ((unsigned __int8)*((_WORD *)this + 1344) + 1) & 0xF;
    *((_WORD *)this + 1345) = v3 + 1;
  }
  if ( *((_WORD *)this + 1345) > 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6254LL);
  return (CMouseProcessor::CMouseQueue *)((char *)this + 168 * *((unsigned __int16 *)this + 1344));
}
