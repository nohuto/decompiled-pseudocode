/*
 * XREFs of HalpIommuDeviceGetDomainTypes @ 0x14050BA08
 * Callers:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x14050BB78 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 *     IommuDeviceQueryDomainTypes @ 0x1405231F0 (IommuDeviceQueryDomainTypes.c)
 *     IommuDomainAttachDeviceEx @ 0x1405234A0 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140523F30 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuDomainAttachPasidDevice @ 0x140932680 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     IommupHvIsDmarStageCompatible @ 0x140522B60 (IommupHvIsDmarStageCompatible.c)
 *     IoGetDevicePropertyData @ 0x1406F7380 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall HalpIommuDeviceGetDomainTypes(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  unsigned int v4; // ebx
  NTSTATUS DevicePropertyData; // eax
  char v6; // si
  int v7; // edx
  ULONG v9; // [rsp+60h] [rbp+8h] BYREF
  ULONG v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v9 = 0;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v4 = 0;
  v10 = 0;
  v11 = 2;
  if ( v3 )
  {
    DevicePropertyData = IoGetDevicePropertyData(v3, &DEVPKEY_Device_IommuDomainPolicy, 0, 0, 4u, &v11, &v10, &v9);
    if ( DevicePropertyData < 0 )
    {
      if ( DevicePropertyData == -1073741772 )
        v4 = 2;
    }
    else if ( v9 == 7 && v10 == 4 )
    {
      if ( v11 )
      {
        if ( v11 != 1 )
          return v4;
      }
      else
      {
        v4 = 2;
      }
    }
  }
  v6 = *(_BYTE *)(a1 + 266);
  if ( HalpHvIommu )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 266);
    if ( !(unsigned __int8)IommupHvIsDmarStageCompatible(*(_QWORD *)a1, a2) )
      return v4;
  }
  else
  {
    v7 = v6 != 0 ? 128 : 256;
    if ( (v7 & *(_DWORD *)(*(_QWORD *)(a1 + 32) + 488LL)) != v7 )
      return v4;
  }
  if ( v6 )
    v4 |= 8u;
  else
    v4 |= 1u;
  return v4;
}
