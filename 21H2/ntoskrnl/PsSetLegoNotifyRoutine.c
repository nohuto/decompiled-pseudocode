/*
 * XREFs of PsSetLegoNotifyRoutine @ 0x14090AB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsSetLegoNotifyRoutine(__int64 (__fastcall *a1)(_QWORD))
{
  PspLegoNotifyRoutine = a1;
  return 720LL;
}
