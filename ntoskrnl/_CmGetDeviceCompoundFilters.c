/*
 * XREFs of _CmGetDeviceCompoundFilters @ 0x140751AEC
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C9418 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A6517C (_CmGetDeviceCompoundFiltersWorker.c)
 */

__int64 __fastcall CmGetDeviceCompoundFilters(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int *a5,
        GUID *a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int v8; // ebx
  const DEVPROPKEY *v13; // r14
  HANDLE v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int *v17; // r12
  unsigned int v18; // r13d
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
    v14 = a3;
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
    v14 = v23;
  }
  if ( a1 )
    v15 = *(_QWORD *)(a1 + 224);
  else
    v15 = 0LL;
  v16 = SysCtxRegOpenKey(v15, (__int64)v14, (__int64)L"Filters", 0, 0x2001Fu, (__int64)&Handle);
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
                                    (__int64)a5,
                                    (__int64)a6,
                                    a7,
                                    (__int64)a8);
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
                                      (__int64)v23,
                                      (__int64)v13,
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
