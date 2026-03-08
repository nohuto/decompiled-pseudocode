/*
 * XREFs of PpForEachDeviceInstanceDriver @ 0x140681190
 * Callers:
 *     PiDeviceRegistration @ 0x140680FE4 (PiDeviceRegistration.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PiForEachDriverQueryRoutine @ 0x14068149C (PiForEachDriverQueryRoutine.c)
 *     _CmOpenInstallerClassRegKey @ 0x1406C4ED8 (_CmOpenInstallerClassRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PnpUnicodeStringToWstr @ 0x1406D07D4 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D08F4 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _CmGetInstallerClassRegProp @ 0x14074DF34 (_CmGetInstallerClassRegProp.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpForEachDeviceInstanceDriver(__int64 a1, __int64 a2, __int64 a3)
{
  void *Pool2; // rdi
  __int64 result; // rax
  __int64 v7; // r14
  int DeviceRegProp; // ebx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r15d
  __int64 **v12; // rsi
  char v13; // cl
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  int v18; // r9d
  int v19; // r8d
  int InstallerClassRegProp; // eax
  unsigned int v21; // [rsp+60h] [rbp-79h] BYREF
  int v22; // [rsp+64h] [rbp-75h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-71h] BYREF
  int v24; // [rsp+6Ch] [rbp-6Dh] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-69h] BYREF
  HANDLE v26; // [rsp+78h] [rbp-61h] BYREF
  __int64 v27; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v29[80]; // [rsp+A0h] [rbp-39h] BYREF

  Handle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 0;
  Pool2 = 0LL;
  v23 = 0;
  v21 = 0;
  v24 = 0;
  result = PnpUnicodeStringToWstr(&v27, 0LL, a1);
  if ( (int)result >= 0 )
  {
    v7 = v27;
    DeviceRegProp = CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 0, (__int64)&v26, 0LL);
    if ( DeviceRegProp >= 0 )
    {
      v22 = 78;
      DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v7, (_DWORD)v26, 9, (__int64)&v23, (__int64)v29, (__int64)&v22, 0);
      if ( DeviceRegProp >= 0 && v23 == 1 && v22 )
        DeviceRegProp = CmOpenInstallerClassRegKey(
                          PiPnpRtlCtx,
                          (unsigned int)v29,
                          v9,
                          v10,
                          131097,
                          0,
                          (__int64)&Handle,
                          0LL);
      v28[2] = a3;
      v28[0] = a1;
      v28[1] = PiProcessDriverInstance;
      v22 = 170;
      Pool2 = (void *)ExAllocatePool2(256LL, 170LL, 538996816LL);
      if ( Pool2 )
      {
        v11 = 0;
        v12 = &off_140006C08;
        while ( 1 )
        {
          v13 = *((_BYTE *)v12 + 8);
          if ( v13 && !Handle )
            goto LABEL_16;
          v14 = (__int64)*v12;
          v21 = v22;
          if ( v13 )
            v15 = v14
                ? PnpGetObjectProperty(
                    PiPnpRtlCtx,
                    (unsigned int)v29,
                    2,
                    (_DWORD)Handle,
                    0LL,
                    v14,
                    (__int64)&v24,
                    (__int64)Pool2,
                    v22,
                    (__int64)&v21,
                    0)
                : CmGetInstallerClassRegProp(
                    PiPnpRtlCtx,
                    (unsigned int)v29,
                    (_DWORD)Handle,
                    *((_DWORD *)v12 - 2),
                    (__int64)&v23,
                    (__int64)Pool2,
                    (__int64)&v21);
          else
            v15 = v14
                ? PnpGetObjectProperty(
                    PiPnpRtlCtx,
                    v7,
                    1,
                    (_DWORD)v26,
                    0LL,
                    v14,
                    (__int64)&v24,
                    (__int64)Pool2,
                    v22,
                    (__int64)&v21,
                    0)
                : CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    v7,
                    (_DWORD)v26,
                    *((_DWORD *)v12 - 2),
                    (__int64)&v23,
                    (__int64)Pool2,
                    (__int64)&v21,
                    0);
          DeviceRegProp = v15;
          if ( v15 == -1073741789 )
            break;
LABEL_14:
          if ( DeviceRegProp == -1073741275 )
          {
            DeviceRegProp = 0;
          }
          else
          {
            if ( DeviceRegProp < 0 )
              goto LABEL_17;
            DeviceRegProp = PiForEachDriverQueryRoutine(v23, Pool2, v21, v12[2], v28);
            if ( DeviceRegProp < 0 )
              goto LABEL_17;
          }
LABEL_16:
          ++v11;
          v12 += 4;
          if ( v11 >= 5 )
            goto LABEL_17;
        }
        ExFreePoolWithTag(Pool2, 0);
        v22 = v21;
        Pool2 = (void *)ExAllocatePool2(256LL, v21, 538996816LL);
        if ( !Pool2 )
          goto LABEL_46;
        v16 = (__int64)*v12;
        if ( *((_BYTE *)v12 + 8) )
        {
          v17 = v29;
          if ( !v16 )
          {
            InstallerClassRegProp = CmGetInstallerClassRegProp(
                                      PiPnpRtlCtx,
                                      (unsigned int)v29,
                                      (_DWORD)Handle,
                                      *((_DWORD *)v12 - 2),
                                      (__int64)&v23,
                                      (__int64)Pool2,
                                      (__int64)&v21);
            goto LABEL_45;
          }
          v18 = (int)Handle;
          v19 = 2;
        }
        else
        {
          LODWORD(v17) = v7;
          if ( !v16 )
          {
            InstallerClassRegProp = CmGetDeviceRegProp(
                                      PiPnpRtlCtx,
                                      v7,
                                      (_DWORD)v26,
                                      *((_DWORD *)v12 - 2),
                                      (__int64)&v23,
                                      (__int64)Pool2,
                                      (__int64)&v21,
                                      0);
            goto LABEL_45;
          }
          v18 = (int)v26;
          v19 = 1;
        }
        InstallerClassRegProp = PnpGetObjectProperty(
                                  PiPnpRtlCtx,
                                  (_DWORD)v17,
                                  v19,
                                  v18,
                                  0LL,
                                  v16,
                                  (__int64)&v24,
                                  (__int64)Pool2,
                                  v22,
                                  (__int64)&v21,
                                  0);
LABEL_45:
        DeviceRegProp = InstallerClassRegProp;
        goto LABEL_14;
      }
LABEL_46:
      DeviceRegProp = -1073741670;
    }
LABEL_17:
    if ( v7 )
      PnpUnicodeStringToWstrFree(v7, a1);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    if ( Handle )
      ZwClose(Handle);
    if ( v26 )
      ZwClose(v26);
    return (unsigned int)DeviceRegProp;
  }
  return result;
}
