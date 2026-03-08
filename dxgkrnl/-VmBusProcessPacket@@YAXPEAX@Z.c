/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C037EC00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0053D58 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C005778C (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z @ 0x1C033E90C (-AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z.c)
 *     ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1C036AC34 (-ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C037996C (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  DXGVIRTUALMACHINE **v2; // rsi
  __int64 *v3; // r15
  DXGVIRTUALMACHINE *v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rcx
  DXGVIRTUALMACHINE *v8; // rax
  char v9; // bp
  unsigned __int8 v10; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  _DWORD *v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  const wchar_t *v18; // r9
  __int64 v19; // rdi
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v20; // rdi
  unsigned int v21; // eax
  int v22; // edi
  __int64 v23; // rdi
  struct _LUID *v24; // rax
  __int64 *v25; // r14
  struct DXGK_VIRTUAL_GPU_PARAV *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // al
  const EVENT_DESCRIPTOR *v30; // rdx
  int v31; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  int v35; // [rsp+50h] [rbp-58h]
  int v36; // [rsp+54h] [rbp-54h]
  __int64 v37; // [rsp+58h] [rbp-50h]
  char v38; // [rsp+B8h] [rbp+10h]
  int v39; // [rsp+C0h] [rbp+18h]
  int v40; // [rsp+C8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 10);
  v2 = (DXGVIRTUALMACHINE **)((char *)a1 + 104);
  v3 = (__int64 *)*((_QWORD *)a1 + 17);
  v38 = 0;
  if ( v1 )
  {
    v5 = *(DXGVIRTUALMACHINE **)(v1 + 104);
    v6 = (_DWORD *)(v1 + 176);
    *v2 = v5;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v5 + 98);
    v7 = *(_QWORD *)(v1 + 96);
    *((_QWORD *)a1 + 12) = v7;
  }
  else
  {
    v7 = *((_QWORD *)a1 + 12);
    if ( v7 )
    {
      v8 = *(DXGVIRTUALMACHINE **)(v7 + 608);
      *v2 = v8;
      v6 = (_DWORD *)((char *)v8 + 160);
      *((_DWORD *)a1 + 38) = *((_DWORD *)v8 + 98);
    }
    else
    {
      v6 = (_DWORD *)*((_QWORD *)a1 + 14);
    }
  }
  v9 = 1;
  v10 = 0;
  v11 = (unsigned int)*((char *)v3 + 12);
  v12 = 2LL;
  v37 = *v3;
  v36 = *((char *)v3 + 12);
  v39 = 0;
  v40 = 0;
  v35 = 0;
  if ( *((_BYTE *)v6 + 69) )
    goto LABEL_73;
  if ( *v2 && *((_BYTE *)*v2 + 339) )
  {
    if ( v6[12] == 1 && (unsigned int)v11 > 1 )
    {
      v13 = 408LL;
      WdLogSingleEntry1(2LL, 408LL);
LABEL_12:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The command is sent to invalid channel",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_73;
    }
  }
  else if ( v6[12] != (_DWORD)v11 )
  {
    v13 = 415LL;
    WdLogSingleEntry1(2LL, 415LL);
    goto LABEL_12;
  }
  if ( !v7 && v1 )
    *((_QWORD *)a1 + 12) = *(_QWORD *)(v1 + 96);
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  if ( (unsigned int)v11 > 1 )
  {
    v14 = (_DWORD *)((char *)a1 + 144);
    v15 = *((_DWORD *)a1 + 36);
    if ( v15 < 0x18 )
    {
      v16 = 518LL;
      WdLogSingleEntry2(2LL, v15, 518LL);
      v17 = (unsigned int)*v14;
LABEL_21:
      v18 = L"Invalid packet size: %I64n";
LABEL_72:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v17, v16, 0LL, 0LL, 0LL);
      goto LABEL_73;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketHostToVmWorkerBegin,
        v11,
        (char *)*v2 + 160,
        *v3,
        *((_DWORD *)v3 + 4));
      v12 = 2LL;
    }
    v19 = *((int *)v3 + 4);
    v40 = v19;
    if ( (unsigned int)v19 <= 6 )
    {
      v20 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)((char *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm
                                                               + 16 * v19);
      goto LABEL_59;
    }
    v16 = 528LL;
    WdLogSingleEntry2(2LL, *((int *)v3 + 4), 528LL);
    goto LABEL_70;
  }
  v21 = *((_DWORD *)a1 + 36);
  if ( (_DWORD)v11 == 1 )
  {
    if ( v21 < 0x18 )
    {
      v16 = 435LL;
LABEL_31:
      WdLogSingleEntry2(2LL, *((unsigned int *)a1 + 36), v16);
      v17 = *((unsigned int *)a1 + 36);
      goto LABEL_21;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketGlobalWorkerBegin,
        v11,
        (char *)*v2 + 160,
        *v3,
        *((_DWORD *)v3 + 4));
      v12 = 2LL;
    }
    v22 = *((_DWORD *)v3 + 4);
    v39 = v22;
    if ( (unsigned int)(v22 - 1000) > 0x15 )
    {
      v16 = 445LL;
      WdLogSingleEntry2(2LL, *((int *)v3 + 4), 445LL);
      v18 = L"Invalid VM to Host command is passed: %I64n";
LABEL_71:
      v17 = *((int *)v3 + 4);
      goto LABEL_72;
    }
    v20 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost + 2 * v22 - 2000;
  }
  else
  {
    if ( v21 < 0x18 )
    {
      v16 = 455LL;
      goto LABEL_31;
    }
    v23 = *((int *)v3 + 4);
    v35 = v23;
    if ( (unsigned int)v23 > 0x42 )
    {
      v16 = 461LL;
      WdLogSingleEntry2(2LL, *((int *)v3 + 4), 461LL);
LABEL_70:
      v18 = L"Invalid command is passed: %I64n";
      goto LABEL_71;
    }
    v20 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost + 2 * v23;
    if ( !*((_QWORD *)a1 + 10) )
    {
      v24 = (struct _LUID *)*((_QWORD *)a1 + 15);
      if ( !v24 )
      {
        WdLogSingleEntry1(2LL, 475LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid extended header", 475LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_73;
      }
      v25 = (__int64 *)&v24[1];
      v26 = DXGVIRTUALMACHINE::AcquireVirtualGpuByLuid(*v2, v24 + 1);
      *((_QWORD *)a1 + 10) = v26;
      if ( !v26 )
      {
        WdLogSingleEntry2(2LL, *v25, 481LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find virtual GPU by luid: 0x%I64x",
          *v25,
          481LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_73;
      }
      v38 = 1;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0pxq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventVmBusProcessPacketWorkerBegin,
        v11,
        (char *)*v2 + 160,
        *v3,
        *((_DWORD *)v3 + 4));
  }
  v14 = (_DWORD *)((char *)a1 + 144);
  if ( !*((_BYTE *)*v2 + 339) || *((_BYTE *)a1 + 156) || (*(_DWORD *)(*((_QWORD *)a1 + 17) + 12LL) & 0x100) != 0 )
  {
    v9 = 1;
LABEL_59:
    if ( *v14 >= *((_DWORD *)v20 + 3) )
    {
      v9 = 0;
      if ( *((_BYTE *)v20 + 8) )
        v29 = VmBusExecuteCommandInProcessContext(a1, *(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *))v20);
      else
        v29 = (*(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *, __int64, __int64, __int64))v20)(
                a1,
                v1,
                v11,
                v12);
      v10 = v29;
    }
    else
    {
      WdLogSingleEntry2(2LL, (unsigned int)*v14, 538LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid packet size: %I64n",
        (unsigned int)*v14,
        538LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v38 )
      DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
    if ( !v9 )
    {
LABEL_75:
      if ( !v10 )
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), 0LL, 0);
      if ( !bTracingEnabled )
        goto LABEL_87;
      if ( v36 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        {
          v30 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
          LODWORD(v34) = v10;
          v31 = v39;
LABEL_86:
          LODWORD(v33) = v31;
          McTemplateK0pxqt_EtwWriteTransfer(v27, v30, v28, (char *)*v2 + 160, v37, v33, v34);
        }
      }
      else if ( v36 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        {
          v30 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
          LODWORD(v34) = v10;
          v31 = v40;
          goto LABEL_86;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v30 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
        LODWORD(v34) = v10;
        v31 = v35;
        goto LABEL_86;
      }
LABEL_87:
      Global = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160), a1);
      return;
    }
LABEL_73:
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304482) )
      *((_BYTE *)v6 + 69) = 1;
    goto LABEL_75;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
  {
    LODWORD(v33) = 0;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusSecondaryWorkItem,
      v11,
      v6,
      v37,
      v33);
  }
  *((_BYTE *)a1 + 156) = 1;
  if ( v38 )
    DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 2) = VmBusProcessPacket;
  *((_QWORD *)a1 + 3) = a1;
  *(_QWORD *)a1 = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
}
