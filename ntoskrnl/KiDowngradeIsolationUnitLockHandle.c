/*
 * XREFs of KiDowngradeIsolationUnitLockHandle @ 0x1402ADC00
 * Callers:
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KiReparkIdlingProcessorIfNecessary @ 0x1402C7970 (KiReparkIdlingProcessorIfNecessary.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1405747AC (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 * Callees:
 *     KzReleaseAdditionalPrcbLocks @ 0x14056AD34 (KzReleaseAdditionalPrcbLocks.c)
 */

__int64 __fastcall KiDowngradeIsolationUnitLockHandle(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // r8
  __int64 result; // rax
  unsigned __int64 *v6; // rdx
  __int64 v7; // r9
  unsigned __int8 *v8; // rax
  unsigned int v9; // r11d
  unsigned __int64 *v10; // r10
  unsigned __int8 *v11; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  result = *a1 & 1LL;
  v12 = v3;
  v6 = 0LL;
  v7 = 0LL;
  if ( (_DWORD)result != a2 )
  {
    if ( (_DWORD)result )
    {
      v8 = *(unsigned __int8 **)(v3 + 34904);
      v9 = *v8;
      v10 = (unsigned __int64 *)(v8 + 8);
    }
    else
    {
      v10 = &v12;
      v9 = 1;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v11 = *(unsigned __int8 **)(v3 + 34904);
        v7 = *v11;
        v6 = (unsigned __int64 *)(v11 + 8);
      }
    }
    else
    {
      v6 = &v12;
      v7 = 1LL;
    }
    result = KzReleaseAdditionalPrcbLocks(v10, v9, v6, v7);
    *a1 ^= (*(_DWORD *)a1 ^ a2) & 1;
  }
  return result;
}
