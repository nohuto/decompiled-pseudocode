/*
 * XREFs of RtlGetSwapReferenceIndex @ 0x1407D5274
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSwapReferenceIndex(_QWORD *a1)
{
  return *a1 & 1LL;
}
