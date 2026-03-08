/*
 * XREFs of EnterSharedRenderCrit @ 0x1C00D3390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall EnterSharedRenderCrit(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax

  PsEnterPriorityRegion(a1);
  v5 = SGDGetUserSessionState(v2, v1, v3, v4);
  return ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v5 + 16));
}
