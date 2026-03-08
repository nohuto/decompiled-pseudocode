/*
 * XREFs of PopBatteryRemove @ 0x140992740
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x140829F88 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 **v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v2 = (__int64 *)(a1 + 64);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(v3 + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_140C3CB54;
    ++dword_140C3CBB8;
    byte_140C3CB58 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  if ( !--dword_140C3CB50 )
  {
    PopAcquirePolicyLock(v5);
    if ( byte_140C3D6FE )
    {
      byte_140C3D6FE = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v7, v6, v8);
  }
}
