/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C00377A8
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035E4C (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00B08DC (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        __int64 a2,
        __int64 a3)
{
  CMouseProcessor::CMouseQueue *v3; // rbx
  bool v4; // zf

  v3 = this;
  if ( !(_BYTE)a2 )
  {
    this = (CMouseProcessor::CMouseQueue *)*((unsigned __int16 *)this + 1345);
    v4 = (_WORD)this == 16;
    if ( (unsigned __int16)this > 0x10u )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
      this = (CMouseProcessor::CMouseQueue *)*((unsigned __int16 *)v3 + 1345);
      v4 = (_WORD)this == 16;
    }
    if ( v4 )
      return 0LL;
    LOWORD(this) = (_WORD)this + 1;
    *((_WORD *)v3 + 1344) = ((unsigned __int8)*((_WORD *)v3 + 1344) + 1) & 0xF;
    *((_WORD *)v3 + 1345) = (_WORD)this;
  }
  if ( *((_WORD *)v3 + 1345) > 0x10u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  return (CMouseProcessor::CMouseQueue *)((char *)v3 + 168 * *((unsigned __int16 *)v3 + 1344));
}
