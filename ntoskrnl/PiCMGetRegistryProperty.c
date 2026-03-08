/*
 * XREFs of PiCMGetRegistryProperty @ 0x1406C74A4
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406C72B0 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406C764C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1406C76A0 (PiCMConvertRegistryProperty.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PiCMReturnBufferResultData @ 0x1406D0ED4 (PiCMReturnBufferResultData.c)
 *     _CmGetInstallerClassRegProp @ 0x14074DF34 (_CmGetInstallerClassRegProp.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetRegistryProperty(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  void *Pool2; // rdi
  int v10; // ebx
  int DeviceRegProp; // eax
  int v12; // eax
  unsigned int v14; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v15[3]; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v16; // [rsp+68h] [rbp-9h] BYREF
  __int128 v17; // [rsp+78h] [rbp+7h]
  __int128 v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+27h]

  v6 = a6;
  v14 = 0;
  v15[0] = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  Pool2 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v10 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, (__int64)&v16);
  if ( v10 < 0 )
    goto LABEL_20;
  if ( !(_QWORD)v17 || DWORD1(v16) || *((_QWORD *)&v18 + 1) || (_DWORD)v19 || (_DWORD)v18 || !a3 || a4 < 0x14 )
    goto LABEL_24;
  if ( a4 != 20 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, a4 - 20, 879783504LL);
    if ( !Pool2 )
      v10 = -1073741670;
    if ( v10 < 0 )
      goto LABEL_17;
  }
  v10 = PiCMConvertRegistryProperty(HIDWORD(v17), v15);
  if ( v10 < 0 )
    goto LABEL_17;
  LODWORD(a6) = a4 - 20;
  if ( DWORD2(v16) == 1 )
  {
    DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v17, 0, v15[0], (__int64)&v14, (__int64)Pool2, (__int64)&a6, 0);
    goto LABEL_16;
  }
  if ( DWORD2(v16) != 2 )
  {
LABEL_24:
    v10 = -1073741811;
    goto LABEL_17;
  }
  DeviceRegProp = CmGetInstallerClassRegProp(PiPnpRtlCtx, v17, 0, v15[0], (__int64)&v14, (__int64)Pool2, (__int64)&a6);
LABEL_16:
  v10 = DeviceRegProp;
  if ( DeviceRegProp < 0 )
  {
LABEL_17:
    v12 = PiCMReturnBufferResultData((unsigned int)v10, (unsigned int)a6, v14, 0LL, 0, HIDWORD(v19), a3, a4, v6);
    goto LABEL_18;
  }
  v12 = PiCMReturnBufferResultData(
          (unsigned int)DeviceRegProp,
          (unsigned int)a6,
          v14,
          Pool2,
          (_DWORD)a6,
          HIDWORD(v19),
          a3,
          a4,
          v6);
LABEL_18:
  v10 = v12;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_20:
  PiCMReleaseRegistryPropertyInputData(&v16);
  return (unsigned int)v10;
}
