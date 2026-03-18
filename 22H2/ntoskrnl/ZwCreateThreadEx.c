/*
 * XREFs of ZwCreateThreadEx @ 0x14041BF80
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14076BBFC (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B198 (MiForceCrashForInvalidAccess.c)
 *     MiInjectThreadForHotPatch @ 0x140A379C4 (MiInjectThreadForHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
