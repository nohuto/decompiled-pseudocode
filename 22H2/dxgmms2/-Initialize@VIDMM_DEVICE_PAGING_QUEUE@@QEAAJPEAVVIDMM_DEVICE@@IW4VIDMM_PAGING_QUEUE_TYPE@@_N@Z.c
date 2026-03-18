/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C008CA28
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C008C6C8 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001ABC0 (memset.c)
 *     VidSchCreateSyncObject @ 0x1C008CCC0 (VidSchCreateSyncObject.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C008E718 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1C00EBF84 (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebp
  int SyncObject; // eax
  int v11; // esi
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15[20]; // [rsp+50h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 744LL);
  *(_DWORD *)(a1 + 160) = a3;
  v8 = VIDMM_PAGING_QUEUE::InitializePagingQueue(a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(1LL, a2, v8);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return v9;
  }
  else
  {
    memset(v15, 0, sizeof(v15));
    v15[0] = 5;
    *(_QWORD *)&v15[2] = 4294962295LL;
    SyncObject = VidSchCreateSyncObject(v7, 0, (int)v15, 2, 0LL, a1, (PVOID)(a1 + 152), 0LL);
    v11 = SyncObject;
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry2(1LL, a1, SyncObject);
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
    }
    else if ( !*(_BYTE *)(v7 + 55)
           || a5
           || (v11 = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)a1), v11 >= 0) )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 152);
      result = 0LL;
      *(_QWORD *)(a1 + 96) = 4294962295LL;
      return result;
    }
    return (unsigned int)v11;
  }
}
