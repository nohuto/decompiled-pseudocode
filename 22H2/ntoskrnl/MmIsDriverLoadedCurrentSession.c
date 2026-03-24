/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x14078E158
 * Callers:
 *     VfThunkApplyMandatoryThunks @ 0x1409D8B7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D8C64 (VfThunkApplyThunks.c)
 * Callees:
 *     MiSessionLookupImage @ 0x140328A98 (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
