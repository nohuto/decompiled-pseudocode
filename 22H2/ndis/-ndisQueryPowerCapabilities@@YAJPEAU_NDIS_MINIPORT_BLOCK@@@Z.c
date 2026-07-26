/*
 * XREFs of ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020E08
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     NdisWriteErrorLogEntry @ 0x1C006D1D0 (NdisWriteErrorLogEntry.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisQueryPowerCapabilities(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // ebx
  PIRP Irp; // rsi
  _IO_STACK_LOCATION *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v6; // ecx
  int v7; // edx
  __int128 v8; // xmm3
  __int128 v9; // xmm2
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  PULONG RequiredSize; // [rsp+30h] [rbp-59h]
  _BYTE Data[4]; // [rsp+40h] [rbp-49h] BYREF
  ULONG Type; // [rsp+44h] [rbp-45h] BYREF
  ULONG v17; // [rsp+48h] [rbp-41h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-39h] BYREF
  char v19[4]; // [rsp+68h] [rbp-21h]
  _OWORD v20[4]; // [rsp+70h] [rbp-19h] BYREF

  v2 = 0;
  memset(v20, 0, sizeof(v20));
  v17 = 0;
  Type = 0;
  Data[0] = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xDu,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a1);
  a1->PnPFlags &= ~1u;
  if ( a1->NextDeviceObject )
  {
    if ( IoGetDevicePropertyData(
           a1->PhysicalDeviceObject,
           &DEVPKEY_PciDevice_S0WakeupSupported,
           0,
           0,
           1u,
           Data,
           &v17,
           &Type) >= 0
      && Type == 17 )
    {
      a1->S0WakeupSupported = Data[0] != 0;
    }
    Irp = IoAllocateIrp(a1->NextDeviceObject->StackSize + 1, 0);
    if ( Irp )
    {
      LODWORD(v20[0]) = 65600;
      *((_QWORD *)&v20[0] + 1) = -1LL;
      v4 = Irp->Tail.Overlay.CurrentStackLocation - 1;
      memset(v4, 0, sizeof(_IO_STACK_LOCATION));
      *(_WORD *)&v4->MajorFunction = 2331;
      v4->Parameters.WMI.ProviderId = (unsigned __int64)v20;
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisCompletionRoutine;
      CurrentStackLocation[-1].Context = &Event;
      CurrentStackLocation[-1].Control = -32;
      v2 = IofCallDriver(a1->NextDeviceObject, Irp);
      if ( v2 == 259 )
        ndisWaitForKernelObject(&Event);
      if ( *(int *)v19 < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(RequiredSize) = *(_DWORD *)v19;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0xFu,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            (char)a1,
            RequiredSize);
        }
        goto LABEL_19;
      }
      if ( (a1->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
      {
        v6 = 4;
        DWORD1(v20[0]) |= 0x3C00u;
        LODWORD(v20[3]) = 4;
        *(__m128i *)((char *)&v20[1] + 8) = _mm_load_si128((const __m128i *)&_xmm);
        v7 = 6;
        *((_QWORD *)&v20[2] + 1) = (unsigned int)_mm_cvtsi128_si32(*(__m128i *)((char *)&v20[1] + 8)) | 0x600000000LL;
      }
      else
      {
        v6 = v20[3];
        v7 = HIDWORD(v20[2]);
      }
      v8 = v20[0];
      v9 = v20[1];
      v10 = v20[2];
      v11 = v20[3];
      *(_OWORD *)&a1->DeviceCaps.Size = v20[0];
      *(_OWORD *)&a1->OriginalDeviceCaps.Size = v8;
      *(_OWORD *)a1->DeviceCaps.DeviceState = v9;
      *(_OWORD *)a1->OriginalDeviceCaps.DeviceState = v9;
      *(_OWORD *)&a1->DeviceCaps.DeviceState[4] = v10;
      *(_OWORD *)&a1->OriginalDeviceCaps.DeviceState[4] = v10;
      *(_OWORD *)&a1->DeviceCaps.DeviceWake = v11;
      *(_OWORD *)&a1->OriginalDeviceCaps.DeviceWake = v11;
      if ( a1->BusType == Isa )
      {
        if ( !v6 || !v7 )
          goto LABEL_19;
      }
      else
      {
        v12 = 2LL;
        while ( !*((_DWORD *)&v20[1] + v12) )
        {
          if ( ++v12 >= 7 )
            goto LABEL_19;
        }
      }
      a1->PnPFlags |= 1u;
LABEL_19:
      IoFreeIrp(Irp);
      goto LABEL_20;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0xEu,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        a1);
    NdisWriteErrorLogEntry(a1, 0xC0001389, 0);
    v2 = -1073741670;
  }
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(RequiredSize) = v2;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x10u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)a1,
      RequiredSize);
  }
  return v2;
}
