/*
 * XREFs of CMFAllocFn @ 0x1409582A0
 * Callers:
 *     XpressDecodeCreate @ 0x1405CA3D0 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
