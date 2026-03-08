/*
 * XREFs of MiReferenceOwningSession @ 0x1402DE780
 * Callers:
 *     MiCapturePfnVm @ 0x14022A10C (MiCapturePfnVm.c)
 *     MiLockStealSystemVm @ 0x140394CFC (MiLockStealSystemVm.c)
 * Callees:
 *     MiGetTopLevelPfn @ 0x14022A3D0 (MiGetTopLevelPfn.c)
 *     MiSelectSessionAttachProcess @ 0x14022A5A8 (MiSelectSessionAttachProcess.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1402DE81C (MiTryToAcquireExpansionLockAtDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 */

_QWORD *__fastcall MiReferenceOwningSession(ULONG_PTR a1)
{
  __int64 TopLevelPfn; // rax
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  TopLevelPfn = MiGetTopLevelPfn(a1);
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v3 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)MiTryToAcquireExpansionLockAtDpc(&v6) )
    {
      v4 = MiSelectSessionAttachProcess(v3);
      KxReleaseQueuedSpinLock(&v6);
      return v4;
    }
  }
  return 0LL;
}
