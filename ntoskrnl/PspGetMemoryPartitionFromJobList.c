/*
 * XREFs of PspGetMemoryPartitionFromJobList @ 0x1409AF458
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x14070D690 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PspGetMemoryPartitionFromJobList(__int64 a1, unsigned __int64 a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  unsigned __int64 v5; // rbp
  __int64 v9; // r14
  PVOID v10; // rax
  PVOID v11; // rcx
  bool v12; // zf

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  if ( a2 )
  {
    do
    {
      v9 = *(_QWORD *)(a1 + 8 * v5);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 56), 1u);
      v10 = *(PVOID *)(v9 + 1776);
      if ( v10 == (PVOID)-1LL )
      {
        v4 = -1073740682;
      }
      else
      {
        v11 = *a3;
        if ( v10 )
        {
          if ( v11 )
          {
            if ( v10 != v11 )
              v4 = -1073741637;
          }
          else
          {
            ObfReferenceObjectWithTag(*(PVOID *)(v9 + 1776), 0x624A7350u);
            *a3 = *(PVOID *)(v9 + 1776);
          }
        }
      }
      ExReleaseResourceLite((PERESOURCE)(v9 + 56));
      if ( v4 < 0 )
        break;
      ++v5;
    }
    while ( v5 < a2 );
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    v4 = -1073741749;
  }
  else if ( v4 >= 0 )
  {
    goto LABEL_16;
  }
  if ( *a3 )
  {
    ObfDereferenceObjectWithTag(*a3, 0x624A7350u);
    *a3 = 0LL;
  }
LABEL_16:
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v4;
}
