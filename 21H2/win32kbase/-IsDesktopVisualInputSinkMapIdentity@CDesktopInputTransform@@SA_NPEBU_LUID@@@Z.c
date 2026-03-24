/*
 * XREFs of ?IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z @ 0x1C01BAD38
 * Callers:
 *     NtUserRemoveVisualIdentifier @ 0x1C0133260 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C005CEB0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C008782C (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 */

bool __fastcall CDesktopInputTransform::IsDesktopVisualInputSinkMapIdentity(const struct _LUID *a1)
{
  CPushLock *Instance; // rdi
  __int64 v3; // rbx

  Instance = CDesktopInputTransform::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  v3 = *((_QWORD *)CDesktopInputTransform::GetInstance() + 4);
  CPushLock::ReleaseLock(Instance);
  return v3 == *a1;
}
