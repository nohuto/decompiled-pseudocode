__int64 __fastcall SimpleHapticsController::SetAutoTriggerWaveform(PHIDP_PREPARSED_DATA *this, unsigned __int16 a2)
{
  ULONG v2; // r15d
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  NTSTATUS Caps; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  UCHAR *v13; // r14
  NTSTATUS SpecificValueCaps; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  NTSTATUS v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // [rsp+40h] [rbp-89h] BYREF
  __int64 v28; // [rsp+48h] [rbp-81h] BYREF
  USHORT ValueCapsLength[8]; // [rsp+50h] [rbp-79h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-69h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-29h] BYREF

  v2 = a2;
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  ValueCapsLength[0] = 1;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    LOWORD(v27) = v2;
    v28 = (__int64)"SimpleHapticsController::SetAutoTriggerWaveform entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>>(
      v4,
      byte_1C031FBD5,
      v5,
      v6,
      (void **)&v28,
      (__int64)&v27);
  }
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v10 = Caps;
  if ( Caps >= 0 )
  {
    v13 = (UCHAR *)Win32AllocPoolZInit(Capabilities.FeatureReportByteLength, 1667787091LL);
    if ( v13 )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &ValueCaps, ValueCapsLength, this[2]);
      v10 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
      {
        *v13 = ValueCaps.ReportID;
        v17 = SimpleHapticsController::SendDeviceIOControl(
                (SimpleHapticsController *)this,
                0xB0192u,
                0LL,
                0LL,
                v13,
                Capabilities.FeatureReportByteLength,
                0LL);
        v10 = v17;
        if ( v17 >= 0 )
        {
          v20 = HidP_SetUsageValue(
                  HidP_Feature,
                  0xEu,
                  ValueCaps.LinkCollection,
                  0x20u,
                  v2,
                  this[2],
                  (PCHAR)v13,
                  Capabilities.FeatureReportByteLength);
          v10 = v20;
          if ( v20 >= 0 )
          {
            v23 = SimpleHapticsController::SendDeviceIOControl(
                    (SimpleHapticsController *)this,
                    0xB0191u,
                    v13,
                    Capabilities.FeatureReportByteLength,
                    0LL,
                    0,
                    0LL);
            v10 = v23;
            if ( v23 < 0 )
            {
              if ( (unsigned int)dword_1C0357118 > 2 )
              {
                LODWORD(v27) = v23;
                v28 = (__int64)"Function failed.";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_1C0357118,
                  byte_1C031FABE,
                  v24,
                  v25,
                  (void **)&v28,
                  (__int64)&v27);
              }
              DbgPrintEx(
                0x4Du,
                0,
                "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
                "SimpleHapticsController::SetAutoTriggerWaveform",
                "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
                359,
                v10,
                "Function failed.");
            }
          }
          else
          {
            if ( (unsigned int)dword_1C0357118 > 2 )
            {
              LODWORD(v27) = v20;
              v28 = (__int64)"Function failed.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1C0357118,
                byte_1C031FABE,
                v21,
                v22,
                (void **)&v28,
                (__int64)&v27);
            }
            DbgPrintEx(
              0x4Du,
              0,
              "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
              "SimpleHapticsController::SetAutoTriggerWaveform",
              "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
              350,
              v10,
              "Function failed.");
          }
        }
        else
        {
          if ( (unsigned int)dword_1C0357118 > 2 )
          {
            LODWORD(v27) = v17;
            v28 = (__int64)"Function failed.";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1C0357118,
              byte_1C031FABE,
              v18,
              v19,
              (void **)&v28,
              (__int64)&v27);
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::SetAutoTriggerWaveform",
            "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            340,
            v10,
            "Function failed.");
        }
      }
      else
      {
        if ( (unsigned int)dword_1C0357118 > 2 )
        {
          LODWORD(v27) = SpecificValueCaps;
          v28 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            v15,
            v16,
            (void **)&v28,
            (__int64)&v27);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::SetAutoTriggerWaveform",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          330,
          v10,
          "Function failed.");
      }
      Win32FreePool(v13);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0357118 > 2 )
    {
      LODWORD(v27) = Caps;
      v28 = (__int64)"Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357118,
        byte_1C031FABE,
        v8,
        v9,
        (void **)&v28,
        (__int64)&v27);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SetAutoTriggerWaveform",
      "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      316,
      v10,
      "Function failed.");
  }
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    LODWORD(v27) = v10;
    v28 = (__int64)"SimpleHapticsController::SetAutoTriggerWaveform exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357118,
      byte_1C031FB66,
      v11,
      v12,
      (void **)&v28,
      (__int64)&v27);
  }
  return v10;
}
