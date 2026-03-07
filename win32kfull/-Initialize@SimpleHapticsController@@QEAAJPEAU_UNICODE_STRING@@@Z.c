__int64 __fastcall SimpleHapticsController::Initialize(SimpleHapticsController *this, struct _UNICODE_STRING *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS Caps; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 OutputReportByteLength; // rcx
  __int64 v17; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-89h]
  struct _HIDP_PREPARSED_DATA *PreparsedDataa; // [rsp+30h] [rbp-89h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatab; // [rsp+30h] [rbp-89h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatac; // [rsp+30h] [rbp-89h]
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v24[3]; // [rsp+44h] [rbp-75h] BYREF
  __int64 v25; // [rsp+50h] [rbp-69h] BYREF
  _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-59h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-19h] BYREF

  memset_0(&Capabilities, 0, sizeof(Capabilities));
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    *(_QWORD *)&v24[1] = "SimpleHapticsController::Initialize entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1C0357118,
      byte_1C031FAF5,
      0LL,
      0LL,
      (void **)&v24[1]);
  }
  if ( !a2 )
  {
    v6 = -1073741811;
    goto LABEL_32;
  }
  if ( !(unsigned int)AllocateUnicodeString((struct _UNICODE_STRING *)this, (const void **)a2) )
    goto LABEL_6;
  v7 = SimpleHapticsController::OpenHapticsDevice(this);
  v6 = v7;
  if ( v7 >= 0 )
  {
    v10 = SimpleHapticsController::IntializePreparssedData(this);
    v6 = v10;
    if ( v10 >= 0 )
    {
      Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 2), &Capabilities);
      v6 = Caps;
      if ( Caps >= 0 )
      {
        if ( Capabilities.OutputReportByteLength )
        {
          OutputReportByteLength = Capabilities.OutputReportByteLength;
          *((_WORD *)this + 36) = Capabilities.OutputReportByteLength;
          v17 = Win32AllocPoolZInit(OutputReportByteLength, 1667787091LL);
          *((_QWORD *)this + 8) = v17;
          if ( !v17 )
          {
LABEL_6:
            v6 = -1073741670;
            goto LABEL_32;
          }
        }
        else
        {
          *((_WORD *)this + 36) = 0;
          *((_QWORD *)this + 8) = 0LL;
        }
        memset_0(&ValueCaps, 0, sizeof(ValueCaps));
        PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
        ValueCapsLength[0] = 1;
        if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x21u, &ValueCaps, ValueCapsLength, PreparsedData) >= 0 )
        {
          PreparsedDataa = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x24u, &ValueCaps, ValueCapsLength, PreparsedDataa) >= 0 )
            *((_DWORD *)this + 19) |= 4u;
          PreparsedDatab = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x25u, &ValueCaps, ValueCapsLength, PreparsedDatab) >= 0 )
            *((_DWORD *)this + 19) |= 8u;
          PreparsedDatac = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x23u, &ValueCaps, ValueCapsLength, PreparsedDatac) >= 0 )
            *((_DWORD *)this + 19) |= 2u;
          SimpleHapticsController::InitializeSupportedWaveformList(this);
        }
        v6 = 0;
      }
      else
      {
        if ( (unsigned int)dword_1C0357118 > 2 )
        {
          v24[0] = Caps;
          *(_QWORD *)&v24[1] = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            v14,
            v15,
            (void **)&v24[1],
            (__int64)v24);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::Initialize",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          62,
          v6,
          "Function failed.");
      }
    }
    else
    {
      if ( (unsigned int)dword_1C0357118 > 2 )
      {
        v24[0] = v10;
        *(_QWORD *)&v24[1] = "Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0357118,
          byte_1C031FABE,
          v11,
          v12,
          (void **)&v24[1],
          (__int64)v24);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::Initialize",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        60,
        v6,
        "Function failed.");
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0357118 > 2 )
    {
      v24[0] = v7;
      *(_QWORD *)&v24[1] = "Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357118,
        byte_1C031FABE,
        v8,
        v9,
        (void **)&v24[1],
        (__int64)v24);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::Initialize",
      "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      58,
      v6,
      "Function failed.");
  }
LABEL_32:
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    v24[1] = *((_DWORD *)this + 22);
    v24[0] = v6;
    v25 = (__int64)"SimpleHapticsController::Initialize exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357118,
      byte_1C031FC70,
      v4,
      v5,
      (void **)&v25,
      (__int64)&v24[1],
      (__int64)v24);
  }
  return v6;
}
