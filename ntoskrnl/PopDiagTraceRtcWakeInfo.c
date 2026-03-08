/*
 * XREFs of PopDiagTraceRtcWakeInfo @ 0x140592130
 * Callers:
 *     PopValidateRTCWake @ 0x140A9E3E4 (PopValidateRTCWake.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToSystemTime @ 0x140A85B30 (PopDiagInterruptTimeToSystemTime.c)
 */

char __fastcall PopDiagTraceRtcWakeInfo(__int64 a1, int a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  char result; // al
  int v8; // r9d
  __int64 v9; // r10
  REGHANDLE v10; // rbx
  int v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v13; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+64h] [rbp-A4h] BYREF
  int v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v19; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v20; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v21; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v22; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v23; // [rsp+80h] [rbp-88h] BYREF
  int v24; // [rsp+84h] [rbp-84h] BYREF
  BOOL v25; // [rsp+88h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v29[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  int *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  unsigned int *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  unsigned int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  unsigned int *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  __int64 *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  __int64 *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  int *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  __int64 *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  _QWORD *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  BOOL *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+198h] [rbp+90h] BYREF
  int *v58; // [rsp+1B8h] [rbp+B0h]
  __int64 v59; // [rsp+1C0h] [rbp+B8h]
  int *v60; // [rsp+1C8h] [rbp+C0h]
  __int64 v61; // [rsp+1D0h] [rbp+C8h]
  int *v62; // [rsp+1D8h] [rbp+D0h]
  __int64 v63; // [rsp+1E0h] [rbp+D8h]
  int *v64; // [rsp+1E8h] [rbp+E0h]
  __int64 v65; // [rsp+1F0h] [rbp+E8h]
  int *v66; // [rsp+1F8h] [rbp+F0h]
  __int64 v67; // [rsp+200h] [rbp+F8h]
  unsigned int *v68; // [rsp+208h] [rbp+100h]
  __int64 v69; // [rsp+210h] [rbp+108h]
  unsigned int *v70; // [rsp+218h] [rbp+110h]
  __int64 v71; // [rsp+220h] [rbp+118h]
  unsigned int *v72; // [rsp+228h] [rbp+120h]
  __int64 v73; // [rsp+230h] [rbp+128h]
  __int64 *v74; // [rsp+238h] [rbp+130h]
  __int64 v75; // [rsp+240h] [rbp+138h]
  __int64 *v76; // [rsp+248h] [rbp+140h]
  __int64 v77; // [rsp+250h] [rbp+148h]
  int *v78; // [rsp+258h] [rbp+150h]
  __int64 v79; // [rsp+260h] [rbp+158h]
  __int64 *v80; // [rsp+268h] [rbp+160h]
  __int64 v81; // [rsp+270h] [rbp+168h]
  _QWORD *v82; // [rsp+278h] [rbp+170h]
  __int64 v83; // [rsp+280h] [rbp+178h]
  int *v84; // [rsp+288h] [rbp+180h]
  __int64 v85; // [rsp+290h] [rbp+188h]
  int v86; // [rsp+2E0h] [rbp+1D8h] BYREF
  int v87; // [rsp+2E8h] [rbp+1E0h] BYREF
  int v88; // [rsp+2F0h] [rbp+1E8h] BYREF

  v88 = a4;
  v87 = a3;
  v86 = a2;
  v12 = PopFixedWakeSourceMask;
  v26 = 0LL;
  v29[0] = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v13 = ((unsigned int)PopFixedWakeSourceMask >> 3) & 1;
  v15 = ((unsigned int)PopFixedWakeSourceMask >> 2) & 1;
  v14 = ((unsigned int)PopFixedWakeSourceMask >> 4) & 1;
  PopDiagInterruptTimeToSystemTime(qword_140C3CDD0, &v26);
  PopDiagInterruptTimeToSystemTime(qword_140C3CDE8, &v27);
  PopDiagInterruptTimeToSystemTime(qword_140C3CDA8, &v28);
  result = PopDiagInterruptTimeToSystemTime(a7, v29);
  v25 = PopPendingUserPresenceDuringSystemSleep != 0;
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
    if ( result )
    {
      v16 = v86;
      v24 = v8;
      v58 = &v16;
      LOBYTE(v11) = v87;
      v60 = &v11;
      v17 = v88;
      v62 = &v17;
      v18 = a5;
      v64 = &v18;
      v19 = v12;
      v66 = &v19;
      v20 = v13;
      v68 = &v20;
      v21 = v14;
      v70 = &v21;
      v22 = v15;
      v72 = &v22;
      v74 = &v26;
      v76 = &v27;
      v23 = a6;
      v78 = &v23;
      v80 = &v28;
      v82 = v29;
      v84 = &v24;
      v59 = 4LL;
      v61 = v9;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v71 = 4LL;
      v73 = 4LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 4LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 4LL;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C03928,
                 (unsigned __int8 *)byte_14002DEC1,
                 0LL,
                 0LL,
                 0x10u,
                 &v57);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v10 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_RTC_WAKE_INFO);
    if ( result )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v86;
      v32 = 4LL;
      v31 = &v87;
      v34 = 4LL;
      v33 = &v88;
      v36 = 4LL;
      v35 = &a5;
      v38 = 4LL;
      v37 = &v12;
      v39 = &v13;
      v41 = &v14;
      v43 = &v15;
      v45 = &v26;
      v47 = &v27;
      v49 = &a6;
      v51 = &v28;
      v53 = v29;
      v55 = &v25;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 4LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 4LL;
      return EtwWriteEx(v10, &POP_ETW_EVENT_RTC_WAKE_INFO, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
    }
  }
  return result;
}
