/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C02369E8
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01FE1C0 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0221E30 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C02339B8 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C02364C4 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C02365E4 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0236498 (IsMFMWFPWindow.c)
 */

__int64 __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = IsMFMWFPWindow(*a1);
  if ( (_DWORD)result )
    return HMAssignmentUnlock(v2);
  *v2 = 0LL;
  return result;
}
