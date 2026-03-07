__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct InteractiveControlDevice *a1,
        PCHAR Report,
        ULONG ReportLength,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r10
  CHAR *v6; // r9
  int v7; // r15d
  int v8; // r13d
  struct InteractiveControlDevice *v9; // r12
  struct InteractiveControlDevice *v11; // rax
  struct InteractiveControlDevice *v12; // rdx
  struct InteractiveControlDevice *v13; // rbx
  int v14; // ecx
  USAGE *v15; // r14
  NTSTATUS v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  NTSTATUS Usages; // eax
  __int64 v21; // rcx
  NTSTATUS ScaledUsageValue; // eax
  ULONG v23; // eax
  __int16 v24; // cx
  int v25; // eax
  int ScaledComponentValue; // eax
  int v27; // r8d
  int v28; // eax
  int v29; // r9d
  int v30; // eax
  int v31; // r9d
  int v32; // r10d
  int v33; // eax
  __int16 v34; // ax
  int DigitizerForDevice; // eax
  __int64 v36; // rcx
  ULONG v38; // [rsp+50h] [rbp-49h]
  ULONG UsageValue; // [rsp+54h] [rbp-45h] BYREF
  PCHAR v40; // [rsp+58h] [rbp-41h]
  struct _HIDP_PREPARSED_DATA *v41; // [rsp+60h] [rbp-39h]
  ULONG UsageLength; // [rsp+68h] [rbp-31h] BYREF
  int v43; // [rsp+6Ch] [rbp-2Dh] BYREF
  ULONG v44; // [rsp+70h] [rbp-29h] BYREF
  int v45; // [rsp+74h] [rbp-25h] BYREF
  int v46; // [rsp+78h] [rbp-21h] BYREF
  const char *v47; // [rsp+80h] [rbp-19h] BYREF
  __int64 v48; // [rsp+88h] [rbp-11h] BYREF
  __int64 v49; // [rsp+90h] [rbp-9h] BYREF
  USHORT UsageList[4]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v51; // [rsp+A0h] [rbp+7h]

  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 32);
  v48 = 0LL;
  v40 = Report;
  v6 = Report;
  v38 = ReportLength;
  v41 = PreparsedData;
  *(_OWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  v7 = 0;
  *((_DWORD *)a4 + 6) = 0;
  v8 = 0;
  v9 = (struct InteractiveControlDevice *)*((_QWORD *)a1 + 23);
  UsageLength = 5;
  *(_QWORD *)UsageList = 0LL;
  v51 = 0;
  if ( v9 == (struct InteractiveControlDevice *)((char *)a1 + 184) )
    return (unsigned int)v7;
  v11 = (struct InteractiveControlDevice *)((char *)a1 + 184);
  do
  {
    UsageValue = 0;
    v12 = v9;
    v13 = v9;
    v9 = *(struct InteractiveControlDevice **)v9;
    if ( *((_DWORD *)v12 + 25) )
      continue;
    v14 = *((_DWORD *)v12 + 4);
    if ( ((v14 - 1) & 0xFFFFFFF9) != 0 || v14 == 3 )
    {
      v15 = (USAGE *)((char *)v13 + 24);
      ScaledUsageValue = HidP_GetScaledUsageValue(
                           HidP_Input,
                           *((_WORD *)v13 + 12),
                           *((_WORD *)v13 + 15),
                           *((_WORD *)v13 + 40),
                           (PLONG)&UsageValue,
                           PreparsedData,
                           v6,
                           ReportLength);
      v19 = UsageValue;
      v7 = ScaledUsageValue;
    }
    else
    {
      v15 = (USAGE *)((char *)v12 + 24);
      if ( v14 == 1 )
      {
        v16 = HidP_GetUsageValue(
                HidP_Input,
                *v15,
                *((_WORD *)v12 + 15),
                *((_WORD *)v12 + 40),
                &UsageValue,
                PreparsedData,
                v6,
                ReportLength);
        v19 = UsageValue;
        v7 = v16;
        if ( (signed int)UsageValue < *((_DWORD *)v13 + 16) || (signed int)UsageValue > *((_DWORD *)v13 + 17) )
          v7 = -2146369535;
      }
      else
      {
        UsageLength = 5;
        Usages = HidP_GetUsages(
                   HidP_Input,
                   *v15,
                   *((_WORD *)v12 + 15),
                   UsageList,
                   &UsageLength,
                   PreparsedData,
                   v6,
                   ReportLength);
        v21 = 0LL;
        v7 = Usages;
        if ( UsageLength )
        {
          v17 = *((unsigned __int16 *)v13 + 40);
          while ( UsageList[v21] != (_WORD)v17 )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= UsageLength )
              goto LABEL_14;
          }
          v19 = 1LL;
          UsageValue = 1;
        }
        else
        {
LABEL_14:
          v19 = UsageValue;
        }
      }
    }
    if ( v7 < 0 )
    {
      if ( v7 != -2146369535 && (unsigned int)dword_1C0357150 > 2 )
      {
        v43 = *((unsigned __int16 *)a1 + 40);
        v44 = v38;
        v45 = *((_DWORD *)v13 + 4);
        v47 = "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.";
        v46 = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v19,
          byte_1C031FDA2,
          v17,
          v18,
          (void **)&v47,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43);
      }
      v7 = 0;
      goto LABEL_53;
    }
    switch ( *((_DWORD *)v13 + 4) )
    {
      case 1:
        if ( *v15 == 1 )
        {
          v34 = *((_WORD *)v13 + 40);
          if ( v34 == 48 )
          {
            LODWORD(v48) = v19;
LABEL_51:
            *((_DWORD *)a4 + 5) |= *((_DWORD *)v13 + 24);
            goto LABEL_52;
          }
          if ( v34 == 49 )
          {
            HIDWORD(v48) = v19;
            goto LABEL_51;
          }
        }
LABEL_52:
        v8 = 1;
        goto LABEL_53;
      case 3:
        if ( (_DWORD)v19 )
        {
          if ( *((_DWORD *)v13 + 28) )
          {
            ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v13, v19);
            v27 = *((_DWORD *)v13 + 26);
            v28 = v27 + ScaledComponentValue;
            v29 = *((_DWORD *)v13 + 27);
            *((_DWORD *)v13 + 26) = v28;
            v30 = v28 / v29;
            v31 = v30 * v29;
            v32 = v30;
            *((_DWORD *)a4 + 6) = v31;
            if ( (v27 ^ *((_DWORD *)v13 + 26)) < 0 )
            {
              v33 = *((_DWORD *)v13 + 27);
              if ( *((int *)v13 + 26) <= 0 )
                *((_DWORD *)a4 + 6) = v31 - v33;
              else
                *((_DWORD *)a4 + 6) = v31 + v33;
            }
            *((_DWORD *)a4 + 6) = *((_DWORD *)v13 + 27) * v32;
            *((_DWORD *)v13 + 26) -= *((_DWORD *)v13 + 27) * v32;
          }
          else if ( (unsigned int)dword_1C0357150 > 2 )
          {
            v25 = *((_DWORD *)v13 + 27);
            v45 = 0;
            v46 = v25;
            v44 = *((_DWORD *)v13 + 26);
            v49 = (__int64)"InteractiveControlParser::ParseInputReport -> Invalid component configuration";
            v43 = 3;
            LODWORD(v47) = v7;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v19,
              byte_1C031FD26,
              v17,
              v18,
              (void **)&v49,
              (__int64)&v47,
              (__int64)&v43,
              (__int64)&v44,
              (__int64)&v45,
              (__int64)&v46);
          }
        }
        goto LABEL_53;
      case 5:
      case 7:
        if ( (_DWORD)v19 )
          *((_DWORD *)a4 + 5) |= *((_DWORD *)v13 + 24);
        goto LABEL_53;
    }
    if ( *((_DWORD *)v13 + 4) == 8 && (_DWORD)v19 )
    {
      *((_DWORD *)a4 + 5) |= *((_DWORD *)v13 + 24);
      v23 = InteractiveControlParser::GetScaledComponentValue(v13, v19);
      UsageValue = v23;
      if ( *((_DWORD *)a1 + 43) == 1 )
      {
        *((_DWORD *)a1 + 55) = v23;
      }
      else
      {
        v24 = *((_WORD *)v13 + 40);
        if ( v24 == 72 )
        {
          *((_DWORD *)a1 + 55) = v23;
          goto LABEL_53;
        }
        if ( v24 != 73 )
          goto LABEL_53;
      }
      *((_DWORD *)a1 + 56) = v23;
    }
LABEL_53:
    PreparsedData = v41;
    v11 = (struct InteractiveControlDevice *)((char *)a1 + 184);
    v6 = v40;
    ReportLength = v38;
  }
  while ( v9 != v11 );
  if ( v8 )
  {
    if ( *((_QWORD *)a1 + 30) )
      goto LABEL_63;
    if ( *((_DWORD *)a1 + 62) != 100 )
      goto LABEL_61;
    if ( (unsigned int)dword_1C0357150 > 3 )
    {
      v49 = (__int64)"No mapped digitizer found for positional data. Attempting to rematch...";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1C0357150,
        byte_1C031FCF6,
        0LL,
        0LL,
        (void **)&v49);
    }
    DigitizerForDevice = InteractiveControlParser::FindDigitizerForDevice(a1);
    *((_DWORD *)a1 + 62) = 0;
    if ( DigitizerForDevice < 0 )
    {
LABEL_61:
      *((_DWORD *)a4 + 5) &= ~2u;
      v8 = 0;
    }
    ++*((_DWORD *)a1 + 62);
    if ( v8 )
    {
LABEL_63:
      v36 = *((_QWORD *)a1 + 30);
      if ( v36 )
        RIMTransformCoordinatesFromDigitizer(v36, &v48, (char *)a4 + 12, (char *)a4 + 4);
    }
  }
  return (unsigned int)v7;
}
