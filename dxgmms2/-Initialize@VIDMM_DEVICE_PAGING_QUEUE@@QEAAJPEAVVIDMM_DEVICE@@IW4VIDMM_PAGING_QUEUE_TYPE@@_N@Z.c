/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C00AA3AC
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C00AA04C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchCreateSyncObject @ 0x1C00AA640 (VidSchCreateSyncObject.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00AB3C0 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1C00EC2F4 (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(__int64 a1, __int64 *a2, __int64 a3, int a4, char a5)
{
  __int64 v7; // r9
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ebp
  int SyncObject; // eax
  int v13; // esi
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17[20]; // [rsp+50h] [rbp-58h] BYREF

  v7 = *a2;
  v9 = *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 744LL);
  *(_DWORD *)(a1 + 160) = a3;
  v10 = VIDMM_PAGING_QUEUE::InitializePagingQueue(a1, a2, a3, v7, a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(1LL, a2, v10);
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    return v11;
  }
  else
  {
    memset(v17, 0, sizeof(v17));
    v17[0] = 5;
    *(_QWORD *)&v17[2] = 4294962295LL;
    SyncObject = VidSchCreateSyncObject(v9, 0, (int)v17, 2, 0LL, a1, (PVOID)(a1 + 152), 0LL);
    v13 = SyncObject;
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry2(1LL, a1, SyncObject);
      DxgkLogInternalTriageEvent(v16, 0x40000LL);
    }
    else if ( !*(_BYTE *)(v9 + 55)
           || a5
           || (v13 = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)a1), v13 >= 0) )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 152);
      result = 0LL;
      *(_QWORD *)(a1 + 96) = 4294962295LL;
      return result;
    }
    return (unsigned int)v13;
  }
}
