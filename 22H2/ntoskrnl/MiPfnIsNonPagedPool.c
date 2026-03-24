/*
 * XREFs of MiPfnIsNonPagedPool @ 0x140544C70
 * Callers:
 *     MiIsPfnLocked @ 0x140380A58 (MiIsPfnLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  __int64 v2; // rcx

  return !MI_PFN_IS_PROTO(a1)
      && (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(v2 + 8) << 25) >> 16) == 5
      && (*(_BYTE *)(a1 + 34) & 7) == 6;
}
