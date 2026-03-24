/*
 * XREFs of ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C023AE4C
 * Callers:
 *     ?VmBusGetInternalAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D95C0 (-VmBusGetInternalAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242640 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C0007C40 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000C2B4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DpiGetDevicePropertyDataString @ 0x1C018AD24 (DpiGetDevicePropertyDataString.c)
 */

void __fastcall DXGADAPTER::FillInternalAdapterInfo(
        DXGADAPTER *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 87);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 468);
  *((_DWORD *)a2 + 3) ^= (*((_DWORD *)a2 + 3) ^ (**((_DWORD **)this + 325) >> 13)) & 8;
  *((_DWORD *)a2 + 3) ^= ((unsigned __int8)*((_DWORD *)a2 + 3) ^ (unsigned __int8)(**((_DWORD **)this + 325) >> 11)) & 0x10;
  *((_QWORD *)a2 + 2) = *(_QWORD *)((char *)this + 316);
  DXGADAPTER::GetDeviceDescriptor(this, 0xA0u, (unsigned __int16 *)a2 + 12);
  v4 = *(_QWORD *)(v3 + 216);
  P = 0LL;
  if ( (int)DpiGetDevicePropertyDataString(
              *(PDEVICE_OBJECT *)(*(_QWORD *)(v4 + 64) + 152LL),
              (DEVPROPKEY *)&DEVPKEY_Device_InstanceId,
              v5,
              PagedPool,
              &P,
              &v6) >= 0 )
  {
    RtlStringCbCopyW((unsigned __int16 *)a2 + 92, 0x208uLL, (size_t *)P);
    ExFreePoolWithTag(P, 0);
  }
}
