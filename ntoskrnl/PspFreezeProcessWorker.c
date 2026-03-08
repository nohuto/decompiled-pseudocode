/*
 * XREFs of PspFreezeProcessWorker @ 0x1409B0C60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsCaptureExceptionPort @ 0x1407D9D10 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x1409B3100 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(_DWORD *a1)
{
  _DWORD **ServerSiloGlobals; // rax
  int v3; // ecx
  void *v4; // rax

  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  v3 = a1[543];
  if ( (v3 & 0x1000) == 0 && a1 != PsIdleProcess && a1 != ServerSiloGlobals[110] && (v3 & 0x40000000) == 0 )
  {
    v4 = PsCaptureExceptionPort((__int64)a1);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (a1[281] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
