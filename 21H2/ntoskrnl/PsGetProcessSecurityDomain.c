/*
 * XREFs of PsGetProcessSecurityDomain @ 0x140581BCC
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402C3600 (KiUpdateSpeculationControl.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSecurityDomain(__int64 a1)
{
  return *(_QWORD *)(a1 + 2528);
}
