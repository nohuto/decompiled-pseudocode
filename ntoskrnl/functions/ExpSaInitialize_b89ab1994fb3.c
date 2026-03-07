char ExpSaInitialize()
{
  char v0; // bl
  void *Pool2; // rax
  __int64 MaximumProcessorCount; // rbp
  unsigned int v3; // r14d
  unsigned int v4; // edi
  __int64 v5; // rsi
  struct _KPRCB *v6; // rax
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rcx
  void *Pool3; // rcx
  __int64 Prcb; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  ExSaPageGroupDescriptorArray = 0LL;
  ExSaPageArrays = 0LL;
  ExSaNonPagedSlotAllocator = 0LL;
  ExSaPagedSlotAllocator = 0LL;
  ExSaPageGroupDescriptorArrayLock = 0LL;
  v13 = 0LL;
  Pool2 = (void *)ExAllocatePool2(64LL, 128LL, 1632860229LL);
  ExSaPageGroupDescriptorArray = (__int64)Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    ExSaPageArrays = ExAllocatePool2(64LL, 8 * MaximumProcessorCount, 1632860229LL);
    if ( ExSaPageArrays )
    {
      v3 = KeNumberProcessors_0;
      v4 = 0;
      if ( (_DWORD)MaximumProcessorCount )
      {
        v5 = 0LL;
        while ( 1 )
        {
          v6 = v4 >= v3 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v4);
          SchedulerSubNode = v6->SchedulerSubNode;
          LOBYTE(v13) = 3;
          DWORD2(v13) = SchedulerSubNode->Affinity.Reserved[0] | 0x80000000;
          Pool3 = (void *)ExAllocatePool3(64, 128, 1632860229, (unsigned int)&v13, 1);
          *(_QWORD *)(v5 + ExSaPageArrays) = Pool3;
          if ( !Pool3 )
            break;
          memset(Pool3, 0, 0x80uLL);
          Prcb = KeGetPrcb(v4);
          if ( Prcb )
            *(_QWORD *)(Prcb + 34480) = *(_QWORD *)(v5 + ExSaPageArrays);
          ++v4;
          v5 += 8LL;
          if ( v4 >= (unsigned int)MaximumProcessorCount )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v10 = ExAllocatePool2(64LL, 72LL, 1632860229LL);
        ExSaNonPagedSlotAllocator = v10;
        if ( v10 )
        {
          ExpSaAllocatorInitialize(v10, 0LL);
          v11 = ExAllocatePool2(256LL, 72LL, 1632860229LL);
          ExSaPagedSlotAllocator = v11;
          if ( v11 )
          {
            ExpSaAllocatorInitialize(v11, 1LL);
            return 1;
          }
        }
      }
    }
  }
  return v0;
}
