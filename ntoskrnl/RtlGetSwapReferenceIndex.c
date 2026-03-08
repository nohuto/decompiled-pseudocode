/*
 * XREFs of RtlGetSwapReferenceIndex @ 0x140818388
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSwapReferenceIndex(_QWORD *a1)
{
  return *a1 & 1LL;
}
