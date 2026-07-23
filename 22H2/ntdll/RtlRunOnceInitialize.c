/*
 * XREFs of RtlRunOnceInitialize @ 0x18006B430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
