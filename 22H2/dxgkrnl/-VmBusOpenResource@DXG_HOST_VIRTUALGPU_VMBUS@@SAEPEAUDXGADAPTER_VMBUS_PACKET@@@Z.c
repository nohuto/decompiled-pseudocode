/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040684 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C012A160 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkOpenResource @ 0x1C015C5D0 (DxgkOpenResource.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // rax
  PVOID v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // eax
  _DWORD *v13; // r15
  SIZE_T v14; // rax
  PVOID v15; // r12
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD v36[14]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v37[8]; // [rsp+90h] [rbp-9h] BYREF
  DXGPUSHLOCK *v38; // [rsp+98h] [rbp-1h]
  int v39; // [rsp+A0h] [rbp+7h]
  _BYTE v40[72]; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned int v41; // [rsp+100h] [rbp+67h]
  PVOID v42; // [rsp+108h] [rbp+6Fh]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v38);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v6 = 0;
  v39 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v42 = 0LL;
    v9 = 0LL;
    v10 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    v11 = v10;
    if ( !v10 )
      goto LABEL_3;
    v12 = *(_DWORD *)(v10 + 36);
    if ( v12 > 0x8000 )
      goto LABEL_3;
    v41 = 4 * v12 + 8;
    v13 = operator new(v41, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( !v13 )
      goto LABEL_3;
    v14 = 80LL * *(unsigned int *)(v11 + 36);
    if ( !is_mul_ok(*(unsigned int *)(v11 + 36), 0x50uLL) )
      v14 = -1LL;
    v15 = operator new(v14, 0x4B677844u, 1, PagedPool);
    if ( !v15 )
      goto LABEL_11;
    v17 = *(_DWORD *)(v11 + 40);
    if ( v17 )
    {
      if ( v17 > 0x20000 )
      {
        LODWORD(v16) = -1073741811;
        goto LABEL_35;
      }
      v42 = operator new(*(unsigned int *)(v11 + 40), 0x4B677844u, 1, PagedPool);
      v9 = v42;
      if ( !v42 )
      {
LABEL_11:
        LODWORD(v16) = -1073741801;
LABEL_35:
        v13[1] = v16;
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v13, v41);
        operator delete[](v13);
        operator delete[](v15);
        operator delete[](v42);
        goto LABEL_4;
      }
    }
    if ( *(_BYTE *)(v11 + 28) )
    {
      memset(v36, 0, 0x68uLL);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v40,
        *((struct _KTHREAD ***)a1 + 7));
      v19 = *((_QWORD *)a1 + 7);
      v20 = (*(_DWORD *)(v11 + 32) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 256) )
        goto LABEL_23;
      v21 = *(_QWORD *)(v19 + 240);
      v18 = (unsigned int)v20;
      v19 = *(unsigned int *)(v21 + 16 * v20 + 8);
      if ( ((*(_DWORD *)(v11 + 32) >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
        || (v19 & 0x2000) != 0
        || (v19 & 0x1F) == 0 )
      {
        goto LABEL_23;
      }
      v18 = 2LL * (unsigned int)v20;
      v19 &= 0x1Fu;
      if ( (_BYTE)v19 != 13 )
      {
        v22 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v22 + 24) = 316LL;
        WdLogEvent5_WdError(v22);
LABEL_23:
        v23 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v23 + 24) = *(unsigned int *)(v11 + 32);
        WdLogEvent5_WdError(v23);
        LODWORD(v16) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
        goto LABEL_35;
      }
      v24 = *(_QWORD *)(v21 + 16LL * (unsigned int)v20);
      if ( !v24 )
        goto LABEL_23;
      if ( *(_DWORD *)v24 != 4 )
        goto LABEL_23;
      v19 = *(_QWORD *)(v24 + 16);
      if ( !v19 )
        goto LABEL_23;
      v36[1] = *(_QWORD *)(v24 + 16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
      LODWORD(v36[0]) = *(_DWORD *)(v11 + 24);
      LODWORD(v36[2]) = *(_DWORD *)(v11 + 36);
      LODWORD(v36[8]) = *(_DWORD *)(v11 + 40);
      v36[3] = v15;
      v36[9] = v9;
      v27 = DxgkOpenResourceFromNtHandle((ULONG64)v36, v25, v26);
      v16 = v27;
      if ( v27 >= 0 )
      {
        *v13 = v36[10];
        if ( *(_DWORD *)(v11 + 36) )
        {
          do
          {
            v30 = v6++;
            v13[v30 + 2] = *((_DWORD *)v15 + 20 * v30);
          }
          while ( v6 < *(_DWORD *)(v11 + 36) );
        }
        goto LABEL_35;
      }
    }
    else
    {
      memset(v36, 0, 0x48uLL);
      LODWORD(v36[0]) = *(_DWORD *)(v11 + 24);
      HIDWORD(v36[0]) = *(_DWORD *)(v11 + 32);
      LODWORD(v36[1]) = *(_DWORD *)(v11 + 36);
      LODWORD(v36[8]) = *(_DWORD *)(v11 + 40);
      v36[2] = v15;
      v36[7] = v9;
      v33 = DxgkOpenResource((ULONG64)v36, v31, v32);
      v16 = v33;
      if ( v33 >= 0 )
      {
        *v13 = HIDWORD(v36[8]);
        if ( *(_DWORD *)(v11 + 36) )
        {
          do
          {
            v35 = v6++;
            v13[v35 + 2] = *((_DWORD *)v15 + 20 * v35);
          }
          while ( v6 < *(_DWORD *)(v11 + 36) );
        }
        goto LABEL_35;
      }
    }
    v34 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v34 + 24) = v16;
    WdLogEvent5_WdError(v34);
    goto LABEL_35;
  }
  v7 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v7 + 24) = 1449LL;
  WdLogEvent5_WdError(v7);
LABEL_3:
  v5 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  return v5;
}
