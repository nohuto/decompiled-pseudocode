/*
 * XREFs of ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C0371108
 * Callers:
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AD30 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003F8DC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C0045928 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     DpiGetDevicePropertyDataString @ 0x1C02164D8 (DpiGetDevicePropertyDataString.c)
 */

void __fastcall DXGADAPTER::FillInternalAdapterInfo(
        DXGADAPTER *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  int v4; // r8d
  int v5; // r8d
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 109);
  v4 = 65540;
  if ( *((_DWORD *)this + 524) < 0x10004u )
    v4 = *((_DWORD *)this + 524);
  *((_DWORD *)a2 + 2) = v4;
  v5 = *((_DWORD *)a2 + 3) ^ (*((_DWORD *)a2 + 3) ^ (**((_DWORD **)this + 353) >> 14)) & 8;
  *((_DWORD *)a2 + 3) = v5;
  v6 = v5 & 0xFFFFFFEF | ((**((_DWORD **)this + 353) & 0x18000) != 0 ? 0x10 : 0);
  *((_DWORD *)a2 + 3) = v6;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(**((_DWORD **)this + 353) >> 8)) & 0x180;
  *((_DWORD *)a2 + 3) = v7;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(**((_DWORD **)this + 353) >> 8)) & 0xC00;
  *((_DWORD *)a2 + 3) = v8;
  *((_DWORD *)a2 + 3) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(**((_DWORD **)this + 353) >> 11)) & 0x200;
  *((_QWORD *)a2 + 2) = *(_QWORD *)((char *)this + 404);
  DXGADAPTER::GetDeviceDescriptor(this, 0xA0u, (unsigned __int16 *)a2 + 12);
  v10 = *(_QWORD *)(v9 + 216);
  P = 0LL;
  if ( (int)DpiGetDevicePropertyDataString(
              *(PDEVICE_OBJECT *)(*(_QWORD *)(v10 + 64) + 152LL),
              (DEVPROPKEY *)&DEVPKEY_Device_InstanceId,
              v11,
              256LL,
              &P,
              &v12) >= 0 )
  {
    RtlStringCbCopyW((unsigned __int16 *)a2 + 92, 0x208uLL, (size_t *)P);
    ExFreePoolWithTag(P, 0);
  }
}
