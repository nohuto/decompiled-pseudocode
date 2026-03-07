PVOID *__fastcall NSInstrumentation::CBackTrace::CBackTrace(PVOID *BackTrace)
{
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  return BackTrace;
}
