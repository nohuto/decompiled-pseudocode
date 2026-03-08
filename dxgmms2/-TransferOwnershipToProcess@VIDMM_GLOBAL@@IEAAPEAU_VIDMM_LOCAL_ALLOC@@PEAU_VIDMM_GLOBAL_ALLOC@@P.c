/*
 * XREFs of ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0087D78
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0087CAC (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0012E60 (VidSchSuspendResumeDevice.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EF9C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C0087F7C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C008A6F4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToProcess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        struct _VIDMM_LOCAL_ALLOC *a4)
{
  __int64 v4; // rax
  int v5; // edi
  struct _VIDMM_LOCAL_ALLOC *v6; // rbp
  VIDMM_GLOBAL *v9; // r12
  PRKPROCESS *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v14; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v15; // r14
  char *v16; // rax
  _QWORD *v17; // r12
  _QWORD *i; // r13
  _KEVENT *v19; // rbx
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-88h] BYREF

  v4 = *((_QWORD *)a2 + 15);
  v5 = 0;
  v6 = a4;
  v9 = this;
  if ( v4
    && (*(_DWORD *)(v4 + 80) & 0x1001) != 0
    && *((int *)a2 + 91) > 0
    && (v10 = (PRKPROCESS *)*((_QWORD *)a4 + 1),
        memset(&ApcState, 0, sizeof(ApcState)),
        KeStackAttachProcess(*v10, &ApcState),
        v11 = (int)VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(v9, a3, v6),
        KeUnstackDetachProcess(&ApcState),
        (int)v11 < 0) )
  {
    _InterlockedIncrement(&dword_1C0076784);
    WdLogSingleEntry3(6LL, a2, *((_QWORD *)a2 + 1), v11);
    DxgkLogInternalTriageEvent(v14, 262145LL);
    v15 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
    if ( v15 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) )
    {
      do
      {
        v16 = (char *)v15 - 56;
        if ( (struct _VIDMM_GLOBAL_ALLOC *)((char *)v15 - 56) != a3 )
        {
          v17 = v16 + 40;
          for ( i = (_QWORD *)*((_QWORD *)v16 + 5); i != v17; i = (_QWORD *)*i )
          {
            v19 = *(_KEVENT **)(*(i - 4) + 32LL);
            VidSchMarkDeviceAsError((__int64)v19);
            VidSchSuspendResumeDevice(v19, 1, 0, 0);
            VidSchSuspendResumeDevice(v19, 0, 0, 0);
          }
        }
        v15 = *(struct _VIDMM_GLOBAL_ALLOC **)v15;
      }
      while ( v15 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) );
      v6 = a4;
      v9 = this;
    }
    VidMmRecordAlloc(v9, a2, a3, *((_QWORD *)a2 + 15), *((_QWORD *)a2 + 2), 0);
    VidMmRecordAlloc(v9, a2, v6, *((_QWORD *)a2 + 15), *((_QWORD *)a2 + 2), 1);
    *((_DWORD *)a2 + 17) |= 0x40000000u;
    v6 = 0LL;
    *((_DWORD *)a2 + 18) ^= (*((_DWORD *)a2 + 18) ^ *(_DWORD *)(*((_QWORD *)a2 + 15) + 20LL)) & 0x1F;
  }
  else if ( bTracingEnabled )
  {
    if ( v6 )
      v5 = *(_DWORD *)(*((_QWORD *)v6 + 1) + 8LL);
    if ( (byte_1C00769C1 & 8) != 0 )
    {
      v12 = *(unsigned int *)(*((_QWORD *)a3 + 1) + 8LL);
      McTemplateK0pqq_EtwWriteTransfer(v12, &EventTransferAllocationOwnership, (__int64)a3, a2, v12, v5);
    }
  }
  return v6;
}
