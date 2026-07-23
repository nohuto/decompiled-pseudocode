/*
 * XREFs of RtlPcToFileHeader @ 0x14023FC00
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402652A4 (RtlGuardCheckExceptionHandler.c)
 *     KiLockExtendedServiceTable @ 0x1403DC038 (KiLockExtendedServiceTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058F678 (RtlGuardCheckLongJumpTarget.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140609898 (EtwpLocateDbgIdForRegEntry.c)
 *     KeSetTracepoint @ 0x1408BC4D0 (KeSetTracepoint.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402C34B0 (RtlpxLookupFunctionTable.c)
 */

PVOID __cdecl RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int64)PcValue >= *(&xmmword_140E00020 + 1)
    && (unsigned __int64)PcValue < *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
  {
    v4 = *(_OWORD *)&xmmword_140E00020;
  }
  else
  {
    RtlpxLookupFunctionTable(PcValue, &v4);
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
