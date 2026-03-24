/*
 * XREFs of PsGetProcessSecurityDomain @ 0x140581944
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14021ED00 (KiUpdateSpeculationControl.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSecurityDomain(__int64 a1)
{
  return *(_QWORD *)(a1 + 2528);
}
