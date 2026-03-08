/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x1407F7298
 * Callers:
 *     MiAttachToSessionForBaseImage @ 0x14063F7A4 (MiAttachToSessionForBaseImage.c)
 *     VfThunkApplyPristineToAllSession @ 0x140AD82CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140AD844C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14036C7B8 (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
