/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C025A394
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0259FDC (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C02516B4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C025AC1C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C025B6A4 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 */

__int64 __fastcall SimpleHapticsController::InitializeSupportedWaveformList(PHIDP_PREPARSED_DATA *this)
{
  unsigned int v2; // r13d
  CHAR *v3; // r12
  unsigned int v4; // esi
  int v5; // r14d
  NTSTATUS Caps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rdi
  NTSTATUS SpecificValueCaps; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  USAGE *p_LinkUsagePage; // rcx
  UCHAR *p_ReportID; // rcx
  __int16 v15; // ax
  __int64 v16; // rax
  unsigned int v17; // esi
  UCHAR *v18; // rax
  signed int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  USHORT v22; // cx
  unsigned int v23; // r14d
  USAGE UsageMin; // r9
  USHORT LinkCollection; // r8
  __int64 v26; // rdx
  USHORT ValueCapsLength[2]; // [rsp+48h] [rbp-29h] BYREF
  ULONG UsageValue; // [rsp+4Ch] [rbp-25h] BYREF
  __int64 v30; // [rsp+50h] [rbp-21h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+58h] [rbp-19h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  Caps = HidP_GetCaps(this[2], &Capabilities);
  ValueCapsLength[0] = Capabilities.NumberFeatureValueCaps;
  if ( Caps >= 0 && Capabilities.NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * Capabilities.NumberFeatureValueCaps, 1667787091LL);
    if ( !ValueCaps )
      return (unsigned int)-1073741670;
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xAu, 0, 0, ValueCaps, ValueCapsLength, this[2]);
    Caps = SpecificValueCaps;
    if ( SpecificValueCaps < 0 )
    {
      if ( (unsigned int)dword_1C032B2C0 > 2 )
      {
        UsageValue = SpecificValueCaps;
        v30 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C032B2C0,
          byte_1C02F4B35,
          v9,
          v10,
          (void **)&v30,
          (__int64)&UsageValue);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        561,
        Caps,
        "Function failed.");
      goto LABEL_52;
    }
    v11 = ValueCapsLength[0];
    v12 = 0LL;
    if ( !ValueCapsLength[0] )
      goto LABEL_47;
    p_LinkUsagePage = &ValueCaps->LinkUsagePage;
    while ( *p_LinkUsagePage != 14 )
    {
      v12 = (unsigned int)(v12 + 1);
      p_LinkUsagePage += 36;
      if ( (unsigned int)v12 >= ValueCapsLength[0] )
        goto LABEL_15;
    }
    *((_BYTE *)this + 92) = ValueCaps[v12].ReportID;
LABEL_15:
    if ( !(_DWORD)v11 )
      goto LABEL_47;
    p_ReportID = &ValueCaps->ReportID;
    v9 = v11;
    do
    {
      if ( *((_WORD *)p_ReportID + 4) == 14 && *p_ReportID == *((_BYTE *)this + 92) )
      {
        v15 = *((_WORD *)p_ReportID + 3);
        if ( v15 == 16 )
        {
          ++v4;
        }
        else if ( v15 == 17 )
        {
          ++v5;
        }
      }
      p_ReportID += 72;
      --v9;
    }
    while ( v9 );
    if ( v4 && v4 == v5 )
    {
      *((_DWORD *)this + 22) = v4;
      v16 = Win32AllocPool(8LL * v4, 1667787091LL);
      v17 = 0;
      this[10] = (PHIDP_PREPARSED_DATA)v16;
      if ( !v16
        || (v18 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL), (v3 = (CHAR *)v18) == 0LL) )
      {
        Caps = -1073741670;
LABEL_52:
        Win32FreePool(ValueCaps);
        return (unsigned int)Caps;
      }
      *v18 = ValueCaps->ReportID;
      v19 = SimpleHapticsController::SendDeviceIOControl(
              (SimpleHapticsController *)this,
              0xB0192u,
              0LL,
              0,
              v18,
              Capabilities.FeatureReportByteLength,
              0LL);
      Caps = v19;
      if ( v19 >= 0 )
      {
        v22 = ValueCapsLength[0];
        v23 = 0;
        if ( ValueCapsLength[0] )
        {
          do
          {
            if ( ValueCaps[v23].LinkUsagePage == 14 && ValueCaps[v23].LinkUsage == 17 )
            {
              UsageMin = ValueCaps[v23].Range.UsageMin;
              LinkCollection = ValueCaps[v23].LinkCollection;
              UsageValue = 0;
              Caps = HidP_GetUsageValue(
                       HidP_Feature,
                       0xAu,
                       LinkCollection,
                       UsageMin,
                       &UsageValue,
                       this[2],
                       v3,
                       Capabilities.FeatureReportByteLength);
              if ( Caps >= 0 )
              {
                v26 = v2++;
                *((_WORD *)this[10] + 4 * v26) = ValueCaps[v23].Range.UsageMin;
                *((_DWORD *)this[10] + 2 * v26 + 1) = UsageValue;
              }
              v22 = ValueCapsLength[0];
            }
            ++v23;
          }
          while ( v23 < v22 );
          v17 = 0;
        }
        if ( v22 )
        {
          do
          {
            if ( ValueCaps[v17].LinkUsagePage == 14 && ValueCaps[v17].LinkUsage == 16 )
            {
              SimpleHapticsController::UpdateWaveformInfoList(
                (SimpleHapticsController *)this,
                ValueCaps[v17].Range.UsageMin,
                ValueCaps[v17].PhysicalMin);
              v22 = ValueCapsLength[0];
            }
            ++v17;
          }
          while ( v17 < v22 );
        }
      }
      else
      {
        if ( (unsigned int)dword_1C032B2C0 > 2 )
        {
          UsageValue = v19;
          v30 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C032B2C0,
            byte_1C02F4B35,
            v20,
            v21,
            (void **)&v30,
            (__int64)&UsageValue);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::InitializeSupportedWaveformList",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          622,
          Caps,
          "Function failed.");
      }
    }
    else
    {
LABEL_47:
      if ( (unsigned int)dword_1C032B2C0 > 2 )
      {
        UsageValue = -1073741216;
        v30 = (__int64)"Either there is no waveform or waveform list is not equal to duration list.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C032B2C0,
          byte_1C02F4B35,
          v9,
          v10,
          (void **)&v30,
          (__int64)&UsageValue);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        598,
        -1073741216,
        "Either there is no waveform or waveform list is not equal to duration list.");
    }
    if ( v3 )
      Win32FreePool(v3);
    goto LABEL_52;
  }
  return (unsigned int)Caps;
}
