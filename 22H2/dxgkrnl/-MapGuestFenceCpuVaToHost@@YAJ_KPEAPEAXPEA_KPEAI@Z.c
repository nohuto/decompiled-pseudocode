/*
 * XREFs of ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C023B0F4
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F135C (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0119EC8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C024AE28 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026E5FC (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapGuestFenceCpuVaToHost(unsigned __int64 a1, void **a2, unsigned __int64 *a3, unsigned int *a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _MDL *Mdl; // rdi
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0;
  BaseAddress = 0LL;
  RegionSize = 4096LL;
  v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x801000u, 4u);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  Mdl = IoAllocateMdl(0LL, RegionSize, 0, 0, 0LL);
  if ( !Mdl )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    LODWORD(v11) = -1073741801;
    *(_QWORD *)(v16 + 24) = -1073741801LL;
    *(_QWORD *)(v16 + 32) = 13136LL;
    WdLogEvent5_WdError(v16);
LABEL_12:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return (unsigned int)v11;
  }
  v17 = 0;
  v18 = a1 >> 12;
  if ( (RegionSize & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v19 = 0LL;
    do
    {
      *((_QWORD *)&Mdl[1].Next + v19) = v18;
      ++v17;
      ++v18;
      v19 = v17;
    }
    while ( v17 < RegionSize >> 12 );
  }
  v20 = MmRotatePhysicalView(BaseAddress, &RegionSize, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
  v11 = v20;
  if ( v20 >= 0 )
  {
    *a2 = BaseAddress;
    *a3 = a1;
    *a4 = 0;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v23 + 24) = v11;
    *(_QWORD *)(v23 + 32) = 13151LL;
    WdLogEvent5_WdError(v23);
  }
  IoFreeMdl(Mdl);
  if ( (int)v11 < 0 )
    goto LABEL_12;
  return (unsigned int)v11;
}
