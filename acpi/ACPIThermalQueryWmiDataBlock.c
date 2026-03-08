/*
 * XREFs of ACPIThermalQueryWmiDataBlock @ 0x1C0095A70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 */

NTSTATUS __fastcall ACPIThermalQueryWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 DeviceExtension; // rax
  __int64 v12; // r8
  ULONG v13; // r9d
  int v14; // eax
  __int64 v15; // xmm0_8
  NTSTATUS v16; // r8d

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  if ( a3 )
  {
    v16 = -1073741163;
    v13 = 0;
  }
  else
  {
    v12 = *(_QWORD *)(DeviceExtension + 200);
    v13 = 76;
    if ( a7 < 0x4C )
    {
      v16 = -1073741789;
    }
    else
    {
      *a6 = 76;
      *(_DWORD *)a8 = *(_DWORD *)v12;
      *(_DWORD *)(a8 + 4) = *(_DWORD *)(v12 + 4);
      v14 = *(_DWORD *)(v12 + 8);
      *(_DWORD *)(a8 + 12) = 0;
      *(_DWORD *)(a8 + 8) = v14;
      *(_DWORD *)(a8 + 16) = *(_DWORD *)(v12 + 12) / 0x64u;
      *(_DWORD *)(a8 + 20) = *(_DWORD *)(v12 + 16);
      *(_DWORD *)(a8 + 24) = *(_DWORD *)(v12 + 20);
      *(_DWORD *)(a8 + 28) = *(_DWORD *)(v12 + 28);
      *(_DWORD *)(a8 + 32) = *(unsigned __int8 *)(v12 + 32);
      *(_OWORD *)(a8 + 36) = *(_OWORD *)(v12 + 36);
      *(_OWORD *)(a8 + 52) = *(_OWORD *)(v12 + 52);
      v15 = *(_QWORD *)(v12 + 68);
      v16 = 0;
      *(_QWORD *)(a8 + 68) = v15;
    }
  }
  return WmiCompleteRequest(DeviceObject, Irp, v16, v13, 0);
}
