/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140814FBC
 * Callers:
 *     WdipSemEnableScenario @ 0x1406E6B08 (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     WdipSemBuildScenarioInstance @ 0x140815088 (WdipSemBuildScenarioInstance.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140815F88 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DA90C (WdipSemLogInflightLimitExceededInformation.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16818, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140C16810 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v3 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v3 )
      {
        v6 = (_QWORD *)qword_140C16808;
        if ( *(__int64 **)qword_140C16808 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v3 = &WdipSemEnabledInstanceTable;
        v3[1] = v6;
        *v6 = v3;
        ++dword_140C16810;
        qword_140C16808 = (__int64)v3;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16818, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
