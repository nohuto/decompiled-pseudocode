/*
 * XREFs of _CmGetDeviceCompoundFilters @ 0x140745F48
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140785B98 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A2AAB0 (_CmGetDeviceCompoundFiltersWorker.c)
 */

__int64 __fastcall CmGetDeviceCompoundFilters(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  const DEVPROPKEY *v13; // r14
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r12
  int v18; // r13d
  int DeviceMappedPropertyFromRegProp; // eax
  __int64 v21; // rax
  int DeviceCompoundFiltersWorker; // eax
  HANDLE v23; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+20h] BYREF

  v8 = 0;
  v23 = 0LL;
  Handle = 0LL;
  if ( *(_DWORD *)(a4 + 16) != 22 )
    goto LABEL_2;
  v21 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
    v21 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  v13 = &DEVPKEY_Device_UpperFilters;
  if ( v21 )
LABEL_2:
    v13 = &DEVPKEY_Device_LowerFilters;
  if ( a3 )
  {
    v14 = (int)a3;
    v23 = a3;
  }
  else
  {
    DeviceCompoundFiltersWorker = CmOpenDeviceRegKey(a1, a2, 16, 0, 33554433, 0, (__int64)&v23, 0LL);
    if ( DeviceCompoundFiltersWorker < 0 )
    {
LABEL_27:
      v8 = DeviceCompoundFiltersWorker;
      goto LABEL_10;
    }
    v14 = (int)v23;
  }
  if ( a1 )
    v15 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v15) = 0;
  v16 = SysCtxRegOpenKey(v15, v14, (unsigned int)L"Filters", 0, 131103, (__int64)&Handle);
  v17 = a8;
  v18 = a7;
  if ( v16 >= 0 )
  {
    DeviceCompoundFiltersWorker = CmGetDeviceCompoundFiltersWorker(
                                    a1,
                                    a2,
                                    (_DWORD)v23,
                                    (_DWORD)Handle,
                                    a4,
                                    (__int64)v13,
                                    a5,
                                    a6,
                                    a7,
                                    a8);
    if ( DeviceCompoundFiltersWorker != -1073741772
      && DeviceCompoundFiltersWorker != -1073741444
      && DeviceCompoundFiltersWorker != -1073741275 )
    {
      if ( DeviceCompoundFiltersWorker >= 0 )
        goto LABEL_10;
      goto LABEL_27;
    }
  }
  DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                      a1,
                                      a2,
                                      (_DWORD)v23,
                                      (_DWORD)v13,
                                      a5,
                                      a6,
                                      v18,
                                      v17,
                                      0);
  if ( DeviceMappedPropertyFromRegProp < 0 )
    v8 = DeviceMappedPropertyFromRegProp;
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 && !a3 )
    ZwClose(v23);
  return v8;
}
