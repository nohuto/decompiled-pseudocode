/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C02456E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0026914 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C00420A4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C0241644 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  struct DXGADAPTER_VMBUS_PACKET *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  unsigned __int8 v7; // bp
  __int64 v8; // r15
  unsigned int v9; // r12d
  int v10; // r14d
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v15; // rax
  unsigned int v16; // eax
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v17; // rcx
  __int64 (__fastcall *v18)(struct DXGADAPTER_VMBUS_PACKET *); // rax
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+70h] [rbp+8h]

  v3 = *((_QWORD *)a1 + 5);
  v4 = a1;
  v5 = (_QWORD *)*((_QWORD *)a1 + 10);
  if ( v3 )
  {
    v6 = v3 + 168;
  }
  else
  {
    a1 = (struct DXGADAPTER_VMBUS_PACKET *)*((_QWORD *)a1 + 7);
    if ( a1 )
      v6 = *((_QWORD *)a1 + 62) + 128LL;
    else
      v6 = *((_QWORD *)v4 + 8);
  }
  v25 = 0;
  v7 = 0;
  v8 = *v5;
  v9 = 0;
  v10 = *((_DWORD *)v5 + 3);
  v11 = 0;
  LOBYTE(a1) = 64;
  if ( !*(_BYTE *)(v6 + 57) )
  {
    if ( *(_DWORD *)(v6 + 40) != v10 )
    {
      v12 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v12 + 24) = 297LL;
LABEL_44:
      v13 = v12;
      goto LABEL_45;
    }
    if ( !*((_QWORD *)v4 + 7) && v3 )
      *((_QWORD *)v4 + 7) = *(_QWORD *)(v3 + 96);
    _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
    if ( v10 == 1 )
    {
      if ( *((_DWORD *)v4 + 22) < 0x18u )
      {
        v13 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v13 + 24) = *((unsigned int *)v4 + 22);
        *(_QWORD *)(v13 + 32) = 315LL;
LABEL_45:
        WdLogEvent5_WdError(v13);
        goto LABEL_46;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0pxq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventVmBusProcessPacketGlobalWorkerBegin,
          a3,
          *((_QWORD *)v4 + 4),
          *v5,
          *((_DWORD *)v5 + 4));
      a2 = *((unsigned int *)v5 + 4);
      v25 = a2;
      if ( (unsigned int)(a2 - 1000) > 0x14 )
      {
        v13 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v13 + 24) = *((int *)v5 + 4);
        *(_QWORD *)(v13 + 32) = 325LL;
        goto LABEL_45;
      }
      v14 = (int)a2 - 1000;
      v15 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost;
    }
    else
    {
      v16 = *((_DWORD *)v4 + 22);
      if ( *((_DWORD *)v5 + 3) )
      {
        if ( v16 < 0x18 )
        {
          v13 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v13 + 24) = *((unsigned int *)v4 + 22);
          *(_QWORD *)(v13 + 32) = 356LL;
          goto LABEL_45;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          McTemplateK0pxq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventVmBusProcessPacketHostToVmWorkerBegin,
            a3,
            *((_QWORD *)v4 + 4),
            *v5,
            *((_DWORD *)v5 + 4));
        v9 = *((_DWORD *)v5 + 4);
        if ( v9 > 5 )
        {
          v12 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v12 + 24) = *((int *)v5 + 4);
          *(_QWORD *)(v12 + 32) = 366LL;
          goto LABEL_44;
        }
        v14 = *((int *)v5 + 4);
        v15 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm;
      }
      else
      {
        if ( v16 < 0x18 )
        {
          v13 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v13 + 24) = *((unsigned int *)v4 + 22);
          *(_QWORD *)(v13 + 32) = 336LL;
          goto LABEL_45;
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
          McTemplateK0pxq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventVmBusProcessPacketWorkerBegin,
            a3,
            *((_QWORD *)v4 + 4),
            *v5,
            *((_DWORD *)v5 + 4));
        v11 = *((_DWORD *)v5 + 4);
        if ( v11 > 0x41 )
        {
          v13 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v13 + 24) = *((int *)v5 + 4);
          *(_QWORD *)(v13 + 32) = 346LL;
          goto LABEL_45;
        }
        v14 = *((int *)v5 + 4);
        v15 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost;
      }
    }
    v17 = &v15[2 * v14];
    if ( *((_DWORD *)v4 + 22) >= *((_DWORD *)v17 + 3) )
    {
      v18 = (__int64 (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *))*v17;
      if ( *((_BYTE *)v17 + 8) )
        v19 = VmBusExecuteCommandInProcessContext(v4, v18);
      else
        v19 = v18(v4);
      v7 = v19;
LABEL_48:
      if ( v7 )
        goto LABEL_50;
      goto LABEL_49;
    }
    v13 = WdLogNewEntry5_WdError(v17, a2);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)v4 + 22);
    *(_QWORD *)(v13 + 32) = 373LL;
    goto LABEL_45;
  }
LABEL_46:
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 304322) )
  {
    *(_BYTE *)(v6 + 57) = 1;
    goto LABEL_48;
  }
LABEL_49:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v4 + 9), 0LL, 0);
LABEL_50:
  if ( bTracingEnabled )
  {
    if ( v10 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v22 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
        v24 = v7;
        LODWORD(v23) = v25;
LABEL_59:
        McTemplateK0pxqt_EtwWriteTransfer(v20, v22, v21, *((_QWORD *)v4 + 4), v8, v23, v24);
      }
    }
    else if ( v10 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        v22 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        v24 = v7;
        LODWORD(v23) = v9;
        goto LABEL_59;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      v22 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
      v24 = v7;
      LODWORD(v23) = v11;
      goto LABEL_59;
    }
  }
  ExFreePoolWithTag(v4, 0x4B677844u);
}
