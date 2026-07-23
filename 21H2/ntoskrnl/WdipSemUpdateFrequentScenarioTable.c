/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x1409301D4
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x140930014 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     WdipSemFastAllocate @ 0x140788B80 (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  PSLIST_ENTRY v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A988, 0LL);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C1A980 < 0x80 )
    {
      v4 = WdipSemFastAllocate(5, 0x18u);
      if ( v4 )
      {
        *v4 = *a1;
        v4[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_140C1A980++] = v4;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1A988, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v2;
}
