/*
 * XREFs of ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C02311F4
 * Callers:
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C022CF5C (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C022DC78 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01E364C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x1C0231258 (-SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z.c)
 */

void __fastcall CMouseProcessor::MouseOwner::Set(CMouseProcessor::MouseOwner *this, const struct CInputDest *a2)
{
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7812);
  CInputDest::operator=((__int64)this, (__int64)a2);
  _InterlockedExchange((volatile __int32 *)this + 30, 1);
  InputTraceLogging::Mouse::SetSystemCapture(this);
}
