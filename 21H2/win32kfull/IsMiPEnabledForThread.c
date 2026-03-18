/*
 * XREFs of IsMiPEnabledForThread @ 0x1C00AD354
 * Callers:
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     IsMiPActive @ 0x1C00AD310 (IsMiPActive.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C01F1560 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C01FB410 (NtUserPromoteMouseInPointer.c)
 *     xxxMNEndMenuStateInternal @ 0x1C021C050 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 820LL) & 4) != 0 || (*(_DWORD *)(a1 + 1256) & 0x6000000) != 0;
}
