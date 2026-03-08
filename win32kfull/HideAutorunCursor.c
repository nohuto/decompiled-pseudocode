/*
 * XREFs of HideAutorunCursor @ 0x1C01AA230
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

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
