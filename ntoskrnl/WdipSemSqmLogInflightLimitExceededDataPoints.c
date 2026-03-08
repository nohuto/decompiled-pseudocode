/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14078C108
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14078BFD0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x140833700 (WdipSemFastFree.c)
 *     WdipSemGetGuidKey @ 0x1409DB894 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1409DBA48 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1409DBBFC (WdipSemSqmIncrementDword.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int i; // esi
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32868, 0LL);
  v3 = (unsigned int)dword_140C32860;
  if ( dword_140C32860 )
  {
    v1 = WdipSemSqmIncrementDword(v2, (unsigned int)dword_140C32860);
    if ( v1 < 0 )
      v1 = 0;
    if ( (_DWORD)v3 )
    {
      v6 = WdipSemFrequentScenarioTable;
      do
      {
        v7 = *v6;
        if ( (int)WdipSemGetGuidKey(*v6, &v9) >= 0 )
        {
          v10[0] = v9;
          v10[1] = *(unsigned __int16 *)(v7 + 16);
          v10[2] = *(_DWORD *)(v7 + 20);
          v1 = WdipSemSqmAddToStream(1062LL, 3LL, v10);
          if ( v1 < 0 )
            v1 = 0;
        }
        else
        {
          v1 = 0;
        }
        ++v6;
        --v3;
      }
      while ( v3 );
    }
  }
  for ( i = 0; i < dword_140C32860; WdipSemFrequentScenarioTable[v8] = 0LL )
  {
    v8 = i;
    WdipSemFastFree(5LL, WdipSemFrequentScenarioTable[i++]);
  }
  dword_140C32860 = 0;
  ExReleasePushLockEx((__int64 *)&qword_140C32868, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
