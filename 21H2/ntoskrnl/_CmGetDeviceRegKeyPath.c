/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x140636EFC
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x140607AEC (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140636AC0 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _CmGetDeviceSoftwareKeyPath @ 0x140605134 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x140610D00 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x140619064 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmValidateDeviceName @ 0x140637080 (_CmValidateDeviceName.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x140637A50 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x140771964 (_CmGetDeviceControlKeyPath.c)
 */

int __fastcall CmGetDeviceRegKeyPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t a7,
        _DWORD *a8)
{
  int v9; // ebx
  int result; // eax
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  v9 = a3;
  if ( !(_DWORD)a3 || (a3 & 0xFFFFFCE8) != 0 )
    return -1073741811;
  result = CmValidateDeviceName(a1, a2, a3);
  if ( result < 0 )
    return result;
  if ( (unsigned __int8)v9 != 16 )
  {
    switch ( (unsigned __int8)v9 )
    {
      case 0x12u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceSoftwareKeyPath(a1, a2, v9, a4, a5, pszDest, cchDest, a8);
      case 0x11u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceHardwareKeyPath(v13, a2, v9, a4, v15, pszDest, cchDest, a8);
      case 0x13u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceControlKeyPath(v13, a2, v9, v14, v15, pszDest, cchDest, (__int64)a8);
      case 0x14u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceLogConfKeyPath(v13, a2, v9, v14, v15, pszDest, cchDest, a8);
    }
    return -1073741811;
  }
  LODWORD(cchDest) = a7;
  return CmGetDeviceInstanceKeyPath(v13, a2, v9, a4, v15, pszDest, cchDest, (__int64)a8);
}
