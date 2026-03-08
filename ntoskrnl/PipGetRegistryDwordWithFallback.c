/*
 * XREFs of PipGetRegistryDwordWithFallback @ 0x14074D604
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074D328 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     _CmGetInstallerClassRegProp @ 0x14074DF34 (_CmGetInstallerClassRegProp.c)
 */

char __fastcall PipGetRegistryDwordWithFallback(int a1, __int64 a2, __int64 a3, int a4, __int64 a5, _DWORD *a6)
{
  char v6; // bl
  int v10; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+44h] [rbp-Ch] BYREF
  int v12; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0;
  v10 = 4;
  v11 = 0;
  v12 = 0;
  if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, a2, a3, a1, (__int64)&v11, (__int64)&v12, (__int64)&v10, 0) >= 0
    && v11 == 4
    && v10 == 4
    || a5
    && (v10 = 4,
        (int)CmGetInstallerClassRegProp(PiPnpRtlCtx, a4, a5, a1, (__int64)&v11, (__int64)&v12, (__int64)&v10) >= 0)
    && v11 == 4
    && v10 == 4 )
  {
    v6 = 1;
    *a6 = v12;
  }
  return v6;
}
