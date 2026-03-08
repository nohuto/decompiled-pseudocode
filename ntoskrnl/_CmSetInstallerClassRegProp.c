/*
 * XREFs of _CmSetInstallerClassRegProp @ 0x140A6059C
 * Callers:
 *     PiCMSetRegistryProperty @ 0x140967BA4 (PiCMSetRegistryProperty.c)
 *     _CmSetInstallerClassMappedPropertyFromRegProp @ 0x140A66F20 (_CmSetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A60700 (_CmSetInstallerClassRegPropWorker.c)
 */

__int64 __fastcall CmSetInstallerClassRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, int, _QWORD *); // r14
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _QWORD SecurityDescriptorLength[12]; // [rsp+40h] [rbp-69h] BYREF

  memset(SecurityDescriptorLength, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  SecurityDescriptorLength[2] = a3;
  SecurityDescriptorLength[3] = __PAIR64__(a5, a4);
  SecurityDescriptorLength[5] = a7;
  SecurityDescriptorLength[4] = a6;
  if ( v11 )
  {
    v12 = v11(a1, a2, 2LL, 10LL, 1, SecurityDescriptorLength);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmSetInstallerClassRegPropWorker(
          a1,
          a2,
          SecurityDescriptorLength[2],
          SecurityDescriptorLength[3],
          SHIDWORD(SecurityDescriptorLength[3]),
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SWORD2(SecurityDescriptorLength[5]));
  v14 = v13;
  if ( !v11 )
    return v14;
  LODWORD(SecurityDescriptorLength[0]) = v13;
  v15 = v11(a1, a2, 2LL, 10LL, 2, SecurityDescriptorLength);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return LODWORD(SecurityDescriptorLength[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
