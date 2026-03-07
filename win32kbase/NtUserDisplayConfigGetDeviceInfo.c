__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  unsigned int *QuotaZInit; // rsi
  void *v3; // r15
  int DeviceInfoInternal; // ebx
  unsigned int *v5; // rdx
  size_t v6; // r12
  _DWORD *v7; // rax
  _DWORD *v8; // r14
  unsigned __int64 v9; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r13
  unsigned int v16; // r12d
  __int64 v17; // rcx
  int GetterTypeSize; // eax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v20; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // r13d
  _DWORD *v25; // r14
  __int64 v26; // r12
  unsigned int v27; // [rsp+30h] [rbp-A8h]
  int v28; // [rsp+34h] [rbp-A4h]
  unsigned int v29; // [rsp+38h] [rbp-A0h]
  unsigned int v30; // [rsp+3Ch] [rbp-9Ch]
  __int64 v31; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-70h]
  volatile void *Address; // [rsp+F8h] [rbp+20h]

  QuotaZInit = 0LL;
  v3 = 0LL;
  Address = 0LL;
  v27 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  DeviceInfoInternal = 0;
  if ( !gbVideoInitialized )
  {
    DeviceInfoInternal = -1073741823;
    goto LABEL_54;
  }
  v5 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  if ( (unsigned int)v6 < 0x14 )
    ExRaiseStatus(-1073741811);
  QuotaZInit = (unsigned int *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                 (NSInstrumentation::CLeakTrackingAllocator *)MmUserProbeAddress,
                                 (unsigned __int64)v5,
                                 (unsigned int)v6,
                                 0x63447355u);
  if ( !QuotaZInit )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    if ( *v7 == -21 && (_DWORD)v6 == 2056 )
    {
      if ( a1 + 2020 < a1 + 2016 || (unsigned __int64)(a1 + 2020) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 504) = 0;
      if ( a1 + 2024 < a1 + 2020 || (unsigned __int64)(a1 + 2024) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 505) = 0;
      v8 = a1 + 2024;
      if ( v8 + 1 < v8 || (unsigned __int64)(v8 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v8 = 1144084230;
    }
    WdLogSingleEntry2(2LL, v6);
    ExRaiseStatus(-1073741801);
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&a1[v6] > MmUserProbeAddress || &a1[v6] < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(QuotaZInit, a1, v6);
  QuotaZInit[1] = v6;
  v10 = (NSInstrumentation::CLeakTrackingAllocator *)*QuotaZInit;
  if ( (_DWORD)v10 == -21 )
  {
    if ( (_DWORD)v6 == 2056 )
    {
      v30 = QuotaZInit[504];
      v29 = QuotaZInit[505];
      *((_QWORD *)QuotaZInit + 252) = 0LL;
      v28 = 1;
      goto LABEL_29;
    }
LABEL_73:
    DeviceInfoInternal = -1073741811;
    goto LABEL_54;
  }
  if ( (_DWORD)v10 != -15 )
    goto LABEL_29;
  if ( (_DWORD)v6 != 32 )
    goto LABEL_73;
  v22 = QuotaZInit[5];
  if ( v22 )
  {
    v3 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v10, v9, v22, 0x63447355u);
    if ( !v3 )
    {
      DeviceInfoInternal = -1073741801;
      goto LABEL_54;
    }
    Address = (volatile void *)*((_QWORD *)QuotaZInit + 3);
    *((_QWORD *)QuotaZInit + 3) = v3;
  }
LABEL_29:
  v15 = DispConfigTypes::RequiresUserCritShared();
  if ( v15 )
    PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v12, v11, v13, v14);
  v16 = *QuotaZInit;
  if ( (unsigned __int8)DispConfigTypes::AllowInAnySession(*QuotaZInit) )
    goto LABEL_35;
  if ( !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    if ( !(unsigned int)UserIsWddmConnectedSession(v17) )
      DeviceInfoInternal = -1073741790;
LABEL_35:
    if ( DeviceInfoInternal >= 0 )
    {
      GetterTypeSize = DispConfigTypes::GetGetterTypeSize(v16);
      if ( !GetterTypeSize || QuotaZInit[1] != GetterTypeSize )
        DeviceInfoInternal = -1073741811;
      if ( DeviceInfoInternal >= 0 )
        DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal(
                               (struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)QuotaZInit,
                               1);
    }
    goto LABEL_40;
  }
  DeviceInfoInternal = -1073741823;
LABEL_40:
  if ( v15 )
    UserSessionSwitchLeaveCrit();
  if ( DeviceInfoInternal < 0 && v28 )
    v27 = QuotaZInit[506];
  if ( DeviceInfoInternal == -2147483643 )
  {
    DeviceInfoInternal = -1073741789;
  }
  else if ( DeviceInfoInternal != -1073741789 )
  {
    DeviceInfoInternal = DeviceInfoTranslateStatusDefault(*QuotaZInit, (unsigned int)DeviceInfoInternal);
  }
  if ( *QuotaZInit == -15 )
  {
    *((_QWORD *)QuotaZInit + 3) = Address;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( QuotaZInit[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
        ProbeForWrite(Address, QuotaZInit[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)Address, v3, QuotaZInit[5]);
      }
    }
  }
  if ( *QuotaZInit == 3 && DeviceInfoInternal >= 0 )
    QuotaZInit[7] = 0;
  v20 = PsGetCurrentProcessWow64Process();
  ProbeForWrite(a1, QuotaZInit[1], v20 != 0 ? 1 : 4);
  memmove(a1, QuotaZInit, QuotaZInit[1]);
LABEL_54:
  if ( DeviceInfoInternal < 0 && v28 )
  {
    v31 = 0LL;
    v32 = 0;
    DrvSampleDisplayState(&v31);
    v23 = (unsigned int)v31;
    if ( v30 != (_DWORD)v31 || (v24 = 1, v29 != v32) )
      v24 = 0;
    if ( v24 )
    {
      v26 = DeviceInfoInternal;
    }
    else
    {
      v25 = a1 + 2024;
      if ( v25 + 1 < v25 || (unsigned __int64)(v25 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v25 = 0;
      WdLogSingleEntry5(2LL, v30, v29, v23, v32, (int)v27);
      v26 = DeviceInfoInternal;
      WdLogSingleEntry2(2LL, DeviceInfoInternal);
    }
    if ( dword_1C02D86B8 || !v24 )
    {
      WdLogSingleEntry2(2LL, v26);
    }
    else
    {
      dword_1C02D86B8 = 1;
      HelperCreateLiveDumpWithWdLogs((unsigned int)DeviceInfoInternal, v27);
    }
  }
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  if ( QuotaZInit )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
  return (unsigned int)DeviceInfoInternal;
}
