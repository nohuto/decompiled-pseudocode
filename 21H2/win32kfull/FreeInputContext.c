/*
 * XREFs of FreeInputContext @ 0x1C00FA700
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z @ 0x1C0150AE0 (--4-$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z.c)
 */

__int64 __fastcall FreeInputContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !gcInHMDestroyUnlockedObjectWorker )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 792LL);
    while ( v3 )
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 56);
      if ( v3 == a1 )
      {
        tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(v4 + 56, *(_QWORD *)(a1 + 56));
        return HMFreeObject(a1);
      }
    }
    return HMFreeObject(a1);
  }
  return result;
}
