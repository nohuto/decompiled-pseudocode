/*
 * XREFs of ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0081278
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C00782B0 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0080C24 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0081070 (-NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0081088 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C0082BD0 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008C500 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00AE018 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00B23F4 (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00B3440 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00B89D8 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v3; // r11d
  unsigned int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r9
  _BYTE *v8; // r10
  struct _RTL_BALANCED_NODE *v9; // rax
  _QWORD *Children; // rdx
  _QWORD **v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx

  if ( a2 )
  {
    ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
    v3 = *((_DWORD *)this + 1750);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_QWORD *)this + 5027);
      while ( 2 )
      {
        v6 = 1584LL * v4;
        v7 = 672LL;
        v8 = (_BYTE *)(v6 + v5 + 512);
        do
        {
          if ( (*v8 & 1) != 0 )
          {
            v9 = VIDMM_PARTITION::_PartitionTree;
            Children = 0LL;
            while ( v9 )
            {
              Children = v9->Children;
              v9 = v9->Children[0];
            }
            if ( Children )
            {
              while ( !*(_BYTE *)(*(_QWORD *)(Children[5] + 376LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL) + 24)
                                + 336LL * v4
                                + 128) )
              {
                v11 = (_QWORD **)Children[1];
                v12 = Children;
                if ( v11 )
                {
                  v13 = *v11;
                  for ( Children = (_QWORD *)Children[1]; v13; v13 = (_QWORD *)*v13 )
                    Children = v13;
                }
                else
                {
                  while ( 1 )
                  {
                    Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !Children || (_QWORD *)*Children == v12 )
                      break;
                    v12 = Children;
                  }
                }
                if ( !Children )
                  goto LABEL_20;
              }
LABEL_24:
              ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              goto LABEL_25;
            }
          }
          else if ( *(_BYTE *)(v7 + v6 + v5) )
          {
            goto LABEL_24;
          }
LABEL_20:
          v8 += 24;
          v7 += 336LL;
        }
        while ( v7 < 1344 );
        if ( ++v4 < v3 )
          continue;
        break;
      }
    }
    ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  }
  else
  {
LABEL_25:
    _InterlockedIncrement64((volatile signed __int64 *)this + 5573);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 176LL), 0, 0);
  }
}
