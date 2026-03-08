/*
 * XREFs of MiPrepareAttachThread @ 0x14029CA64
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1402FB050 (MmQueryCommitReleaseState.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140617408 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPrepareAttachThread(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // [rsp+8h] [rbp+8h]

  v4 = *(_DWORD *)(a2 + 184);
  if ( (*(_DWORD *)(a1 + 1124) & 0xC00u) < 0xC00 )
    return 0LL;
  if ( *(_QWORD *)(a2 + 104) )
    return 0LL;
  v2 = *(_DWORD *)(a2 + 184) >> 8;
  if ( (v2 & 0xF0) == 0xF0 || *(_QWORD *)(a2 + 144) <= 1uLL )
    return 0LL;
  result = 1LL;
  BYTE1(v4) = v2 & 0xF | ((v2 & 0xF0) + 16);
  *(_WORD *)(a2 + 184) = v4;
  return result;
}
