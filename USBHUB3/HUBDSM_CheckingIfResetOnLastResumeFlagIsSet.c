/*
 * XREFs of HUBDSM_CheckingIfResetOnLastResumeFlagIsSet @ 0x1C0023EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfResetOnLastResumeFlagIsSet(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 16LL) + 32LL) & 0x40) != 0 ? 4089 : 4061;
}
