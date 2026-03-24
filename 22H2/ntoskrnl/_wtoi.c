/*
 * XREFs of _wtoi @ 0x1403D1D30
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140756DF4 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140757B58 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1408771D4 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403D1D50 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
