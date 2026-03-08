/*
 * XREFs of _wtoi @ 0x1403D4230
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14069BED4 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1408688F8 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403D4250 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
