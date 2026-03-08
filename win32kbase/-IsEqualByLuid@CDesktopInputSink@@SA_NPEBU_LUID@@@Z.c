/*
 * XREFs of ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C021484C
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1C016D320 (NtUserAddVisualIdentifier.c)
 *     NtUserRemoveVisualIdentifier @ 0x1C0175CE0 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C0094F6C (-GetInstance@CDesktopInputSink@@CAAEAV1@XZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B9120 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

bool __fastcall CDesktopInputSink::IsEqualByLuid(const struct _LUID *a1)
{
  CPushLock *Instance; // rdi
  __int64 v3; // rbx

  Instance = CDesktopInputSink::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  v3 = *((_QWORD *)CDesktopInputSink::GetInstance() + 3);
  CPushLock::ReleaseLock(Instance);
  return v3 == *a1;
}
