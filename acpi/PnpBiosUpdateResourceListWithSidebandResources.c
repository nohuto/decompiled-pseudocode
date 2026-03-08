/*
 * XREFs of PnpBiosUpdateResourceListWithSidebandResources @ 0x1C008FBC8
 * Callers:
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C0085A90 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008ED68 (PnpBiosGetDeviceResourceList.c)
 *     PnpiAddSidebandResources @ 0x1C008FF78 (PnpiAddSidebandResources.c)
 */

__int64 __fastcall PnpBiosUpdateResourceListWithSidebandResources(ULONG_PTR a1, int a2, _QWORD *a3, _QWORD *a4)
{
  void *v7; // rdi
  void *v8; // rsi
  int DeviceResourceList; // ebx
  int v10; // edx
  __int64 Pool2; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // [rsp+28h] [rbp-18h]
  unsigned int v16; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+40h] BYREF

  *a3 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1, &P);
  if ( DeviceResourceList >= 0 )
  {
    if ( !P )
      return (unsigned int)-1073741772;
    v16 = 0;
    v18 = 0;
    DeviceResourceList = PnpiAddSidebandResources(a2, (_DWORD)P, 0, (unsigned int)&v18, 0LL, (__int64)&v16);
    if ( DeviceResourceList == -1073741789 )
    {
      Pool2 = ExAllocatePool2(256LL, v18, 1383097153LL);
      v12 = v16;
      v8 = (void *)Pool2;
      v13 = ExAllocatePool2(256LL, v16, 1383097153LL);
      v7 = (void *)v13;
      if ( v8 && v13 )
      {
        v16 = v12;
        DeviceResourceList = PnpiAddSidebandResources(a2, (_DWORD)P, (_DWORD)v8, (unsigned int)&v18, v13, (__int64)&v16);
        if ( DeviceResourceList >= 0 )
        {
          *a3 = v8;
          v8 = 0LL;
          if ( a4 )
          {
            *a4 = v7;
            v7 = 0LL;
          }
        }
      }
      else
      {
        DeviceResourceList = -1073741670;
      }
    }
    else if ( DeviceResourceList != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = DeviceResourceList;
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          13,
          64,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v15);
      }
      if ( DeviceResourceList >= 0 )
        DeviceResourceList = -1073741823;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)DeviceResourceList;
}
