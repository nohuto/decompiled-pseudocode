/*
 * XREFs of RtlPcToFileHeader @ 0x1402C1760
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x140277304 (RtlGuardCheckExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x1403DBEC8 (KiLockExtendedServiceTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058F448 (RtlGuardCheckLongJumpTarget.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406AB1A8 (EtwpLocateDbgIdForRegEntry.c)
 *     KeSetTracepoint @ 0x1408BC370 (KeSetTracepoint.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14021EBB0 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlPcToFileHeader(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( a1 >= *(&xmmword_140E00020 + 1) && a1 < *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    v6 = *(_OWORD *)&xmmword_140E00020;
  else
    RtlpxLookupFunctionTable(a1, (unsigned __int64)&v6, *(&xmmword_140E00020 + 1), a4);
  result = *((_QWORD *)&v6 + 1);
  *a2 = *((_QWORD *)&v6 + 1);
  return result;
}
