/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x140831F8C
 * Callers:
 *     WdipSemDisableScenario @ 0x140831E48 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140832008 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  __int64 EnabledInstanceTable; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32458, 0LL);
  if ( a1 )
  {
    EnabledInstanceTable = WdipSemQueryEnabledInstanceTable(a1);
    v3 = EnabledInstanceTable;
    if ( EnabledInstanceTable )
    {
      if ( *(_DWORD *)(EnabledInstanceTable + 44) )
        v3 = 0LL;
      else
        *(_DWORD *)(EnabledInstanceTable + 44) = 1;
    }
  }
  ExReleasePushLockEx((__int64 *)&qword_140C32458, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
