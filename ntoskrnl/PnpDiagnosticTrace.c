/*
 * XREFs of PnpDiagnosticTrace @ 0x1402B1760
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1402B153C (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402B167C (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x14039C088 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x140560644 (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x140860040 (PiProcessStartSystemDevices.c)
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140B6A010 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 */

NTSTATUS __fastcall PnpDiagnosticTrace(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v3; // rbx

  v3 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return EtwWrite(v3, EventDescriptor, 0LL, UserDataCount, UserData);
  else
    return 0;
}
