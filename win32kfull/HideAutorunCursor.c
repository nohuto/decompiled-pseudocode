void HideAutorunCursor()
{
  _BYTE v0[4]; // [rsp+30h] [rbp-18h] BYREF
  int v1; // [rsp+34h] [rbp-14h]

  FindTimer(0LL, (void *)gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  if ( gptiCurrent != gptiRit )
  {
    v1 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 931);
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v0);
  zzzUpdateCursorImage();
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v0);
}
