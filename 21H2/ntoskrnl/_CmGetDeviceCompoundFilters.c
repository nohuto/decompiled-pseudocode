/*
 * XREFs of _CmGetDeviceCompoundFilters @ 0x140735858
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097A1BC (_CmGetDeviceCompoundFiltersWorker.c)
 */

__int64 __fastcall CmGetDeviceCompoundFilters(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int *a5,
        wchar_t *a6,
        int a7,
        unsigned int *a8)
{
  unsigned int v8; // ebx
  const DEVPROPKEY *v13; // r14
  int DeviceCompoundFiltersWorker; // eax
  HANDLE v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int *v18; // r12
  unsigned int v19; // r13d
  int DeviceMappedPropertyFromRegProp; // eax
  __int64 v22; // rax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v24; // [rsp+A8h] [rbp+20h] BYREF

  v8 = 0;
  Handle = 0LL;
  v24 = 0LL;
  if ( *(_DWORD *)(a4 + 16) != 22 )
    goto LABEL_2;
  v22 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
    v22 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  v13 = &DEVPKEY_Device_UpperFilters;
  if ( v22 )
LABEL_2:
    v13 = &DEVPKEY_Device_LowerFilters;
  if ( a3 )
  {
    v15 = a3;
    Handle = a3;
  }
  else
  {
    DeviceCompoundFiltersWorker = CmOpenDeviceRegKey(a1, a2, 16, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( DeviceCompoundFiltersWorker < 0 )
    {
LABEL_27:
      v8 = DeviceCompoundFiltersWorker;
      goto LABEL_11;
    }
    v15 = Handle;
  }
  if ( a1 )
    v16 = *(_QWORD *)(a1 + 224);
  else
    v16 = 0LL;
  v17 = SysCtxRegOpenKey(v16, (__int64)v15, (__int64)L"Filters", 0, 0x2001Fu, (__int64)&v24);
  v18 = a8;
  v19 = a7;
  if ( v17 >= 0 )
  {
    DeviceCompoundFiltersWorker = CmGetDeviceCompoundFiltersWorker(
                                    a1,
                                    a4,
                                    (__int64)v13,
                                    (__int64)a5,
                                    (__int64)a6,
                                    a7,
                                    (__int64)a8);
    if ( DeviceCompoundFiltersWorker != -1073741772
      && DeviceCompoundFiltersWorker != -1073741444
      && DeviceCompoundFiltersWorker != -1073741275 )
    {
      if ( DeviceCompoundFiltersWorker >= 0 )
        goto LABEL_11;
      goto LABEL_27;
    }
  }
  DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                      a1,
                                      a2,
                                      (__int64)Handle,
                                      (__int64)v13,
                                      a5,
                                      a6,
                                      v19,
                                      v18,
                                      0);
  if ( DeviceMappedPropertyFromRegProp < 0 )
    v8 = DeviceMappedPropertyFromRegProp;
LABEL_11:
  if ( v24 )
    ZwClose(v24);
  if ( Handle && !a3 )
    ZwClose(Handle);
  return v8;
}
