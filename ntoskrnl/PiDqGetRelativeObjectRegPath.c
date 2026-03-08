/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x140747694
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140747298 (PiDqOpenUserObjectRegKey.c)
 *     PiDqDeleteUserObject @ 0x1409592CC (PiDqDeleteUserObject.c)
 * Callees:
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406C11CC (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1406C5348 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406D1834 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x1406D3C6C (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A63A70 (_CmGetDevicePanelRegKeyPath.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(const WCHAR *a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  int DeviceRegKeyPath; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int16 v17; // r8
  int v18; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  pszDest = (wchar_t *)ExAllocatePool2(256LL, 2048LL, 1483763280LL);
  *a3 = pszDest;
  if ( !pszDest )
  {
    v11 = -1073741670;
    goto LABEL_12;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, 16, 0, 0, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v17 = 32;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, (__int64)a1, 48, 0, v18, pszDest, cchDest, 0LL);
LABEL_4:
    v11 = DeviceRegKeyPath;
    if ( DeviceRegKeyPath >= 0 )
      return v11;
    goto LABEL_12;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = 64;
LABEL_19:
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v17, 0, v18, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceContainerRegKeyPath(v7, (__int64)a1, 80LL, v8, v18, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  if ( v16 == 1 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDevicePanelRegKeyPath(v7, (int)a1, 96, v8, v18, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v11 = -1073741811;
LABEL_12:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v11;
}
