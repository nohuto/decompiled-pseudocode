/*
 * XREFs of ACPIFanStartDevice @ 0x1C0085270
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001D3A8 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIFanLoop @ 0x1C002759C (ACPIFanLoop.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C002EF0C (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C00396E0 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003FAD8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x1C0084960 (ACPIFanPrepareImpactZoneSupport.c)
 */

__int64 __fastcall ACPIFanStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  unsigned __int8 MinorFunction; // r14
  __int64 DeviceExtension; // rax
  __int64 v6; // rbx
  struct _KEVENT *v7; // rdi
  _QWORD *v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  const char *v11; // r8
  const char *v12; // rdx
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  char *IrpText; // rax
  const char *v16; // r8
  const char *v17; // r10

  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v6 = DeviceExtension;
  v7 = (struct _KEVENT *)(DeviceExtension + 344);
  if ( !*(_DWORD *)(DeviceExtension + 192) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
    KeInitializeEvent(v7, NotificationEvent, 1u);
  }
  v8 = *(_QWORD **)(v6 + 760);
  *(_DWORD *)(v6 + 316) = 0;
  *(_QWORD *)(v6 + 224) = v6 + 216;
  *(_QWORD *)(v6 + 216) = v6 + 216;
  *(_QWORD *)(v6 + 240) = v6 + 232;
  *(_QWORD *)(v6 + 232) = v6 + 232;
  *(_DWORD *)(v6 + 192) = 0x10000000;
  *(_DWORD *)(v6 + 312) = 1;
  *(_QWORD *)(v6 + 248) = AMLIGetNamedChild(v8, 1414743647);
  KeClearEvent(v7);
  v9 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_FAN);
  if ( v9 >= 0 )
  {
    v9 = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVINTERFACE_THERMAL_COOLING);
    if ( v9 >= 0 )
    {
      ACPIRegisterForDeviceNotifications(*(_QWORD *)(v6 + 768), (__int64)ACPIFanEvent, *(_QWORD *)(v6 + 768));
      *(_DWORD *)(v6 + 368) = 2;
      ACPIDeviceInternalDeviceRequest(
        (_QWORD *)v6,
        4LL,
        (void (__fastcall *)(__int64, __int64, __int64))ACPIFanPowerCallback,
        0LL,
        0);
      ACPIThermalAcquireCoolingInterfaces(v6);
      ACPIFanPrepareImpactZoneSupport(v6);
      v9 = 0;
      Irp->IoStatus.Status = 0;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v6 + 8), MinorFunction);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0xCu,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          (char)Irp,
          (__int64)IrpText,
          0,
          v6,
          v16,
          v17);
      }
      ACPIFanLoop(v6, 0x10000000, 0x20000000);
    }
    else
    {
      v14 = *(_QWORD *)(v6 + 8);
      v11 = byte_1C00622D0;
      v12 = byte_1C00622D0;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(v6 + 608);
        if ( (v14 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(v6 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 11;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v10 = *(_QWORD *)(v6 + 8);
    v11 = byte_1C00622D0;
    v12 = byte_1C00622D0;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v6 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v6 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 10;
LABEL_9:
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        v13,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        v9,
        v6,
        v11,
        v12);
    }
  }
  return (unsigned int)v9;
}
