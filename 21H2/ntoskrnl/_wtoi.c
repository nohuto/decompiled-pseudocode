/*
 * XREFs of _wtoi @ 0x1403D25A0
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140758528 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403D25C0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
