/*
 * XREFs of PpForEachDeviceInstanceDriver @ 0x14074C164
 * Callers:
 *     PiDeviceRegistration @ 0x14074BFB0 (PiDeviceRegistration.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14063A9DC (_CmOpenInstallerClassRegKey.c)
 *     _CmGetInstallerClassRegProp @ 0x14073F958 (_CmGetInstallerClassRegProp.c)
 *     PiForEachDriverQueryRoutine @ 0x14074C468 (PiForEachDriverQueryRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpForEachDeviceInstanceDriver(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rdi
  __int64 result; // rax
  __int16 *v7; // r14
  int DeviceRegProp; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 *v12; // rsi
  char v13; // cl
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  WCHAR *v17; // rdx
  HANDLE v18; // r9
  __int64 v19; // r8
  int InstallerClassRegProp; // eax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-71h] BYREF
  int v23; // [rsp+6Ch] [rbp-6Dh] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-69h] BYREF
  HANDLE v25; // [rsp+78h] [rbp-61h] BYREF
  __int16 *v26; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v27[3]; // [rsp+88h] [rbp-51h] BYREF
  WCHAR v28[40]; // [rsp+A0h] [rbp-39h] BYREF

  Handle = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  PoolWithTag = 0LL;
  v22 = 0;
  NumberOfBytes = 0LL;
  v23 = 0;
  result = PnpUnicodeStringToWstr(&v26, 0LL, a1);
  if ( (int)result >= 0 )
  {
    v7 = v26;
    DeviceRegProp = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v26, 16, 0, 131097, 0, (__int64)&v25, 0LL);
    if ( DeviceRegProp >= 0 )
    {
      HIDWORD(NumberOfBytes) = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)v7,
                        (__int64)v25,
                        9,
                        (__int64)&v22,
                        (__int64)v28,
                        (__int64)&NumberOfBytes + 4,
                        0);
      if ( DeviceRegProp >= 0 && v22 == 1 && HIDWORD(NumberOfBytes) )
        DeviceRegProp = CmOpenInstallerClassRegKey(
                          *(__int64 *)&PiPnpRtlCtx,
                          v28,
                          v9,
                          v10,
                          131097,
                          0,
                          (__int64)&Handle,
                          0LL);
      v27[2] = a3;
      v27[1] = PiProcessDriverInstance;
      HIDWORD(NumberOfBytes) = 170;
      v27[0] = a1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xAAuLL, 0x20207050u);
      if ( PoolWithTag )
      {
        v11 = 0;
        v12 = &qword_140007B70;
        while ( 1 )
        {
          v13 = *((_BYTE *)v12 + 16);
          if ( v13 && !Handle )
            goto LABEL_16;
          v14 = v12[1];
          LODWORD(NumberOfBytes) = HIDWORD(NumberOfBytes);
          if ( v13 )
            v15 = v14
                ? PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v28,
                    2LL,
                    (__int64)Handle,
                    0LL,
                    v14,
                    (__int64)&v23,
                    (__int64)PoolWithTag,
                    SHIDWORD(NumberOfBytes),
                    (__int64)&NumberOfBytes,
                    0)
                : CmGetInstallerClassRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v28,
                    (__int64)Handle,
                    *(_DWORD *)v12,
                    (__int64)&v22,
                    (__int64)PoolWithTag,
                    (__int64)&NumberOfBytes);
          else
            v15 = v14
                ? PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v7,
                    1LL,
                    (__int64)v25,
                    0LL,
                    v14,
                    (__int64)&v23,
                    (__int64)PoolWithTag,
                    SHIDWORD(NumberOfBytes),
                    (__int64)&NumberOfBytes,
                    0)
                : CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v7,
                    (__int64)v25,
                    *(_DWORD *)v12,
                    (__int64)&v22,
                    (__int64)PoolWithTag,
                    (__int64)&NumberOfBytes,
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
            DeviceRegProp = PiForEachDriverQueryRoutine(v22, PoolWithTag, (unsigned int)NumberOfBytes, v27);
            if ( DeviceRegProp < 0 )
              goto LABEL_17;
          }
LABEL_16:
          ++v11;
          v12 += 3;
          if ( v11 >= 5 )
            goto LABEL_17;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        HIDWORD(NumberOfBytes) = NumberOfBytes;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
        if ( !PoolWithTag )
          goto LABEL_46;
        v16 = v12[1];
        if ( *((_BYTE *)v12 + 16) )
        {
          v17 = v28;
          if ( !v16 )
          {
            InstallerClassRegProp = CmGetInstallerClassRegProp(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (__int64)v28,
                                      (__int64)Handle,
                                      *(_DWORD *)v12,
                                      (__int64)&v22,
                                      (__int64)PoolWithTag,
                                      (__int64)&NumberOfBytes);
            goto LABEL_45;
          }
          v18 = Handle;
          v19 = 2LL;
        }
        else
        {
          v17 = (WCHAR *)v7;
          if ( !v16 )
          {
            InstallerClassRegProp = CmGetDeviceRegProp(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (__int64)v7,
                                      (__int64)v25,
                                      *(_DWORD *)v12,
                                      (__int64)&v22,
                                      (__int64)PoolWithTag,
                                      (__int64)&NumberOfBytes,
                                      0);
            goto LABEL_45;
          }
          v18 = v25;
          v19 = 1LL;
        }
        InstallerClassRegProp = PnpGetObjectProperty(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (__int64)v17,
                                  v19,
                                  (__int64)v18,
                                  0LL,
                                  v16,
                                  (__int64)&v23,
                                  (__int64)PoolWithTag,
                                  SHIDWORD(NumberOfBytes),
                                  (__int64)&NumberOfBytes,
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
      PnpUnicodeStringToWstrFree(v7, (__int64)a1);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( Handle )
      ZwClose(Handle);
    if ( v25 )
      ZwClose(v25);
    return (unsigned int)DeviceRegProp;
  }
  return result;
}
