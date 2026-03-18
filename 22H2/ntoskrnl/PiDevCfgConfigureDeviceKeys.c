/*
 * XREFs of PiDevCfgConfigureDeviceKeys @ 0x14087CF74
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x1407D94D0 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x14087C388 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14087C9C8 (PiDevCfgConfigureDeviceLocation.c)
 *     PpDevCfgProcessDeviceClass @ 0x1409629AC (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403C655C (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x140562368 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgConfigureDeviceFilters @ 0x14087D10C (PiDevCfgConfigureDeviceFilters.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x14087D1C4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087D270 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgInitResolveContext @ 0x14087D384 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14087D4F4 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x14087D72C (PiDevCfgFreeResolveContext.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v9; // r12d
  int inited; // edi
  unsigned int *v12; // rcx
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  __int128 v17; // [rsp+58h] [rbp-39h] BYREF
  _OWORD v18[2]; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  v15 = 0LL;
  v9 = a1;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitResolveContext(a1, a3, v18);
  if ( inited >= 0 )
  {
    inited = PiDevCfgEnumDeviceKeys(
               v9,
               a2,
               (_DWORD)a3,
               a4,
               1,
               (__int64)&PiDevCfgConfigureDeviceKeyCallback,
               (__int64)v18);
    if ( inited >= 0 )
    {
      if ( (a4 & 8) == 0 || (inited = PiDevCfgConfigureDeviceInterfaces(*(_QWORD *)(a2 + 8), a3, v18), inited >= 0) )
      {
        if ( (a4 & 0x10) == 0 || (inited = PiDevCfgConfigureSoftwareDevices(*(_QWORD *)(a2 + 16), a3), inited >= 0) )
        {
          if ( (a4 & 0x20) == 0 || (inited = PiDevCfgConfigureDeviceFilters(*(_QWORD *)(a2 + 16), a3), inited >= 0) )
          {
            memset(&ObjectAttributes.Attributes + 1, 0, 20);
            *((_QWORD *)&v17 + 1) = L"Status";
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
            LODWORD(v17) = 917516;
            ObjectAttributes.RootDirectory = a3;
            ObjectAttributes.Attributes = 576;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              if ( a6 )
              {
                if ( (int)PiDevCfgQueryResolveValue((__int64)v18, KeyHandle, (__int64)L"Reboot", &v15) >= 0 )
                {
                  if ( PnpValidateRegistryDword(v15) && *(unsigned int *)((char *)v12 + v12[2]) )
                    *a6 |= 0x40u;
                  ExFreePoolWithTag(v12, 0);
                }
                if ( (int)PiDevCfgQueryResolveValue((__int64)v18, KeyHandle, (__int64)L"ClassConfigured", &v15) >= 0 )
                {
                  if ( PnpValidateRegistryDword(v15) && *(unsigned int *)((char *)v13 + v13[2]) )
                    *a6 |= 2u;
                  ExFreePoolWithTag(v13, 0);
                }
              }
              if ( a5 && (int)PiDevCfgQueryResolveValue((__int64)v18, KeyHandle, (__int64)L"ConfigFlags", &v15) >= 0 )
              {
                if ( PnpValidateRegistryDword(v15) )
                  *a5 |= *(unsigned int *)((char *)v14 + v14[2]);
                ExFreePoolWithTag(v14, 0);
              }
            }
          }
        }
      }
    }
  }
  PiDevCfgFreeResolveContext(v18);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
