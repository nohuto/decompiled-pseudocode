/*
 * XREFs of HalpQueryIommuReservedRegionInformation @ 0x1408220EC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpIommuGetDeviceId @ 0x14038CC4C (HalpIommuGetDeviceId.c)
 *     HalpIommuFreeDeviceId @ 0x14038CD68 (HalpIommuFreeDeviceId.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpIommuLocateFromDevice @ 0x14082218C (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall HalpQueryIommuReservedRegionInformation(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  int DeviceId; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 < 0x10 )
    return 3221225485LL;
  v3 = *(_QWORD *)a1;
  v10 = 0LL;
  v11 = 0LL;
  DeviceId = HalpIommuGetDeviceId(v3, &v10);
  if ( DeviceId >= 0 )
  {
    DeviceId = HalpIommuLocateFromDevice(v10, &v11);
    if ( DeviceId >= 0 )
    {
      if ( v11 )
      {
        v8 = *(__int64 (__fastcall **)(__int64))(v11 + 312);
        if ( v8 )
          *(_BYTE *)(a1 + 8) = v8(v10);
        else
          DeviceId = -1073741595;
      }
      else
      {
        DeviceId = -1073741810;
      }
    }
  }
  if ( v10 )
    HalpIommuFreeDeviceId(v10, v4, v6, v7);
  return (unsigned int)DeviceId;
}
