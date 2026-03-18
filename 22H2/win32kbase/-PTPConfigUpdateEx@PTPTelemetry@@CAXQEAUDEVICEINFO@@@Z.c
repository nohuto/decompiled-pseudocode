/*
 * XREFs of ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01E003C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 *     EnablePTPDevices @ 0x1C0134C80 (EnablePTPDevices.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C014BA50 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x1C01DFC94 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C01DFFE0 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C0170860 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01DF038 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01E0C7C (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 */

void __fastcall PTPTelemetry::PTPConfigUpdateEx(struct DEVICEINFO *const a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  bool v6; // di
  bool v7; // r14
  _DWORD *v8; // rbx
  bool v9; // cf
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 i; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // bl
  struct tagRECT v25; // xmm6
  struct tagRECT v26; // xmm7
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  bool v33[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v34; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v35; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v36; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v39; // [rsp+ACh] [rbp-5Ch]
  unsigned int v40; // [rsp+B0h] [rbp-58h]
  int v41; // [rsp+B4h] [rbp-54h]
  int v42; // [rsp+B8h] [rbp-50h]
  int v43; // [rsp+BCh] [rbp-4Ch]
  int v44; // [rsp+C0h] [rbp-48h]
  int v45; // [rsp+C4h] [rbp-44h]
  int v46; // [rsp+C8h] [rbp-40h]
  int v47; // [rsp+CCh] [rbp-3Ch]
  int v48; // [rsp+D0h] [rbp-38h]
  int v49; // [rsp+D4h] [rbp-34h]
  int v50; // [rsp+D8h] [rbp-30h]
  int v51; // [rsp+DCh] [rbp-2Ch]
  int v52; // [rsp+E0h] [rbp-28h]
  __int16 v53; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v54; // [rsp+F8h] [rbp-10h] BYREF

  *(_QWORD *)&v35.Length = 0x100000LL;
  *(_DWORD *)&v33[4] = 0;
  v35.Buffer = (PWSTR)&v53;
  v53 = 0;
  *(_QWORD *)&v34.Length = 0x100000LL;
  v34.Buffer = (PWSTR)&v54;
  v33[0] = 1;
  v5 = 0;
  v54 = 0;
  v6 = 0;
  v33[1] = 0;
  v7 = 0;
  v33[2] = 0;
  v36 = 0LL;
  v37 = 0LL;
  v8 = (_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  v9 = __CFSHR__(v8[4203], 4);
  v39 = -__CFSHR__(v8[4203], 3);
  v40 = -v9;
  v12 = SGDGetUserSessionState(v39, v40, v10, v11);
  v14 = v8[4205];
  v15 = *(_DWORD *)(v12 + 520);
  v41 = v8[4202];
  v38 = v15;
  v16 = v8[4203];
  v42 = -__CFSHR__(v16, 10);
  v17 = (unsigned int)-__CFSHR__(v14, 3);
  v43 = -__CFSHR__(v14, 3);
  v51 = v43;
  v44 = -__CFSHR__(v14, 5);
  v45 = v8[4204];
  v46 = -__CFSHR__(v16, 8);
  v47 = -__CFSHR__(v16, 9);
  v18 = (unsigned int)-__CFSHR__(v16, 11);
  v48 = v18;
  v49 = -(v14 & 1);
  v50 = -__CFSHR__(v14, 2);
  v19 = (unsigned int)-__CFSHR__(v14, 7);
  v52 = v19;
  if ( a1 )
  {
    v24 = 0;
    *(_BYTE *)(SGDGetUserSessionState(v18, v17, v19, v13) + 11810) = 1;
    v27 = *(_DWORD *)(*((_QWORD *)a1 + 59) + 952LL);
    switch ( v27 )
    {
      case 1:
        v5 = 1;
        break;
      case 2:
        v5 = 2;
        break;
      case 3:
        v5 = 3;
        break;
      case 0:
        *(_DWORD *)&v33[4] = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2017);
        break;
    }
    v28 = *((_QWORD *)a1 + 59);
    v25 = *(struct tagRECT *)(v28 + 124);
    v26 = *(struct tagRECT *)(v28 + 140);
    RimTelemetry::GetHidVidPidStrings(a1, &v35, &v34);
    v21 = *(_QWORD *)(SGDGetUserSessionState(v30, v29, v31, v32) + 16840);
    for ( i = **(_QWORD **)(v21 + 1264); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 200) & 0x80u) == 0 )
      {
        if ( !*(_BYTE *)(i + 48) && !*(_WORD *)(i + 880) )
          v6 = 1;
      }
      else
      {
        v21 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(i + 472) + 24LL) - 1);
        if ( (unsigned int)v21 <= 3 )
          v7 = 1;
      }
    }
  }
  else
  {
    PTPTelemetry::GetDeviceData(&v35, &v34, &v33[1], &v33[2], (unsigned int *)&v33[4], v33, &v36, &v37);
    v5 = *(_DWORD *)&v33[4];
    v24 = v33[0];
    v6 = v33[1];
    v7 = v33[2];
    v25 = v36;
    v26 = v37;
  }
  if ( *(_BYTE *)(SGDGetUserSessionState(v21, i, v22, v23) + 11810) )
  {
    v37 = v26;
    v36 = v25;
    TraceLoggingPTPSettingsConfigEvent(
      (struct tagTPSETTINGS *)&v38,
      v5,
      v24,
      v35.Buffer,
      v34.Buffer,
      v6,
      v7,
      &v36,
      &v37);
  }
}
