/*
 * XREFs of ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01DEE38
 * Callers:
 *     EnablePTPDevices @ 0x1C0148970 (EnablePTPDevices.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0162240 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C01DEE00 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C01E26B0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C017C210 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01DE154 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01DFE84 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PTPTelemetry::PTPConfigUpdateEx(struct DEVICEINFO *const a1)
{
  bool v2; // bl
  unsigned int v3; // edi
  bool v4; // r14
  bool v5; // r15
  struct tagRECT v6; // xmm6
  struct tagRECT v7; // xmm7
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DEVICEINFO *i; // rdx
  bool v11[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v12; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v13; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v14; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v15; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v16[5]; // [rsp+A8h] [rbp-60h] BYREF
  int v17; // [rsp+BCh] [rbp-4Ch]
  int v18; // [rsp+C0h] [rbp-48h]
  unsigned int v19; // [rsp+C4h] [rbp-44h]
  int v20; // [rsp+C8h] [rbp-40h]
  int v21; // [rsp+CCh] [rbp-3Ch]
  int v22; // [rsp+D0h] [rbp-38h]
  int v23; // [rsp+D4h] [rbp-34h]
  int v24; // [rsp+D8h] [rbp-30h]
  int v25; // [rsp+DCh] [rbp-2Ch]
  int v26; // [rsp+E0h] [rbp-28h]
  char v27; // [rsp+E8h] [rbp-20h] BYREF
  char v28; // [rsp+F8h] [rbp-10h] BYREF

  v13.Buffer = (PWSTR)&v27;
  *(_DWORD *)&v11[4] = 0;
  *(_QWORD *)&v13.Length = 0x100000LL;
  v12.Buffer = (PWSTR)&v28;
  *(_QWORD *)&v12.Length = 0x100000LL;
  v2 = 0;
  v11[0] = 1;
  v11[1] = 0;
  v16[1] = -__CFSHR__(HIDWORD(gTouchPadParameters), 3);
  v11[2] = 0;
  v3 = 0;
  v4 = 0;
  v16[2] = -__CFSHR__(HIDWORD(gTouchPadParameters), 4);
  v16[0] = gPTPEnabled;
  v16[3] = DWORD2(gTouchPadParameters);
  v14 = 0LL;
  v16[4] = -__CFSHR__(HIDWORD(gTouchPadParameters), 10);
  v15 = 0LL;
  v17 = -__CFSHR__(*(&qword_1C0294F10 + 1), 3);
  v25 = v17;
  v18 = -__CFSHR__(*(&qword_1C0294F10 + 1), 5);
  v19 = qword_1C0294F10;
  v20 = -__CFSHR__(HIDWORD(gTouchPadParameters), 8);
  v21 = -__CFSHR__(HIDWORD(gTouchPadParameters), 9);
  v22 = -__CFSHR__(HIDWORD(gTouchPadParameters), 11);
  v23 = -(*(_BYTE *)(&qword_1C0294F10 + 1) & 1);
  v24 = -__CFSHR__(*(&qword_1C0294F10 + 1), 2);
  v26 = -__CFSHR__(*(&qword_1C0294F10 + 1), 7);
  if ( a1 )
  {
    v8 = *((_QWORD *)a1 + 59);
    v5 = 0;
    PTPTelemetry::s_HasTpDevice = 1;
    v9 = *(unsigned int *)(v8 + 952);
    switch ( (_DWORD)v9 )
    {
      case 1:
        v3 = 1;
        break;
      case 2:
        v3 = 2;
        break;
      case 3:
        v3 = 3;
        break;
      case 0:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(
          v9,
          (unsigned int)-__CFSHR__(*(&qword_1C0294F10 + 1), 7),
          (unsigned int)-__CFSHR__(HIDWORD(gTouchPadParameters), 11));
        v8 = *((_QWORD *)a1 + 59);
        break;
    }
    v6 = *(struct tagRECT *)(v8 + 124);
    v7 = *(struct tagRECT *)(v8 + 140);
    RimTelemetry::GetHidVidPidStrings(a1, &v13, &v12);
    for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) == 0 )
      {
        if ( !*((_BYTE *)i + 48) && !*((_WORD *)i + 440) )
          v2 = 1;
      }
      else if ( (unsigned int)(*(_DWORD *)(*((_QWORD *)i + 59) + 24LL) - 1) <= 3 )
      {
        v4 = 1;
      }
    }
  }
  else
  {
    PTPTelemetry::GetDeviceData(&v13, &v12, &v11[1], &v11[2], (unsigned int *)&v11[4], v11, &v14, &v15);
    v3 = *(_DWORD *)&v11[4];
    v5 = v11[0];
    v2 = v11[1];
    v4 = v11[2];
    v6 = v14;
    v7 = v15;
  }
  if ( PTPTelemetry::s_HasTpDevice )
  {
    v15 = v7;
    v14 = v6;
    TraceLoggingPTPSettingsConfigEvent((struct tagTPSETTINGS *)v16, v3, v5, v13.Buffer, v12.Buffer, v2, v4, &v14, &v15);
  }
}
