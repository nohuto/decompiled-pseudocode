/*
 * XREFs of VfBeforeCallDriver @ 0x140ACA5AC
 * Callers:
 *     IovCallDriver @ 0x140ABE1D0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140ABE96C (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140ABE9B4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     VfBugCheckNoStackUsage @ 0x1405CD460 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 *     VfGetPristineDispatchRoutine @ 0x140ACA1FC (VfGetPristineDispatchRoutine.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACADD0 (ViIrpCheckKernelAddressForIrp.c)
 */

__int64 __fastcall VfBeforeCallDriver(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v7; // rdx
  unsigned __int8 CurrentIrql; // al
  __int64 v9; // rax

  if ( *(_BYTE *)(a2 + 64) != 1 && (MmVerifierData & 0x100) != 0 && !*(_QWORD *)(a2 + 8) )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x10) != 0 )
      v7 = *(_QWORD *)(a2 + 24);
    else
      v7 = *(_QWORD *)(a2 + 112);
    ViIrpCheckKernelAddressForIrp(a2, v7);
  }
  if ( a3 )
  {
    if ( !KeAreInterruptsEnabled() && (VfRuleClasses & 0x400000) == 0 )
    {
      *(_BYTE *)(a3 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      *(_OWORD *)&xmmword_140D70508 = 0LL;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      BugCheckParameter1 = 192LL;
      qword_140D70500 = a2;
      VfBugCheckNoStackUsage();
    }
    *(_QWORD *)(a3 + 48) = VfGetPristineDispatchRoutine(
                             *(struct _DRIVER_OBJECT **)(a1 + 8),
                             *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL));
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)(a3 + 156) = CurrentIrql;
    *(_DWORD *)(a3 + 188) = KeGetCurrentThread()->WaitBlock[3].SpareLong;
    if ( *(char *)(a2 + 67) == *(char *)(a2 + 66) + 1 )
    {
      v9 = *(_QWORD *)(a2 + 80);
      if ( v9 )
      {
        if ( !*(_BYTE *)(a2 + 64) && *(_DWORD *)(v9 + 4) )
          *(_DWORD *)(a3 + 152) |= 2u;
      }
    }
    if ( !VfIoDisabled )
    {
      *(_DWORD *)(a3 + 152) |= 1u;
      IovpCallDriver1(a3);
    }
  }
  return 0LL;
}
