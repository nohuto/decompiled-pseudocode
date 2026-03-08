/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x1406D3C6C
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x1406D53EC (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140747694 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A5F264 (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406C8948 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1406D1F5C (_CmGetDeviceInstanceKeyPath.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x140781DCC (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1407867B0 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x14084A690 (_CmGetDeviceControlKeyPath.c)
 */

NTSTATUS __fastcall CmGetDeviceRegKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t a7,
        _DWORD *a8)
{
  NTSTATUS result; // eax
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return -1073741811;
  result = CmValidateDeviceName(a1, a2);
  if ( result < 0 )
    return result;
  if ( (unsigned __int8)a3 != 16 )
  {
    switch ( (unsigned __int8)a3 )
    {
      case 0x12u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceSoftwareKeyPath(a1, a2, a3, a4, a5, pszDest, cchDest, a8);
      case 0x11u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceHardwareKeyPath(v13, a2, a3, a4, v15, pszDest, cchDest, (__int64)a8);
      case 0x13u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceControlKeyPath(v13, a2, a3, v14, v15, pszDest, cchDest, (__int64)a8);
      case 0x14u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceLogConfKeyPath(v13, a2, a3, v14, v15, pszDest, cchDest, (__int64)a8);
    }
    return -1073741811;
  }
  LODWORD(cchDest) = a7;
  return CmGetDeviceInstanceKeyPath(v13, a2, a3, a4, v15, pszDest, cchDest, a8);
}
