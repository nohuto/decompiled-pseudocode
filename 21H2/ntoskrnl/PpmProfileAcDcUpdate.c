/*
 * XREFs of PpmProfileAcDcUpdate @ 0x14099DAA8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14099788C (PpmCompareAndApplyPolicySettings.c)
 */

void PpmProfileAcDcUpdate()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140C232CC;
  v1 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 2LL;
  v3 = PpmCurrentProfile + 5;
  do
  {
    v4 = *v3 | v3[534];
    ++v3;
    v1 |= v4;
    --v2;
  }
  while ( v2 );
  v5 = v1 & 0x3CFFFFD8030FC0LL;
  PpmCompareAndApplyPolicySettings(
    &v5,
    (__int64)PpmCurrentProfile + (-(__int64)((_DWORD)v0 != 0) & 0xFFFFFFFFFFFFEF50uLL) + 4312,
    (__int64)&PpmCurrentProfile[534 * v0 + 5]);
}
