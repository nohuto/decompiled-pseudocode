/*
 * XREFs of PipGetRegistrySecurityWithFallback @ 0x14074D0CC
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074D328 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14071D120 (RtlValidRelativeSecurityDescriptor.c)
 *     _CmGetInstallerClassRegProp @ 0x14074DF34 (_CmGetInstallerClassRegProp.c)
 *     SeCaptureSecurityDescriptor @ 0x1407C8A50 (SeCaptureSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetRegistrySecurityWithFallback(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  bool v8; // di
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  int v11; // esi
  int InstallerClassRegProp; // eax
  int v13; // r9d
  int v15; // r9d
  int v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  ULONG SecurityDescriptorLength; // [rsp+70h] [rbp+20h] BYREF

  v16 = 0;
  v17 = 0LL;
  SecurityDescriptorLength = 128;
  v8 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, 128LL, 1852141648LL);
  if ( !Pool2 )
    return 0LL;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a2,
                    a3,
                    24,
                    (__int64)&v16,
                    (__int64)Pool2,
                    (__int64)&SecurityDescriptorLength,
                    0);
  if ( DeviceRegProp == -1073741789 )
  {
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(256LL, SecurityDescriptorLength, 1852141648LL);
    if ( !Pool2 )
      return 0LL;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      a2,
                      a3,
                      24,
                      (__int64)&v16,
                      (__int64)Pool2,
                      (__int64)&SecurityDescriptorLength,
                      0);
  }
  if ( DeviceRegProp >= 0
    && v16 == 3
    && RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0)
    && (LOBYTE(v15) = 1, (int)SeCaptureSecurityDescriptor((_DWORD)Pool2, 0, 1, v15, (__int64)&v17) >= 0) )
  {
    v8 = 1;
  }
  else
  {
    v11 = a5;
    if ( a5 )
    {
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                PiPnpRtlCtx,
                                a4,
                                a5,
                                24,
                                (__int64)&v16,
                                (__int64)Pool2,
                                (__int64)&SecurityDescriptorLength);
      if ( InstallerClassRegProp == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, SecurityDescriptorLength, 1852141648LL);
        if ( !Pool2 )
          return 0LL;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  PiPnpRtlCtx,
                                  a4,
                                  v11,
                                  24,
                                  (__int64)&v16,
                                  (__int64)Pool2,
                                  (__int64)&SecurityDescriptorLength);
      }
      if ( InstallerClassRegProp >= 0 && v16 == 3 )
      {
        if ( RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0) )
        {
          LOBYTE(v13) = 1;
          v8 = (int)SeCaptureSecurityDescriptor((_DWORD)Pool2, 0, 1, v13, (__int64)&v17) >= 0;
        }
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( v8 )
    return v17;
  return 0LL;
}
