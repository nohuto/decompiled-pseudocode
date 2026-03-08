/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C024B908
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C024B550 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C024C180 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C024CC10 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 */

__int64 __fastcall SimpleHapticsController::InitializeSupportedWaveformList(PHIDP_PREPARSED_DATA *this)
{
  unsigned int v2; // edi
  unsigned int v3; // r15d
  int v4; // r12d
  NTSTATUS Caps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rsi
  NTSTATUS SpecificValueCaps; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  USAGE *p_LinkUsagePage; // rcx
  UCHAR *p_ReportID; // rcx
  __int16 v14; // ax
  __int64 v15; // rax
  UCHAR *v16; // rax
  CHAR *v17; // r13
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  USHORT v21; // cx
  unsigned int v22; // r15d
  USAGE UsageMin; // r9
  USHORT LinkCollection; // r8
  __int64 v25; // r8
  struct _HIDP_PREPARSED_DATA *ValueCapsLength; // [rsp+30h] [rbp-41h]
  USHORT v28[2]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v29[3]; // [rsp+4Ch] [rbp-25h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+58h] [rbp-19h] BYREF

  memset_0(&Capabilities, 0, sizeof(Capabilities));
  v2 = 0;
  v3 = 0;
  v4 = 0;
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v28[0] = Capabilities.NumberFeatureValueCaps;
  if ( Caps >= 0 && Capabilities.NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72LL * Capabilities.NumberFeatureValueCaps, 1667787091LL);
    if ( ValueCaps )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xAu, 0, 0, ValueCaps, v28, this[2]);
      Caps = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
      {
        v10 = v28[0];
        v11 = 0LL;
        if ( !v28[0] )
          goto LABEL_45;
        p_LinkUsagePage = &ValueCaps->LinkUsagePage;
        while ( *p_LinkUsagePage != 14 )
        {
          v11 = (unsigned int)(v11 + 1);
          p_LinkUsagePage += 36;
          if ( (unsigned int)v11 >= v28[0] )
            goto LABEL_15;
        }
        *((_BYTE *)this + 92) = ValueCaps[v11].ReportID;
LABEL_15:
        p_ReportID = &ValueCaps->ReportID;
        v8 = v10;
        do
        {
          if ( *((_WORD *)p_ReportID + 4) == 14 && *p_ReportID == *((_BYTE *)this + 92) )
          {
            v14 = *((_WORD *)p_ReportID + 3);
            if ( v14 == 16 )
            {
              ++v3;
            }
            else if ( v14 == 17 )
            {
              ++v4;
            }
          }
          p_ReportID += 72;
          --v8;
        }
        while ( v8 );
        if ( v3 && v3 == v4 )
        {
          *((_DWORD *)this + 22) = v3;
          v15 = Win32AllocPoolZInit(8LL * v3, 1667787091LL);
          this[10] = (PHIDP_PREPARSED_DATA)v15;
          if ( v15
            && (v16 = (UCHAR *)Win32AllocPoolZInit(Capabilities.FeatureReportByteLength, 1667787091LL),
                (v17 = (CHAR *)v16) != 0LL) )
          {
            *v16 = ValueCaps->ReportID;
            v18 = SimpleHapticsController::SendDeviceIOControl(
                    (SimpleHapticsController *)this,
                    0xB0192u,
                    0LL,
                    0,
                    v16,
                    Capabilities.FeatureReportByteLength,
                    0LL);
            Caps = v18;
            if ( v18 >= 0 )
            {
              v21 = v28[0];
              v22 = 0;
              v29[0] = 0;
              if ( v28[0] )
              {
                do
                {
                  if ( ValueCaps[v22].LinkUsagePage == 14 && ValueCaps[v22].LinkUsage == 17 )
                  {
                    UsageMin = ValueCaps[v22].Range.UsageMin;
                    LinkCollection = ValueCaps[v22].LinkCollection;
                    ValueCapsLength = this[2];
                    v29[1] = 0;
                    Caps = HidP_GetUsageValue(
                             HidP_Feature,
                             0xAu,
                             LinkCollection,
                             UsageMin,
                             &v29[1],
                             ValueCapsLength,
                             v17,
                             Capabilities.FeatureReportByteLength);
                    if ( Caps >= 0 )
                    {
                      v25 = v29[0];
                      *((_WORD *)this[10] + 4 * v29[0]) = ValueCaps[v22].Range.UsageMin;
                      *((_DWORD *)this[10] + 2 * v25 + 1) = v29[1];
                      v29[0] = v25 + 1;
                    }
                    v21 = v28[0];
                  }
                  ++v22;
                }
                while ( v22 < v21 );
                if ( v21 )
                {
                  do
                  {
                    if ( ValueCaps[v2].LinkUsagePage == 14 && ValueCaps[v2].LinkUsage == 16 )
                    {
                      SimpleHapticsController::UpdateWaveformInfoList(
                        (SimpleHapticsController *)this,
                        ValueCaps[v2].Range.UsageMin,
                        ValueCaps[v2].PhysicalMin);
                      v21 = v28[0];
                    }
                    ++v2;
                  }
                  while ( v2 < v21 );
                }
              }
            }
            else
            {
              if ( (unsigned int)dword_1C0357118 > 2 )
              {
                v29[0] = v18;
                *(_QWORD *)&v29[1] = "Function failed.";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_1C0357118,
                  byte_1C031FABE,
                  v19,
                  v20,
                  (void **)&v29[1],
                  (__int64)v29);
              }
              DbgPrintEx(
                0x4Du,
                0,
                "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
                "SimpleHapticsController::InitializeSupportedWaveformList",
                "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
                623,
                Caps,
                "Function failed.");
            }
            Win32FreePool(v17);
          }
          else
          {
            Caps = -1073741670;
          }
        }
        else
        {
LABEL_45:
          if ( (unsigned int)dword_1C0357118 > 2 )
          {
            v29[0] = -1073741216;
            *(_QWORD *)&v29[1] = "Either there is no waveform or waveform list is not equal to duration list.";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1C0357118,
              byte_1C031FABE,
              v8,
              v9,
              (void **)&v29[1],
              (__int64)v29);
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::InitializeSupportedWaveformList",
            "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            599,
            -1073741216,
            "Either there is no waveform or waveform list is not equal to duration list.");
        }
      }
      else
      {
        if ( (unsigned int)dword_1C0357118 > 2 )
        {
          v29[0] = SpecificValueCaps;
          *(_QWORD *)&v29[1] = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            v8,
            v9,
            (void **)&v29[1],
            (__int64)v29);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::InitializeSupportedWaveformList",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          562,
          Caps,
          "Function failed.");
      }
      Win32FreePool(ValueCaps);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Caps;
}
