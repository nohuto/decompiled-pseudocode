/*
 * XREFs of RtlGetSwapReferenceIndex @ 0x140833304
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140B156F8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSwapReferenceIndex(_QWORD *a1)
{
  return *a1 & 1LL;
}
