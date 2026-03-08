/*
 * XREFs of PopDiagTraceFxComponentAccounting @ 0x14098C04C
 * Callers:
 *     PopFxStopDeviceAccounting @ 0x14058975C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagQueryDevicePropertyString @ 0x140989088 (PopDiagQueryDevicePropertyString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceFxComponentAccounting(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned __int16 *a4,
        char a5,
        char a6)
{
  REGHANDLE v8; // rbx
  struct _DEVICE_OBJECT *v9; // rbx
  bool v10; // di
  int DevicePropertyString; // eax
  wchar_t *Buffer; // r14
  bool v13; // bl
  wchar_t *v14; // rsi
  int v15; // edx
  __int64 v16; // rcx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  char *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  _DWORD *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  _DWORD v40[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  _QWORD *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  _QWORD *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  __int64 *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  _DWORD *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  wchar_t *v53; // [rsp+180h] [rbp+80h]
  _DWORD v54[2]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  wchar_t *v57; // [rsp+1A0h] [rbp+A0h]
  _DWORD v58[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD *v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]
  __int64 v61; // [rsp+1C0h] [rbp+C0h]
  _DWORD v62[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+1D0h] [rbp+D0h]
  __int64 v64; // [rsp+1D8h] [rbp+D8h]
  int v65; // [rsp+238h] [rbp+138h] BYREF

  v65 = a2;
  v19 = a1;
  DestinationString = 0LL;
  v21 = 0LL;
  RtlInitUnicodeString(&DestinationString, &word_1408834C0);
  RtlInitUnicodeString(&v21, &word_1408834C0);
  if ( PopDiagSleepStudyHandleRegistered )
  {
    v8 = PopDiagSleepStudyHandle;
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_COMPONENT_ACCOUNTING) )
    {
      v17 = PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      UserData.Ptr = (ULONGLONG)&v17;
      v27 = 8LL;
      v26 = &v19;
      v29 = 4LL;
      v28 = &v65;
      v31 = 8LL;
      v30 = &a5;
      v33 = 8LL;
      v32 = &PopWnfCsEnterScenarioId;
      EtwWrite(v8, &SLEEPSTUDY_EVT_SCENARIO_COMPONENT_ACCOUNTING, 0LL, 5u, &UserData);
      if ( a6 )
      {
        if ( !PopDiagFxAccountingTelemetryDisabled )
        {
          v9 = *(struct _DEVICE_OBJECT **)(v19 + 32);
          v10 = (int)PopDiagQueryDevicePropertyString(v9, DevicePropertyClassName, (__int64)&DestinationString) >= 0;
          DevicePropertyString = PopDiagQueryDevicePropertyString(v9, DevicePropertyClassGuid, (__int64)&v21);
          Buffer = DestinationString.Buffer;
          v13 = DevicePropertyString >= 0;
          v14 = v21.Buffer;
          if ( (unsigned int)dword_140C06470 > 5 && tlgKeywordOn((__int64)&dword_140C06470, 0x400000000000LL) )
          {
            v22 = PopWnfCsEnterScenarioId;
            v36 = 8LL;
            v35 = &v22;
            v15 = *(unsigned __int16 *)(v19 + 40);
            v16 = *(_QWORD *)(v19 + 48);
            v37 = v40;
            v18 = v65;
            v41 = &v18;
            v23 = *a3;
            v43 = &v23;
            v45 = a3 + 2;
            v47 = a3 + 7;
            v24 = a3[1];
            v49 = &v24;
            v51 = v54;
            v54[0] = DestinationString.Length;
            v55 = v58;
            v58[0] = v21.Length;
            v59 = v62;
            v61 = *((_QWORD *)a4 + 1);
            v62[0] = *a4;
            p_DestinationString = &DestinationString;
            v39 = v16;
            v40[0] = v15;
            v38 = 2LL;
            v40[1] = 0;
            v42 = 4LL;
            v44 = 8LL;
            v46 = 40LL;
            v48 = 40LL;
            v50 = 8LL;
            v52 = 2LL;
            v53 = Buffer;
            v54[1] = 0;
            v56 = 2LL;
            v57 = v14;
            v58[1] = 0;
            v60 = 2LL;
            v62[1] = 0;
            *(_QWORD *)&DestinationString.Length = 0x1000000LL;
            v64 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C06470,
              (unsigned __int8 *)&word_14002F166,
              0LL,
              0LL,
              0x11u,
              &v34);
          }
          if ( v10 )
            ExFreePoolWithTag(Buffer, 0x67696450u);
          if ( v13 )
            ExFreePoolWithTag(v14, 0x67696450u);
        }
      }
    }
  }
}
