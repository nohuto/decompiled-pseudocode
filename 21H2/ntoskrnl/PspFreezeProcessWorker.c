/*
 * XREFs of PspFreezeProcessWorker @ 0x1409B1740
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SmIsCompressionProcess @ 0x14030263C (SmIsCompressionProcess.c)
 *     PsCaptureExceptionPort @ 0x14079FFE8 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(_DWORD *a1)
{
  _DWORD **ServerSiloGlobals; // rax
  __int64 v3; // rcx
  void *v4; // rax

  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  if ( (a1[543] & 0x1000) == 0 && a1 != PsIdleProcess && a1 != ServerSiloGlobals[110] && !SmIsCompressionProcess(a1) )
  {
    v4 = PsCaptureExceptionPort(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (a1[281] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
