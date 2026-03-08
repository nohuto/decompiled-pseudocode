/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C02195D4
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01D76E0 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C02026A0 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C021931C (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C0219454 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C02192F8 (IsMFMWFPWindow.c)
 */

char __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  int v1; // eax
  _QWORD *v2; // r8

  LOBYTE(v1) = IsMFMWFPWindow(*a1);
  if ( v1 )
    LOBYTE(v1) = HMAssignmentUnlock(v2);
  else
    *v2 = 0LL;
  return v1;
}
