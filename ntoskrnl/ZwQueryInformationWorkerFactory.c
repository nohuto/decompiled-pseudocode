/*
 * XREFs of ZwQueryInformationWorkerFactory @ 0x140414E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationWorkerFactory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
