/*
 * XREFs of ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0086BCC
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0086968 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C00249A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A8D0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00765B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C0086B30 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToSystemProcess(
        DXGADAPTER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _VIDMM_LOCAL_ALLOC *v3; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r9
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  unsigned __int8 v19; // [rsp+60h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v20 = 0LL;
  v19 = 0;
  LODWORD(v8) = VIDMM_GLOBAL::OpenOneAllocation(this, this[5049], a2, 0LL, 0, 0LL, &v20, &v19);
  if ( (int)v8 < 0 )
  {
    _InterlockedIncrement(&dword_1C0050664);
    v15 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)(v15 + 32) = *((_QWORD *)a2 + 1);
    WdLogEvent5_WdLowResource(v15);
  }
  else
  {
    v3 = *(struct _VIDMM_LOCAL_ALLOC **)v20;
    if ( *((int *)a2 + 85) > 0 )
    {
      v13 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess((VIDMM_GLOBAL *)this, a3, *(struct _VIDMM_LOCAL_ALLOC **)v20);
      v8 = v13;
      if ( v13 >= 0 )
        goto LABEL_4;
      _InterlockedIncrement(&dword_1C0050664);
      v16 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
      v16[3] = a2;
      v16[4] = *((_QWORD *)a2 + 1);
      v16[5] = v8;
      WdLogEvent5_WdLowResource(v16);
      VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, (struct _KEVENT *)v20, 0LL, 0, 0, 0LL);
    }
  }
  if ( (int)v8 < 0 )
    return 0LL;
LABEL_4:
  if ( bTracingEnabled )
  {
    v10 = v3 ? *(unsigned int *)(*((_QWORD *)v3 + 1) + 8LL) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      LODWORD(v18) = v10;
      LODWORD(v17) = *(_DWORD *)(*((_QWORD *)a3 + 1) + 8LL);
      McTemplateK0pqq_EtwWriteTransfer(v10, &EventTransferAllocationOwnership, v9, a2, v17, v18);
    }
  }
  if ( *((_QWORD *)a3 + 1) )
  {
    v11 = *((_QWORD *)a2 + 16);
    if ( v11 )
    {
      VidMmRecordAlloc((VIDMM_GLOBAL *)this, (__int64)a2, (__int64)a3, v11, *((_QWORD *)a2 + 2), 1);
      VidMmRecordAlloc((VIDMM_GLOBAL *)this, (__int64)a2, (__int64)v3, *((_QWORD *)a2 + 16), *((_QWORD *)a2 + 2), 0);
    }
  }
  return v3;
}
