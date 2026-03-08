/*
 * XREFs of LogDriverInfoStream @ 0x1C004D7C4
 * Callers:
 *     ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B450 (-PnpEventStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002CB60 (_tlgKeywordOn.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C0031480 (--1FxAutoString@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U?$_tlgWrapSz@G@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@66666666666666666666666AEBU?$_tlgWrapSz@G@@777@Z @ 0x1C004CD0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_t_ea_1C004CD0C.c)
 *     FxGetDevicePropertyString @ 0x1C004D10C (FxGetDevicePropertyString.c)
 *     GetDriverInfo @ 0x1C004D2D8 (GetDriverInfo.c)
 *     GetFirstHardwareId @ 0x1C004D510 (GetFirstHardwareId.c)
 *     RegistryWriteCurrentTime @ 0x1C004DD78 (RegistryWriteCurrentTime.c)
 */

void __fastcall LogDriverInfoStream(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Fdo)
{
  const _GUID *v4; // r8
  const _GUID *v5; // r9
  FxTelemetryDriverInfo v6; // eax
  const _tlgProvider_t *v7; // rcx
  _tlgWrapperByVal<1> v8; // [rsp+120h] [rbp-80h] BYREF
  _tlgWrapperByVal<1> v9; // [rsp+121h] [rbp-7Fh] BYREF
  _tlgWrapperByVal<1> v10; // [rsp+122h] [rbp-7Eh] BYREF
  _tlgWrapperByVal<1> v11; // [rsp+123h] [rbp-7Dh] BYREF
  _tlgWrapperByVal<1> v12; // [rsp+124h] [rbp-7Ch] BYREF
  _tlgWrapperByVal<1> v13; // [rsp+125h] [rbp-7Bh] BYREF
  _tlgWrapperByVal<1> v14; // [rsp+126h] [rbp-7Ah] BYREF
  _tlgWrapperByVal<1> v15; // [rsp+127h] [rbp-79h] BYREF
  _tlgWrapperByVal<1> v16; // [rsp+128h] [rbp-78h] BYREF
  _tlgWrapperByVal<1> v17; // [rsp+129h] [rbp-77h] BYREF
  _tlgWrapperByVal<1> v18; // [rsp+12Ah] [rbp-76h] BYREF
  _tlgWrapperByVal<1> v19; // [rsp+12Bh] [rbp-75h] BYREF
  _tlgWrapperByVal<1> v20; // [rsp+12Ch] [rbp-74h] BYREF
  _tlgWrapperByVal<1> v21; // [rsp+12Dh] [rbp-73h] BYREF
  _tlgWrapperByVal<1> v22; // [rsp+12Eh] [rbp-72h] BYREF
  _tlgWrapperByVal<1> v23; // [rsp+12Fh] [rbp-71h] BYREF
  _tlgWrapperByVal<1> v24; // [rsp+130h] [rbp-70h] BYREF
  _tlgWrapperByVal<1> v25; // [rsp+131h] [rbp-6Fh] BYREF
  _tlgWrapperByVal<1> v26; // [rsp+132h] [rbp-6Eh] BYREF
  _tlgWrapperByVal<1> v27; // [rsp+133h] [rbp-6Dh] BYREF
  _tlgWrapperByVal<1> v28; // [rsp+134h] [rbp-6Ch] BYREF
  FxAutoString hardwareIDs; // [rsp+138h] [rbp-68h] BYREF
  _tlgWrapSz<unsigned short> v30; // [rsp+148h] [rbp-58h] BYREF
  _tlgWrapSz<unsigned short> v31; // [rsp+150h] [rbp-50h] BYREF
  _tlgWrapSz<unsigned short> hProvider; // [rsp+158h] [rbp-48h] BYREF
  _tlgWrapSz<unsigned short> v33; // [rsp+160h] [rbp-40h] BYREF
  _tlgWrapSz<char> v34; // [rsp+168h] [rbp-38h] BYREF
  _tlgWrapperByRef<16> v35; // [rsp+170h] [rbp-30h] BYREF
  _tlgWrapperByVal<8> v36; // [rsp+178h] [rbp-28h] BYREF
  FxAutoString manufacturer; // [rsp+180h] [rbp-20h] BYREF
  FxAutoString busEnum; // [rsp+190h] [rbp-10h] BYREF
  FxAutoString setupClass; // [rsp+1A0h] [rbp+0h] BYREF
  FxTelemetryDriverInfo driverInfo; // [rsp+1D8h] [rbp+38h] BYREF
  _tlgWrapperByVal<1> v41; // [rsp+1E0h] [rbp+40h] BYREF
  _tlgWrapperByVal<1> v42; // [rsp+1E8h] [rbp+48h] BYREF

  driverInfo.Dword = 0;
  hardwareIDs = 0LL;
  setupClass = 0LL;
  busEnum = 0LL;
  manufacturer = 0LL;
  GetDriverInfo(DriverGlobals, Fdo, &driverInfo);
  if ( Fdo )
  {
    FxGetDevicePropertyString(Fdo, 5, &setupClass.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 15, &busEnum.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 1, &hardwareIDs.m_UnicodeString);
    GetFirstHardwareId(&hardwareIDs.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 8, &manufacturer.m_UnicodeString);
  }
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
  {
    v30.Psz = manufacturer.m_UnicodeString.Buffer;
    v31.Psz = hardwareIDs.m_UnicodeString.Buffer;
    hProvider.Psz = busEnum.m_UnicodeString.Buffer;
    v33.Psz = setupClass.m_UnicodeString.Buffer;
    v6.bitmap = driverInfo.bitmap;
    *(_BYTE *)&driverInfo.bitmap = *((_BYTE *)&driverInfo.bitmap + 1) & 1;
    v41.Value = (v6.Dword & 0x800000) != 0;
    v42.Value = (v6.Dword & 0x400000) != 0;
    v8.Value = (v6.Dword & 0x200000) != 0;
    v9.Value = (v6.Dword & 0x100000) != 0;
    v10.Value = (v6.Dword & 0x80000) != 0;
    v11.Value = (v6.Dword & 0x40000) != 0;
    v12.Value = (v6.Dword & 0x20000) != 0;
    v13.Value = BYTE2(v6.Dword) & 1;
    v14.Value = (*(_WORD *)&v6.bitmap & 0x8000) != 0;
    v15.Value = (*(_WORD *)&v6.bitmap & 0x4000) != 0;
    v16.Value = (*(_WORD *)&v6.bitmap & 0x2000) != 0;
    v17.Value = (*(_WORD *)&v6.bitmap & 0x1000) != 0;
    v18.Value = (*(_WORD *)&v6.bitmap & 0x800) != 0;
    v19.Value = (*(_WORD *)&v6.bitmap & 0x400) != 0;
    v20.Value = (*(_WORD *)&v6.bitmap & 0x200) != 0;
    v21.Value = (*(_BYTE *)&v6.bitmap & 0x80) != 0;
    v22.Value = (*(_BYTE *)&v6.bitmap & 0x40) != 0;
    v36.Value = 16779264LL;
    v23.Value = (*(_BYTE *)&v6.bitmap & 0x20) != 0;
    v24.Value = (*(_BYTE *)&v6.bitmap & 0x10) != 0;
    v25.Value = (*(_BYTE *)&v6.bitmap & 8) != 0;
    v26.Value = (*(_BYTE *)&v6.bitmap & 4) != 0;
    v7 = (const _tlgProvider_t *)(v6.Dword >> 1);
    LOBYTE(v7) = (*(_BYTE *)&v6.bitmap & 2) != 0;
    v27.Value = (unsigned __int8)v7;
    v28.Value = *(_BYTE *)&v6.bitmap & 1;
    v34.Psz = DriverGlobals->Public.DriverName;
    v35.Ptr = DriverGlobals->TelemetryContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v7,
      (char *)&tlgEvent_2._tlgChannel,
      v4,
      v5,
      &v36,
      &v35,
      &v34,
      &v28,
      &v27,
      &v26,
      &v25,
      &v24,
      &v23,
      &v22,
      &v21,
      &v20,
      &v19,
      &v18,
      &v17,
      &v16,
      &v15,
      &v14,
      &v13,
      &v12,
      &v11,
      &v10,
      &v9,
      &v8,
      &v42,
      &v41,
      (const _tlgWrapperByVal<1> *)&driverInfo,
      &v33,
      &hProvider,
      &v31,
      &v30);
  }
  RegistryWriteCurrentTime(DriverGlobals);
  FxAutoString::~FxAutoString(&manufacturer);
  FxAutoString::~FxAutoString(&busEnum);
  FxAutoString::~FxAutoString(&setupClass);
  FxAutoString::~FxAutoString(&hardwareIDs);
}
