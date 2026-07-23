/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406155E8
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406154B0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x140788B54 (WdipSemFastFree.c)
 *     WdipSemGetGuidKey @ 0x140930A28 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x140930BDC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140930D90 (WdipSemSqmIncrementDword.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int i; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v12 = 0;
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A988, 0LL);
  v3 = (unsigned int)dword_140C1A980;
  if ( dword_140C1A980 )
  {
    v1 = WdipSemSqmIncrementDword(v2, (unsigned int)dword_140C1A980);
    if ( v1 < 0 )
      v1 = 0;
    if ( (_DWORD)v3 )
    {
      v9 = WdipSemFrequentScenarioTable;
      do
      {
        v10 = *v9;
        if ( (int)WdipSemGetGuidKey(*v9, &v12) >= 0 )
        {
          v13[0] = v12;
          v13[1] = *(unsigned __int16 *)(v10 + 16);
          v13[2] = *(_DWORD *)(v10 + 20);
          v1 = WdipSemSqmAddToStream(1062LL, 3LL, v13);
          if ( v1 < 0 )
            v1 = 0;
        }
        else
        {
          v1 = 0;
        }
        ++v9;
        --v3;
      }
      while ( v3 );
    }
  }
  for ( i = 0; i < dword_140C1A980; WdipSemFrequentScenarioTable[v11] = 0LL )
  {
    v11 = i;
    WdipSemFastFree(5LL, WdipSemFrequentScenarioTable[i++]);
  }
  dword_140C1A980 = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1A988, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return (unsigned int)v1;
}
