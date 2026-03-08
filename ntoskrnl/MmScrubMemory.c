/*
 * XREFs of MmScrubMemory @ 0x140A43E64
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1402A4FEC (KeInitializeGate.c)
 *     MiReferencePageRuns @ 0x1402EB520 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1402EBA0C (MiDereferencePageRuns.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140A434AC (MiReferenceNonPagedMemoryProcessList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MmScrubMemory(__int64 a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  unsigned int v5; // edi
  _DWORD *Pool; // rax
  _QWORD *v7; // rsi
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD *v12; // r15
  _QWORD *v13; // r14
  int *v14; // r15
  unsigned __int64 v15; // rbx
  void *v16; // rcx
  __int64 v17; // rcx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  *a3 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a2,
             1u,
             (POBJECT_TYPE)ExEventObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v5 = (unsigned __int16)KeNumberNodes;
    Pool = MiAllocatePool(64, 200LL * (unsigned __int16)KeNumberNodes + 88, 0x6363454Du);
    v7 = Pool;
    if ( Pool )
    {
      *Pool = v5;
      KeInitializeGate((__int64)(Pool + 2), 0);
      v7[6] = MiSystemPartition;
      v7[4] = Object;
      MiReferenceNonPagedMemoryProcessList((__int64)v7);
      CurrentThread = KeGetCurrentThread();
      v10 = v7[6];
      v7[5] = 0LL;
      v7[7] = CurrentThread;
      v11 = 0;
      v7[10] = MiReferencePageRuns(v10, 1u);
      v12 = v7 + 11;
      if ( v5 )
      {
        v13 = v7 + 16;
        do
        {
          *v12 = v7;
          *((_DWORD *)v13 - 8) = v11;
          *(v13 - 3) = 0LL;
          *(v13 - 1) = MiScrubMemoryWorker;
          *v13 = v12;
          ExQueueWorkItemToPartition(v13 - 3, 4, v11++, qword_140C6B188);
          v12 += 25;
          v13 += 25;
        }
        while ( v11 < v5 );
      }
      v8 = 0;
      KeWaitForGate((__int64)(v7 + 1), 0LL, 0);
      v14 = (int *)v12 + 3;
      while ( 1 )
      {
        v14 -= 50;
        if ( *v14 < 0 )
          break;
        if ( !--v11 )
          goto LABEL_12;
      }
      v8 = *v14;
LABEL_12:
      v15 = 0LL;
      for ( *a3 = v7[5]; v15 < v7[8]; ++v15 )
        ObfDereferenceObject(*(PVOID *)(v7[9] + 8 * v15));
      v16 = (void *)v7[9];
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      v17 = v7[10];
      if ( v17 )
        MiDereferencePageRuns(v17);
      ExFreePoolWithTag(v7, 0);
      if ( *((_DWORD *)Object + 1) || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
        v8 = -1073741248;
      else
        _InterlockedIncrement(&dword_140C67C10);
    }
    else
    {
      v8 = -1073741670;
    }
    ObfDereferenceObject(Object);
    return v8;
  }
  return result;
}
