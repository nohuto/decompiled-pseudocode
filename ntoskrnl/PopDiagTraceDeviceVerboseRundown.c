/*
 * XREFs of PopDiagTraceDeviceVerboseRundown @ 0x14098B3E8
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140586438 (PopDiagTraceFxRundown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14059CA0C (PopPepGetDevicePlatformStateDependents.c)
 */

char __fastcall PopDiagTraceDeviceVerboseRundown(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rcx
  UNICODE_STRING *p_DestinationString; // r8
  int Length; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int *v11; // rax
  REGHANDLE v12; // rbx
  __int16 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  signed __int32 v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int16 *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  __int16 *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  __int16 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  __int64 *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  __int64 *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  signed __int32 *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  __int16 *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  wchar_t *Buffer; // [rsp+140h] [rbp+40h]
  int v52; // [rsp+148h] [rbp+48h]
  int v53; // [rsp+14Ch] [rbp+4Ch]
  int *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  __int64 v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]

  v2 = *(_QWORD *)(a1 + 48);
  v21 = v2;
  v5 = *(_QWORD *)(a1 + 56);
  v18 = 0;
  v14 = *(_WORD *)(v2 + 128) >> 1;
  v15 = *(_WORD *)(v2 + 40) >> 1;
  v16 = *(_WORD *)(v2 + 56) >> 1;
  DestinationString = 0LL;
  PopPepGetDevicePlatformStateDependents(v5, &v18);
  v23 = *(_QWORD *)(v21 + 16);
  v22 = *(_QWORD *)(v21 + 32);
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0);
  if ( *(_QWORD *)(a1 + 1200) )
  {
    p_DestinationString = (UNICODE_STRING *)(a1 + 1192);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, &word_1408834C0);
    p_DestinationString = &DestinationString;
  }
  Length = p_DestinationString->Length;
  *(_QWORD *)&UserData.Size = 8LL;
  v17 = (unsigned __int16)Length >> 1;
  v20 = *(_DWORD *)(a1 + 612);
  UserData.Ptr = (ULONGLONG)&v21;
  v26 = &v14;
  v27 = 2LL;
  v8 = *(unsigned __int16 *)(v2 + 128);
  v28 = *(_QWORD *)(v2 + 136);
  v31 = &v15;
  v29 = v8;
  v30 = 0;
  v32 = 2LL;
  v9 = *(unsigned __int16 *)(v2 + 40);
  v33 = *(_QWORD *)(v2 + 48);
  v36 = &v16;
  v34 = v9;
  v35 = 0;
  v37 = 2LL;
  v10 = *(unsigned __int16 *)(v2 + 56);
  v38 = *(_QWORD *)(v2 + 64);
  v41 = &v18;
  v43 = &v22;
  v45 = &v23;
  v47 = &v19;
  v49 = &v17;
  Buffer = p_DestinationString->Buffer;
  v11 = &v20;
  v54 = &v20;
  v39 = v10;
  v40 = 0;
  v42 = 4LL;
  v44 = 8LL;
  v46 = 8LL;
  v48 = 4LL;
  v50 = 2LL;
  v52 = Length;
  v53 = 0;
  v55 = 4LL;
  if ( PopDiagHandleRegistered )
  {
    v12 = PopDiagHandle;
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN);
    if ( (_BYTE)v11 )
    {
      if ( !a2 )
        LOBYTE(v11) = EtwWrite(v12, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN, &PopDiagActivityId, 0xEu, &UserData);
    }
  }
  if ( PopDiagSleepStudyHandleRegistered )
  {
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &SLEEPSTUDY_EVT_SCENARIO_DEVICE_RUNDOWN);
    if ( (_BYTE)v11 )
    {
      if ( a2 )
      {
        v56 = a2;
        v57 = 8LL;
        LOBYTE(v11) = EtwWrite(
                        PopDiagSleepStudyHandle,
                        &SLEEPSTUDY_EVT_SCENARIO_DEVICE_RUNDOWN,
                        &PopDiagActivityId,
                        0xFu,
                        &UserData);
      }
    }
  }
  return (char)v11;
}
