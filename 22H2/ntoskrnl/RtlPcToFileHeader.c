/*
 * XREFs of RtlPcToFileHeader @ 0x1403C39E0
 * Callers:
 *     RtlGuardRestoreContext @ 0x14033FD9C (RtlGuardRestoreContext.c)
 *     KiLockExtendedServiceTable @ 0x1403E3218 (KiLockExtendedServiceTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B1F78 (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1405FFE6C (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x14077E28C (EtwpLocateDbgIdForRegEntry.c)
 *     MiCallDllInitialize @ 0x14081357C (MiCallDllInitialize.c)
 *     MiCallDllUnload @ 0x140865670 (MiCallDllUnload.c)
 *     KeSetTracepoint @ 0x140975DE0 (KeSetTracepoint.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402A3B60 (RtlpxLookupFunctionTable.c)
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
