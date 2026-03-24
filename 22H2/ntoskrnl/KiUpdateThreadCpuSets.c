/*
 * XREFs of KiUpdateThreadCpuSets @ 0x1403C5C5C
 * Callers:
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C5BBC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CB20 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     KiAcquireThreadStateLock @ 0x1402308B0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x14035B9E0 (KiReleaseThreadStateLock.c)
 *     KiComputeThreadAffinity @ 0x14035D000 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14035DB70 (KiRescheduleThreadAfterAffinityChange.c)
 */

__int64 __fastcall KiUpdateThreadCpuSets(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r8
  char v6; // bl
  volatile signed __int64 *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int64 *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 116);
  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( (v2 & 8) == 0 )
  {
    v6 = KiAcquireThreadStateLock(a1, &v12, (volatile signed __int32 **)&v13);
    KiComputeThreadAffinity(a1);
    v11 = a2;
    v7 = v13;
    v8 = KiRescheduleThreadAfterAffinityChange(a1, a1 + 576, v6, v12, (__int64)v13, v11);
    KiReleaseThreadStateLock(v9, v12, v7);
    return v12 & -(__int64)(v8 != 0);
  }
  return v3;
}
