/*
 * XREFs of ZwCreateThreadEx @ 0x14041D020
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14074F4F0 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x140967E00 (MiForceCrashForInvalidAccess.c)
 *     MiInjectThreadForHotPatch @ 0x140973B80 (MiInjectThreadForHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
