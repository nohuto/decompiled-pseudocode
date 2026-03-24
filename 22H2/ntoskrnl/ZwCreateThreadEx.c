/*
 * XREFs of ZwCreateThreadEx @ 0x1403FB260
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14065C850 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140886DA0 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42F4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
