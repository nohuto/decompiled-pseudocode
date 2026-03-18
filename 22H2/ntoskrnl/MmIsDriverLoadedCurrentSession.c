/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x140695E68
 * Callers:
 *     MiAttachToSessionForBaseImage @ 0x140641C04 (MiAttachToSessionForBaseImage.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADC2CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADC44C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB88 (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
