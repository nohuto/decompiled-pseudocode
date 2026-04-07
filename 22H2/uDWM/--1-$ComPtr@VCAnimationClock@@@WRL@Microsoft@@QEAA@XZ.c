/*
 * XREFs of ??1?$ComPtr@VCAnimationClock@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BAA34
 * Callers:
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800BAAB0 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<CAnimationClock>::~ComPtr<CAnimationClock>(CBaseObject **a1)
{
  return Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(a1);
}
