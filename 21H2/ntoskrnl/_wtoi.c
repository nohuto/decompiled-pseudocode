/*
 * XREFs of _wtoi @ 0x1403D2430
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140757604 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140758368 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403D2450 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
