/*
 * XREFs of VfEvtDevicePrepareHardware @ 0x1C00C4960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002E6B8 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0043D94 (-PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C0044000 (McTemplateK0pp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x1C004406C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0044098 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C00440F8 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4514 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDevicePrepareHardware(
        WDFDEVICE__ *Device,
        WDFCMRESLIST__ *ResourcesRaw,
        WDFCMRESLIST__ *ResourcesTranslated)
{
  unsigned int v4; // esi
  char *TypedContext; // r14
  __int64 (__fastcall *v8)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rbp
  FxObject *ObjectFromHandle; // rax
  unsigned __int8 CurrentIrql; // bl
  wchar_t critRegion; // [rsp+30h] [rbp-58h] BYREF
  _GUID activityId; // [rsp+38h] [rbp-50h] BYREF

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v8 = (__int64 (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))*((_QWORD *)TypedContext + 6);
  if ( v8 )
  {
    activityId = 0LL;
    if ( PerfEvtDevicePrepareHardwareStart(Device, &activityId) )
    {
      v4 = v8(Device, ResourcesRaw, ResourcesTranslated);
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink & 1) != 0 )
      {
        critRegion = 0;
        ObjectFromHandle = FxObject::_GetObjectFromHandle((unsigned __int64)Device, &critRegion);
        McTemplateK0pp_EtwWriteTransfer(
          (_MCGEN_TRACE_CONTEXT *)ObjectFromHandle->m_Globals,
          &FX_POWER_HW_PREPARE_STOP,
          &activityId,
          ObjectFromHandle->m_Globals->Driver->m_DriverDeviceAdd.Method,
          Device);
      }
    }
    else
    {
      LOBYTE(critRegion) = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry((unsigned __int8 *)&critRegion);
      v4 = v8(Device, ResourcesRaw, ResourcesTranslated);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion, (unsigned __int64)v8);
    }
  }
  return v4;
}
