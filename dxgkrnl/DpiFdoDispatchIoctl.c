NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  ULONG_PTR v3; // rsi
  PVOID DeviceExtension; // r12
  unsigned int Length; // edx
  NTSTATUS v8; // ebx
  unsigned int Options; // ecx
  __int64 LowPart; // r15
  struct _IRP *MasterIrp; // rdi
  int v12; // r15d
  int v13; // r15d
  int v14; // r15d
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // r15d
  __int64 v20; // rdx
  void *v21; // rcx
  int v22; // ebx
  void *v23; // rcx
  unsigned int v24; // r13d
  int GpuPartitionInfo; // eax
  unsigned int v26; // eax
  ULONG Flags; // eax
  int MitigatedRanges; // eax
  void *v29; // rcx
  CInterfaceCallContext *v30; // rcx
  int MitigatedRangeCount; // eax
  void *v32; // rcx
  __int64 v33; // xmm1_8
  NTSTATUS v34; // eax
  unsigned int v35; // eax
  NTSTATUS VirtualizationFlags; // eax
  unsigned int VirtualGpuType; // eax
  __int64 v38; // rcx
  _DWORD *VirtualGpuByLuid; // rax
  NTSTATUS v40; // edx
  CSHORT v41; // cx
  void *v42; // rax
  struct _LIST_ENTRY *v43; // rcx
  DRIVER_CANCEL *v44; // rax
  struct _LIST_ENTRY *v45; // rcx
  void *v46; // rax
  void *v47; // rcx
  struct _LIST_ENTRY *v48; // rax
  ULONG_PTR v49; // rcx
  __int64 v50; // rbx
  bool v51; // zf
  void *v52; // rcx
  void *v53; // rcx
  void *v54; // rcx
  __int64 MdlAddress; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+54h] [rbp-ACh]
  _DWORD v58[4]; // [rsp+58h] [rbp-A8h] BYREF
  struct _IRP *v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v61[5]; // [rsp+78h] [rbp-88h] BYREF
  int Type; // [rsp+A0h] [rbp-60h]
  _DWORD v63[41]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v64[306]; // [rsp+150h] [rbp+50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  DeviceExtension = a1->DeviceExtension;
  v60 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = -1073741637;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v56 = Length;
  v57 = Options;
  if ( *((_BYTE *)DeviceExtension + 1159) && (!*((_BYTE *)DeviceExtension + 1160) || (_DWORD)LowPart != 2345988) )
  {
    v20 = -1073741637LL;
LABEL_131:
    WdLogSingleEntry1(2LL, v20);
    goto LABEL_132;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( (unsigned int)LowPart > 0x22644C )
  {
    v12 = LowPart - 2253908;
    if ( v12 )
    {
      v13 = v12 - 4;
      if ( v13 )
      {
        v14 = v13 - 4;
        if ( !v14 )
        {
LABEL_101:
          v34 = DpiSetPartitionVmbus(a1, a2, a2->AssociatedIrp.MasterIrp, Options);
          goto LABEL_102;
        }
        v15 = v14 - 4;
        if ( v15 )
        {
          v16 = v15 - 996;
          if ( v16 )
          {
            v17 = v16 - 4;
            if ( v17 )
            {
              v18 = v17 - 20;
              if ( v18 )
              {
                if ( v18 != 91048 )
                {
LABEL_11:
                  ++a2->CurrentLocation;
                  a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
                  return IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), a2);
                }
                v56 = 0;
                v34 = DpiIndirectDdiIoControl(
                        (_DWORD)DeviceExtension,
                        Options,
                        (_DWORD)MasterIrp,
                        Length,
                        (__int64)MasterIrp,
                        (__int64)&v56);
              }
              else
              {
                v34 = DpiFlexIovMitigationUpdate(a1, a2, (__int64)MasterIrp, Length);
              }
              goto LABEL_102;
            }
            goto LABEL_101;
          }
          if ( !a2->RequestorMode || (unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
          {
            DpiFdoGetVirtualGpuType(a2);
            VirtualizationFlags = DpiGetVirtualizationFlags(a1, (__int64)MasterIrp, v56, (__int64)&v60);
            v3 = v60;
            v8 = VirtualizationFlags;
            goto LABEL_128;
          }
          goto LABEL_112;
        }
        if ( Options >= 8 && MasterIrp )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v58, a1, a2, 0, 1);
          v8 = (int)v59;
          if ( (int)v59 < 0 )
            goto LABEL_126;
          VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
          HIDWORD(v61[0]) = v57;
          v38 = *((_QWORD *)DeviceExtension + 489);
          v61[1] = (unsigned int)v56;
          v61[2] = MasterIrp;
          v61[3] = MasterIrp;
          VirtualGpuByLuid = (_DWORD *)ADAPTER_RENDER::FindVirtualGpuByLuid(
                                         *(_QWORD *)(v38 + 2928),
                                         VirtualGpuType,
                                         MasterIrp);
          if ( VirtualGpuByLuid )
          {
            LODWORD(v61[0]) = VirtualGpuByLuid[6];
            LODWORD(v59) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD *))(*(_QWORD *)VirtualGpuByLuid + 40LL))(
                             VirtualGpuByLuid,
                             v61);
            v8 = (int)v59;
            if ( (int)v59 >= 0 )
              v3 = LODWORD(v61[1]);
            goto LABEL_126;
          }
          WdLogSingleEntry1(2LL, 1779LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Partition is not found", 1779LL, 0LL, 0LL, 0LL, 0LL);
LABEL_49:
          v8 = -1073741811;
          LODWORD(v59) = -1073741811;
          goto LABEL_126;
        }
      }
      else if ( Options >= 2 && MasterIrp && Length >= 0x80 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v58, a1, a2, 1, 0);
        v40 = (int)v59;
        if ( (int)v59 >= 0 )
        {
          DpiFdoGetVirtualGpuType(a2);
          memset(v63, 0, 0x64uLL);
          Type = (unsigned __int16)MasterIrp->Type;
          LODWORD(v59) = DxgkDdiGetVirtualGpuInfo(
                           *((void **)DeviceExtension + 489),
                           (__int64)&MasterIrp->MdlAddress + 4);
          v40 = (int)v59;
          if ( (int)v59 >= 0 )
          {
            v3 = 128LL;
            v41 = Type;
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v63[9];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v63[11];
            MasterIrp->UserEvent = *(PKEVENT *)&v63[13];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v63[15];
            v42 = *(void **)&v63[17];
            MasterIrp->Type = v41;
            v43 = *(struct _LIST_ENTRY **)&v63[1];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v42;
            v44 = *(DRIVER_CANCEL **)&v63[19];
            MasterIrp->ThreadListEntry.Flink = v43;
            v45 = *(struct _LIST_ENTRY **)&v63[3];
            MasterIrp->CancelRoutine = v44;
            v46 = *(void **)&v63[21];
            MasterIrp->ThreadListEntry.Blink = v45;
            v47 = *(void **)&v63[5];
            MasterIrp->UserBuffer = v46;
            v48 = *(struct _LIST_ENTRY **)&v63[23];
            MasterIrp->IoStatus.Pointer = v47;
            v49 = *(_QWORD *)&v63[7];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = v48;
            MasterIrp->IoStatus.Information = v49;
          }
        }
        v8 = v40;
        goto LABEL_126;
      }
LABEL_31:
      v8 = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
      goto LABEL_128;
    }
    if ( a2->RequestorMode )
    {
      if ( !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
      {
LABEL_112:
        v8 = -1073741790;
        WdLogSingleEntry1(2LL, -1073741790LL);
        goto LABEL_132;
      }
      Options = v57;
      Length = v56;
    }
    if ( Options < 0x78 || !MasterIrp || Length < 0x88 )
    {
      v8 = -1073741789;
      v20 = -1073741789LL;
      goto LABEL_131;
    }
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v58, a1, a2, 0, 0);
    v8 = (int)v59;
    if ( (int)v59 >= 0 )
    {
      DpiFdoGetVirtualGpuType(a2);
      v50 = *(_QWORD *)&MasterIrp->Flags;
      if ( v50 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
      {
        memset(v64, 0, sizeof(v64));
        v51 = BYTE2(MasterIrp->UserBuffer) == 0;
        LODWORD(v64[0]) = (unsigned __int16)MasterIrp->Type;
        v64[2] = (__int64)MasterIrp->AssociatedIrp.MasterIrp;
        v64[3] = (__int64)MasterIrp->ThreadListEntry.Flink;
        v64[4] = (__int64)MasterIrp->ThreadListEntry.Blink;
        v64[5] = (__int64)MasterIrp->IoStatus.Pointer;
        v64[6] = MasterIrp->IoStatus.Information;
        v64[7] = *(_QWORD *)&MasterIrp->RequestorMode;
        v64[8] = (__int64)MasterIrp->UserIosb;
        v64[9] = (__int64)MasterIrp->UserEvent;
        v64[10] = MasterIrp->Overlay.AllocationSize.QuadPart;
        v64[11] = (__int64)MasterIrp->Overlay.AsynchronousParameters.UserApcContext;
        v64[12] = (__int64)MasterIrp->CancelRoutine;
        MdlAddress = (__int64)MasterIrp->MdlAddress;
        v52 = (void *)*((_QWORD *)DeviceExtension + 489);
        v64[1] = v50;
        LODWORD(v59) = DxgkDdiCreateVirtualGpu(v52, !v51, (__int64)v64, MdlAddress);
        v8 = (int)v59;
        if ( (int)v59 >= 0 )
        {
          memset(v63, 0, 0x64uLL);
          v53 = (void *)*((_QWORD *)DeviceExtension + 489);
          Type = v64[0];
          LODWORD(v59) = DxgkDdiGetVirtualGpuInfo(v53, (__int64)(&MasterIrp->Flags + 1));
          v8 = (int)v59;
          if ( (int)v59 < 0 )
          {
            v54 = (void *)*((_QWORD *)DeviceExtension + 489);
            v56 = v64[0];
            DxgkDdiDestroyVirtualGpu(v54);
          }
          else
          {
            v3 = 136LL;
            LOWORD(MasterIrp->MdlAddress) = v64[0];
            MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v63[1];
            MasterIrp->IoStatus.Pointer = *(PVOID *)&v63[3];
            MasterIrp->IoStatus.Information = *(_QWORD *)&v63[5];
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v63[7];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v63[9];
            MasterIrp->UserEvent = *(PKEVENT *)&v63[11];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v63[13];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v63[15];
            MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v63[17];
            MasterIrp->UserBuffer = *(PVOID *)&v63[19];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v63[21];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v63[23];
          }
        }
      }
      else
      {
        v56 = (unsigned __int16)MasterIrp->Type;
        v8 = DxgkDdiDestroyVirtualGpu(*((void **)DeviceExtension + 489));
        LODWORD(v59) = v8;
      }
    }
    goto LABEL_126;
  }
  switch ( (_DWORD)LowPart )
  {
    case 0x22644C:
      if ( a2->RequestorMode )
      {
        if ( !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
          goto LABEL_112;
        Options = v57;
      }
      if ( Options < 2 || !MasterIrp )
        goto LABEL_31;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v58, a1, a2, 1, 0);
      MitigatedRangeCount = (int)v59;
      if ( (int)v59 >= 0 )
      {
        DpiFdoGetVirtualGpuType(a2);
        v56 = (unsigned __int16)MasterIrp->Type;
        MitigatedRangeCount = DxgkDdiSetGpuPartitionCount(*((void **)DeviceExtension + 489));
        LODWORD(v59) = MitigatedRangeCount;
      }
      goto LABEL_71;
    case 0x226044:
      v34 = DpiSriovNotification(a1, a2);
      goto LABEL_102;
    case 0x226048:
      if ( a2->RequestorMode && !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_112;
      v35 = DpiFdoGetVirtualGpuType(a2);
      v34 = DpiSriovEventComplete(a1, v35, MasterIrp, v57);
      goto LABEL_102;
    case 0x22604C:
      v34 = DpiSriovAttach(a1, a2);
      goto LABEL_102;
    case 0x226050:
      if ( a2->RequestorMode && !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_112;
      DpiFdoGetVirtualGpuType(a2);
      v34 = DpiSriovDetach(a1);
LABEL_102:
      v8 = v34;
      goto LABEL_128;
  }
  if ( (_DWORD)LowPart != 2252884 )
  {
    if ( (_DWORD)LowPart != 2252888 )
    {
      if ( (_DWORD)LowPart == 2252892 )
      {
        if ( a2->RequestorMode )
        {
          if ( !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
            goto LABEL_112;
          Options = v57;
          Length = v56;
        }
        if ( Options >= 4 && MasterIrp && Length >= 0x10 )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v61, a1, a2, 1, 0);
          MitigatedRanges = v61[2];
          if ( SLODWORD(v61[2]) >= 0 )
          {
            DpiFdoGetVirtualGpuType(a2);
            v58[0] = (unsigned __int16)MasterIrp->Type;
            v58[1] = LOBYTE(MasterIrp->Size);
            v58[2] = (unsigned int)v56 >> 4;
            v29 = (void *)*((_QWORD *)DeviceExtension + 489);
            v58[3] = 0;
            v59 = MasterIrp;
            MitigatedRanges = DxgkDdiQueryMitigatedRanges(v29);
            LODWORD(v61[2]) = MitigatedRanges;
            if ( MitigatedRanges >= 0 )
              v3 = (unsigned int)v56;
          }
          v8 = MitigatedRanges;
          v30 = (CInterfaceCallContext *)v61;
          goto LABEL_127;
        }
        goto LABEL_31;
      }
      if ( (_DWORD)LowPart != 2253892 )
      {
        if ( (_DWORD)LowPart != 2253896 )
          goto LABEL_11;
        if ( Options >= 2 && MasterIrp && Length >= 0xA8 )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v58, a1, a2, 1, 0);
          v8 = (int)v59;
          if ( (int)v59 >= 0 )
          {
            DpiFdoGetVirtualGpuType(a2);
            memset(v63, 0, sizeof(v63));
            v21 = (void *)*((_QWORD *)DeviceExtension + 489);
            Type = (unsigned __int16)MasterIrp->Type;
            LODWORD(v59) = DxgkDdiGetVirtualGpuProfile(v21);
            v8 = (int)v59;
            if ( (int)v59 >= 0 )
            {
              v3 = 168LL;
              *(_DWORD *)&MasterIrp->Type = Type;
              *(_DWORD *)(&MasterIrp->Size + 1) = v63[0];
              MasterIrp->MdlAddress = *(PMDL *)&v63[1];
              *(_QWORD *)&MasterIrp->Flags = *(_QWORD *)&v63[3];
              MasterIrp->AssociatedIrp.MasterIrp = *(struct _IRP **)&v63[5];
              MasterIrp->ThreadListEntry.Flink = *(struct _LIST_ENTRY **)&v63[7];
              MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v63[9];
              MasterIrp->IoStatus.Pointer = *(PVOID *)&v63[11];
              MasterIrp->IoStatus.Information = *(_QWORD *)&v63[13];
              *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v63[15];
              MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v63[17];
              MasterIrp->UserEvent = *(PKEVENT *)&v63[19];
              MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v63[21];
              MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v63[23];
              MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v63[25];
              MasterIrp->UserBuffer = *(PVOID *)&v63[27];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v63[29];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v63[31];
              MasterIrp->Tail.Overlay.DriverContext[2] = *(PVOID *)&v63[33];
              MasterIrp->Tail.Overlay.DriverContext[3] = *(PVOID *)&v63[35];
              MasterIrp->Tail.Overlay.Thread = *(PETHREAD *)&v63[37];
              MasterIrp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v63[39];
            }
          }
          goto LABEL_126;
        }
        goto LABEL_31;
      }
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v58, a1, a2, 1, 0);
      if ( (int)v59 >= 0 )
      {
        HIDWORD(v61[0]) = 0;
        v61[2] = 0LL;
        if ( !MasterIrp || (v22 = v56, (unsigned int)v56 < 0x18) )
        {
          WdLogSingleEntry1(3LL, LowPart);
          v8 = -1073741789;
LABEL_44:
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v58);
          goto LABEL_132;
        }
        v56 = DpiFdoGetVirtualGpuType(a2);
        v61[1] = &MasterIrp->Flags + 1;
        v23 = (void *)*((_QWORD *)DeviceExtension + 489);
        v24 = (unsigned int)(v22 - 20) >> 1;
        LODWORD(v61[0]) = v24;
        GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(v23);
        LODWORD(v59) = GpuPartitionInfo;
        v8 = GpuPartitionInfo;
        if ( GpuPartitionInfo >= 0 )
        {
          v26 = v61[0];
          if ( g_LimitNumberOfVfs && LODWORD(v61[0]) )
          {
            LODWORD(v61[0]) = 1;
            *(_WORD *)v61[1] = 1;
            v26 = v61[0];
            LOWORD(v61[2]) = 1;
          }
          if ( v26 <= v24 && v26 )
          {
            *(_DWORD *)&MasterIrp->Type = v26;
            WORD2(MasterIrp->MdlAddress) = v61[2];
            LOBYTE(v3) = *((_BYTE *)DeviceExtension + 1152) != 0;
            MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v3;
            DxgkDdiQueryPhysicalFunctionLuid(*((void **)DeviceExtension + 489));
            v3 = (unsigned int)(2 * LODWORD(v61[0]) + 20);
            goto LABEL_126;
          }
          WdLogSingleEntry1(3LL, LowPart);
          v8 = -1073741811;
          goto LABEL_44;
        }
        if ( GpuPartitionInfo == -1073741789 )
        {
          if ( LODWORD(v61[0]) )
          {
            *(_DWORD *)&MasterIrp->Type = v61[0];
            WORD2(MasterIrp->MdlAddress) = v61[2];
            v8 = -2147483643;
            Flags = MasterIrp->Flags;
            LOBYTE(v3) = *((_BYTE *)DeviceExtension + 1152) != 0;
            LODWORD(v59) = -2147483643;
            MasterIrp->Flags = Flags & 0xFFFFFFFE | v3;
            RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)DeviceExtension + 334);
            v3 = 24LL;
            goto LABEL_126;
          }
          WdLogSingleEntry1(3LL, LowPart);
          goto LABEL_49;
        }
      }
LABEL_126:
      v30 = (CInterfaceCallContext *)v58;
LABEL_127:
      CInterfaceCallContext::~CInterfaceCallContext(v30);
LABEL_128:
      if ( v8 == 259 )
        return v8;
      goto LABEL_132;
    }
    if ( a2->RequestorMode )
    {
      if ( !(unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_112;
      Options = v57;
      Length = v56;
    }
    if ( Options < 2 || !MasterIrp || Length < 0x18 )
      goto LABEL_31;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v58, a1, a2, 1, 0);
    MitigatedRangeCount = (int)v59;
    if ( (int)v59 >= 0 )
    {
      DpiFdoGetVirtualGpuType(a2);
      LODWORD(v61[0]) = (unsigned __int16)MasterIrp->Type;
      v32 = (void *)*((_QWORD *)DeviceExtension + 489);
      memset((char *)v61 + 4, 0, 24);
      MitigatedRangeCount = DxgkDdiQueryMitigatedRangeCount(v32);
      LODWORD(v59) = MitigatedRangeCount;
      if ( MitigatedRangeCount >= 0 )
      {
        v3 = 24LL;
        v33 = *(_QWORD *)((char *)&v61[2] + 4);
        *(_OWORD *)&MasterIrp->Type = *(_OWORD *)((char *)v61 + 4);
        *(_QWORD *)&MasterIrp->Flags = v33;
      }
    }
LABEL_71:
    v8 = MitigatedRangeCount;
    goto LABEL_126;
  }
LABEL_132:
  a2->IoStatus.Status = v8;
  a2->IoStatus.Information = v3;
  IofCompleteRequest(a2, 1);
  return v8;
}
