/*
 * XREFs of ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C00076C4
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0006820 (NtUserGetAsyncKeyState.c)
 *     AllocQueue @ 0x1C00071A0 (AllocQueue.c)
 *     PostUpdateKeyStateEvent @ 0x1C00075C0 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

_QWORD *__fastcall CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(_QWORD *a1)
{
  *a1 = GetDomainLockRef(16LL);
  return a1;
}
