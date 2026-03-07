void PopDiagTraceFxDeviceAccounting(__int64 a1, __int64 *a2, unsigned __int16 *a3, ...)
{
  REGHANDLE v5; // rbx
  struct _DEVICE_OBJECT *v6; // rbx
  bool v7; // di
  int DevicePropertyString; // eax
  wchar_t *Buffer; // r14
  bool v10; // bl
  wchar_t *v11; // rsi
  int v12; // edx
  __int64 v13; // rcx
  char v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  va_list v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  __int64 *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  _DWORD *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  __int64 v33; // [rsp+110h] [rbp+10h]
  _DWORD v34[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  _QWORD *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  _QWORD *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  __int64 *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  _DWORD *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  wchar_t *v45; // [rsp+170h] [rbp+70h]
  _DWORD v46[2]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  wchar_t *v49; // [rsp+190h] [rbp+90h]
  _DWORD v50[2]; // [rsp+198h] [rbp+98h] BYREF
  _DWORD *v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  __int64 v53; // [rsp+1B0h] [rbp+B0h]
  _DWORD v54[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]
  __int64 v57; // [rsp+238h] [rbp+138h] BYREF
  va_list va; // [rsp+238h] [rbp+138h]
  __int64 v59; // [rsp+240h] [rbp+140h]
  va_list va1; // [rsp+248h] [rbp+148h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v57 = va_arg(va1, _QWORD);
  v59 = va_arg(va1, _QWORD);
  v15 = a1;
  DestinationString = 0LL;
  v17 = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)&cchOriginalDestLength);
  RtlInitUnicodeString(&v17, (PCWSTR)&cchOriginalDestLength);
  if ( PopDiagSleepStudyHandleRegistered )
  {
    v5 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_DEVICE_ACCOUNTING) )
    {
      v14 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v14;
      v23 = 8LL;
      v22 = &v15;
      v25 = 8LL;
      va_copy(v24, va);
      v27 = 8LL;
      v26 = &PopWnfCsEnterScenarioId;
      EtwWriteEx(v5, &SLEEPSTUDY_EVT_SCENARIO_DEVICE_ACCOUNTING, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      if ( (_BYTE)v59 )
      {
        if ( !PopDiagFxAccountingTelemetryDisabled )
        {
          v6 = *(struct _DEVICE_OBJECT **)(v15 + 32);
          v7 = (int)PopDiagQueryDevicePropertyString(v6, DevicePropertyClassName) >= 0;
          DevicePropertyString = PopDiagQueryDevicePropertyString(v6, DevicePropertyClassGuid);
          Buffer = DestinationString.Buffer;
          v10 = DevicePropertyString >= 0;
          v11 = v17.Buffer;
          if ( (unsigned int)dword_140C06470 > 5 && tlgKeywordOn((__int64)&dword_140C06470, 0x400000000000LL) )
          {
            v18 = PopWnfCsEnterScenarioId;
            v30 = 8LL;
            v29 = &v18;
            v12 = *(unsigned __int16 *)(v15 + 40);
            v13 = *(_QWORD *)(v15 + 48);
            v31 = v34;
            v19 = *a2;
            v35 = &v19;
            v37 = a2 + 2;
            v39 = a2 + 7;
            v20 = a2[1];
            v41 = &v20;
            v43 = v46;
            v46[0] = DestinationString.Length;
            v47 = v50;
            v50[0] = v17.Length;
            v51 = v54;
            v53 = *((_QWORD *)a3 + 1);
            v54[0] = *a3;
            p_DestinationString = &DestinationString;
            v33 = v13;
            v34[0] = v12;
            v32 = 2LL;
            v34[1] = 0;
            v36 = 8LL;
            v38 = 40LL;
            v40 = 40LL;
            v42 = 8LL;
            v44 = 2LL;
            v45 = Buffer;
            v46[1] = 0;
            v48 = 2LL;
            v49 = v11;
            v50[1] = 0;
            v52 = 2LL;
            v54[1] = 0;
            *(_QWORD *)&DestinationString.Length = 0x1000000LL;
            v56 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C06470,
              (unsigned __int8 *)word_14002F08A,
              0LL,
              0LL,
              0x10u,
              &v28);
          }
          if ( v7 )
            ExFreePoolWithTag(Buffer, 0x67696450u);
          if ( v10 )
            ExFreePoolWithTag(v11, 0x67696450u);
        }
      }
    }
  }
}
