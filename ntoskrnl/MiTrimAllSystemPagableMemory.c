/*
 * XREFs of MiTrimAllSystemPagableMemory @ 0x140632E70
 * Callers:
 *     MmTrimAllSystemPagableMemory @ 0x140633260 (MmTrimAllSystemPagableMemory.c)
 *     MmVerifierTrimMemory @ 0x140AE50D0 (MmVerifierTrimMemory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     MiEmptyTargetedWorkingSet @ 0x1406322E8 (MiEmptyTargetedWorkingSet.c)
 *     MiPurgePartitionStandby @ 0x14064EF50 (MiPurgePartitionStandby.c)
 */

__int64 __fastcall MiTrimAllSystemPagableMemory(int a1, int a2)
{
  _DWORD *v2; // r14
  _DWORD *v3; // rsi
  unsigned __int64 SessionVm; // rbx
  __int64 v6; // r12
  unsigned int v7; // r8d
  _DWORD *v8; // rdx
  _DWORD *v9; // rcx
  unsigned int v11; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  int v13; // r13d
  __int64 v14; // rcx
  unsigned __int16 *v15; // rcx

  v2 = &unk_140C69468;
  v3 = &unk_140C69680;
  SessionVm = 1LL;
  v6 = 3LL;
  if ( !a1 )
  {
    v7 = 0;
    v8 = &unk_140C69468;
    v9 = &unk_140C69680;
    do
    {
      SessionVm = (unsigned __int64)v9;
      if ( v9 && *v8 != v9[1] )
        break;
      ++v7;
      v9 += 80;
      ++v8;
    }
    while ( v7 < 3 );
    if ( v7 == 6 )
      return 0LL;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 0LL;
  v11 = 0;
  CurrentThread = 0LL;
  v13 = 0;
  if ( _InterlockedIncrement(&dword_140C69448) <= 1 && KeAreInterruptsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 1;
    --CurrentThread->SpecialApcDisable;
    if ( !a1 )
    {
      do
      {
        SessionVm = (unsigned __int64)v3;
        if ( v3 && *v2 != v3[1] )
        {
          v11 = 1;
          MiEmptyTargetedWorkingSet((__int64)v3);
          *v2 = v3[1];
        }
        v3 += 80;
        ++v2;
        --v6;
      }
      while ( v6 );
      goto LABEL_22;
    }
    if ( a1 == 1 )
    {
      SessionVm = (unsigned __int64)&CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
      v14 = SessionVm;
    }
    else
    {
      if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      {
LABEL_22:
        if ( a2 && v11 )
        {
          if ( a1 == 1 )
            v15 = *(unsigned __int16 **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
          else
            v15 = MiSystemPartition;
          MiPurgePartitionStandby(v15, 8LL);
        }
        goto LABEL_28;
      }
      SessionVm = MiGetSessionVm();
      v14 = SessionVm;
    }
    MiEmptyTargetedWorkingSet(v14);
    v11 = 1;
    goto LABEL_22;
  }
LABEL_28:
  _InterlockedAdd(&dword_140C69448, 0xFFFFFFFF);
  if ( v13 )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v11;
}
