/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C0236FA8
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01FE780 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C02223F0 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0236A84 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C0236BA4 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0236A58 (IsMFMWFPWindow.c)
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
