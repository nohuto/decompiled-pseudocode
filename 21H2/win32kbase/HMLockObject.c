/*
 * XREFs of HMLockObject @ 0x1C002E770
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C0009480 (xxxInternalActivateKeyboardLayout.c)
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMLockObject(__int64 a1)
{
  __int64 result; // rax

  result = GetDomainLockRef(14LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
