/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406D9FC8
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406D9E90 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x140815360 (WdipSemFastFree.c)
 *     WdipSemGetGuidKey @ 0x1409DB2FC (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1409DB4B0 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1409DB664 (WdipSemSqmIncrementDword.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16C28, 0LL);
  v3 = (unsigned int)dword_140C16C20;
  if ( dword_140C16C20 )
  {
    v1 = WdipSemSqmIncrementDword(v2, (unsigned int)dword_140C16C20);
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
  for ( i = 0; i < dword_140C16C20; WdipSemFrequentScenarioTable[v8] = 0LL )
  {
    v8 = i;
    WdipSemFastFree(5LL, WdipSemFrequentScenarioTable[i++]);
  }
  dword_140C16C20 = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16C28, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
