/*
 * XREFs of RtlPcToFileHeader @ 0x1403870E0
 * Callers:
 *     RtlGuardRestoreContext @ 0x140294C30 (RtlGuardRestoreContext.c)
 *     KiLockExtendedServiceTable @ 0x1403EB1A8 (KiLockExtendedServiceTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405EEC28 (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x140631D34 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140758C68 (EtwpLocateDbgIdForRegEntry.c)
 *     KeSetTracepoint @ 0x140962320 (KeSetTracepoint.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140297AE0 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlPcToFileHeader(unsigned __int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( a1 >= *((_QWORD *)&xmmword_140E00030 + 1)
    && a1 < *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
  {
    v4 = xmmword_140E00030;
  }
  else
  {
    RtlpxLookupFunctionTable(a1, (__int64)&v4);
  }
  result = *((_QWORD *)&v4 + 1);
  *a2 = *((_QWORD *)&v4 + 1);
  return result;
}
