char __fastcall lambda_41edca9c29f3f67839559e5a2032aaa2_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  struct CPTPProcessor *Processor; // rdi

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL) == 7 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(a1);
    if ( !Processor )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 518LL);
    CPTPProcessor::UpdateEnvironment(Processor, 1LL, *((_QWORD *)a1 + 59));
  }
  return 1;
}
