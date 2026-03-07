__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // zf
  unsigned __int8 v6; // r13
  _BYTE *SparePtr; // r8
  ULONG_PTR v8; // rbp
  unsigned int *v9; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v12; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & BugCheckParameter3) == 0 )
        goto LABEL_29;
LABEL_31:
      KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)BugCheckParameter3, HIDWORD(BugCheckParameter3));
    }
    v5 = (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) == 0;
  }
  else
  {
    v5 = (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v5 )
    goto LABEL_31;
  if ( !CurrentIrql && (CurrentThread->ApcState.InProgressFlags & 1) == 0 )
  {
    v6 = 0;
    goto LABEL_9;
  }
LABEL_29:
  v6 = CurrentIrql + 1;
LABEL_9:
  SparePtr = CurrentThread->WaitBlock[1].SparePtr;
  v8 = (MEMORY[0xFFFFF780000003D8] | BugCheckParameter3) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr && SparePtr[16] > v6 )
    KeBugCheckEx(0x131u, 2uLL, (unsigned __int8)SparePtr[16], v6, 0LL);
  if ( !v8 )
  {
    *((_DWORD *)a2 + 8) = 0;
    a2[6] = 0LL;
    a2[5] = 0LL;
    goto LABEL_14;
  }
  if ( CurrentIrql < 2u )
    goto LABEL_12;
  if ( !SparePtr || SparePtr[16] != v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    memset(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
    v12 = KeXStateLength;
    a2[6] = 0LL;
    *((_DWORD *)a2 + 8) = v12;
    a2[5] = (__int64)CurrentPrcb->ExtendedState;
    goto LABEL_14;
  }
  v9 = (unsigned int *)0xFFFFF78000000600LL;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
LABEL_12:
    v9 = (unsigned int *)0xFFFFF780000003E8LL;
  result = KeAllocateXStateContext(a2 + 3, a2, *v9);
  if ( (int)result < 0 )
    return result;
LABEL_14:
  a2[1] = (__int64)CurrentThread;
  *((_BYTE *)a2 + 16) = v6;
  a2[3] = v8;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = (__int64)CurrentThread->WaitBlock[1].SparePtr;
  if ( !v8 || (KeFeatureBits & 0x800000) == 0 )
    goto LABEL_20;
  if ( CurrentIrql != 2 || (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
  {
    RtlXSave(a2[5], v8, SparePtr);
LABEL_20:
    CurrentThread->WaitBlock[1].SparePtr = a2;
    if ( !CurrentIrql )
    {
      v5 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v5
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return 0LL;
  }
  *(_QWORD *)(a2[5] + 520) = v8;
  RtlXSaveS(a2[5], v8);
  CurrentThread->WaitBlock[1].SparePtr = a2;
  return 0LL;
}
