/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C0081A7C
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0081728 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00790D8 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     VidSchCreateSyncObject @ 0x1C0081D80 (VidSchCreateSyncObject.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1C00B6ACC (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v7; // r9
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  int SyncObject; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 result; // rax
  __int64 v20; // rax
  int v21[20]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 624LL);
  *(_DWORD *)(a1 + 160) = a3;
  v10 = VIDMM_PAGING_QUEUE::InitializePagingQueue(a1, a2, a3, v7, a4);
  v14 = v10;
  if ( v10 < 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12, v11, v13);
    *(_QWORD *)(v20 + 24) = a2;
LABEL_7:
    *(_QWORD *)(v20 + 32) = v14;
    WdLogEvent5_WdAssertion(v20);
    return (unsigned int)v14;
  }
  memset(v21, 0, sizeof(v21));
  v21[0] = 5;
  *(_QWORD *)&v21[2] = 4294962295LL;
  SyncObject = VidSchCreateSyncObject(v9, 0, (int)v21, 2, 0LL, a1, (PVOID)(a1 + 152), 0LL);
  v14 = SyncObject;
  if ( SyncObject < 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = a1;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v9 + 55)
    || a5
    || (LODWORD(v14) = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)a1), (int)v14 >= 0) )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 152);
    result = 0LL;
    *(_QWORD *)(a1 + 96) = 4294962295LL;
    return result;
  }
  return (unsigned int)v14;
}
