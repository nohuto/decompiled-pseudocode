/*
 * XREFs of PipAttemptDependentStart @ 0x14085E134
 * Callers:
 *     PipAttemptDependentsStart @ 0x14068185C (PipAttemptDependentsStart.c)
 *     PipDeleteAllDependencyRelations @ 0x1409514A0 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406CB7E0 (PipCheckForUnsatisfiedDependencies.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PipAttemptDependentStart(_QWORD *Object)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( !Object )
    return 3221225473LL;
  v2 = Object[39];
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3
    || (*(_DWORD *)(v3 + 396) & 0x2000) == 0
    || *(_DWORD *)(v3 + 404) != 51
    || PipCheckForUnsatisfiedDependencies(*(_QWORD *)(v2 + 40), 3u) )
  {
    return 3221225473LL;
  }
  PipClearDevNodeProblem(v3);
  return PnpRequestDeviceAction(Object, 16, 1, 0LL, 0LL, 0LL, 0LL);
}
