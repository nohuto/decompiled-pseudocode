/*
 * XREFs of _wtoi @ 0x1403D9750
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1406C6594 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x14086B530 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403D9770 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
