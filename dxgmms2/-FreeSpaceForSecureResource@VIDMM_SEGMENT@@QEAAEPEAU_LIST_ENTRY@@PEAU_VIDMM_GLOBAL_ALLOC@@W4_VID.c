/*
 * XREFs of ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00FD460
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEAPEAV3@@Z @ 0x1C00EDE8C (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FA26C (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C0102450 (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 */

char __fastcall VIDMM_SEGMENT::FreeSpaceForSecureResource(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int8 (*v11)(void *, void *); // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+39h] [rbp-Fh]
  __int16 v15; // [rsp+3Dh] [rbp-Bh]
  char v16; // [rsp+3Fh] [rbp-9h]

  if ( !*(_DWORD *)(a1 + 412) )
    return 1;
  v6 = ~*(_QWORD *)(a1 + 400) & (*(_QWORD *)(a1 + 400) + *(_QWORD *)(a3 + 16));
  if ( a4 != 5 )
  {
    v8 = *(_QWORD *)(a1 + 416);
    if ( v8 - *(_QWORD *)(a1 + 384) >= v6 )
      goto LABEL_6;
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 432);
  if ( v7 )
  {
    if ( v7 >= v6 )
    {
      v9 = *(_QWORD *)(a1 + 416);
      v8 = *(_QWORD *)(a1 + 424);
      goto LABEL_7;
    }
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 424);
LABEL_6:
  v9 = v8 - v6;
LABEL_7:
  v12 = a2;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v13 = 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(v6);
    *(_QWORD *)(v10 + 24) = v9;
    *(_QWORD *)(v10 + 32) = v8;
  }
  VIDMM_LINEAR_POOL::IterateAllocatedBlocksInRange(*(VIDMM_LINEAR_POOL **)(a1 + 152), v9, v8, &v12, v11);
  return v13;
}
