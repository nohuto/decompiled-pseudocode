/*
 * XREFs of PsSetLegoNotifyRoutine @ 0x1409B0590
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
