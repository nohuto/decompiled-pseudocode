/*
 * XREFs of ?IsRawMouseSubscriber@CInputDest@@QEBA_NXZ @ 0x1C01E39F0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputDest::IsRawMouseSubscriber(CInputDest *this)
{
  int v1; // eax

  if ( *((_DWORD *)this + 23) == 1 )
  {
    return (*(_DWORD *)(*((_QWORD *)this + 10) + 132LL) & 2u) >> 1;
  }
  else
  {
    if ( *((_DWORD *)this + 23) == 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1088);
    LOBYTE(v1) = 0;
  }
  return v1;
}
