/*
 * XREFs of ZwCreateThreadEx @ 0x140413BF0
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x1407F0B7C (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140936CD0 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x140A28438 (MiForceCrashForInvalidAccess.c)
 *     MiInjectThreadForHotPatch @ 0x140A34C94 (MiInjectThreadForHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
