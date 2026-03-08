/*
 * XREFs of ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z @ 0x1C02FF488
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1C02FEFE0 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        unsigned __int16 *a3,
        int a4,
        ULONGLONG Value,
        LPCGUID ActivityId)
{
  const GUID *v6; // rbx
  NTSTATUS v8; // eax
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD *v12; // [rsp+50h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+70h] [rbp-98h]
  const GUID *v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  int *v18; // [rsp+88h] [rbp-80h]
  __int64 v19; // [rsp+90h] [rbp-78h]
  unsigned __int16 *v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+A0h] [rbp-68h]
  int v22; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING *p_String; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  _OWORD *v25; // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+C0h] [rbp-48h]
  int v27; // [rsp+C4h] [rbp-44h]
  __int64 *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  _OWORD v30[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-10h]
  __int16 v32; // [rsp+100h] [rbp-8h]
  __int64 v33; // [rsp+130h] [rbp+28h] BYREF
  int v34; // [rsp+140h] [rbp+38h] BYREF

  v34 = a4;
  v33 = a2;
  v6 = ActivityId;
  v31 = 0LL;
  v32 = 0;
  String.Buffer = (wchar_t *)2752512;
  v12 = v30;
  memset(v30, 0, sizeof(v30));
  v8 = RtlInt64ToUnicodeString(Value, 0xAu, (PUNICODE_STRING)&String.Buffer);
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = v33;
    UserData.Ptr = (ULONGLONG)&v9;
    v14 = &v10;
    v18 = &v34;
    v10 = 1;
    v21 = 2 * v34;
    p_String = &String;
    v25 = v12;
    v26 = 2 * ((LOWORD(String.Buffer) >> 1) + 1);
    v28 = &v33;
    *(_DWORD *)&String.Length = (LOWORD(String.Buffer) >> 1) + 1;
    *(_QWORD *)&UserData.Size = 1LL;
    v22 = 0;
    v27 = 0;
    v15 = 4LL;
    v16 = v6;
    v17 = 16LL;
    v19 = 4LL;
    v20 = a3;
    v24 = 4LL;
    v29 = 8LL;
    EtwWrite(SLEEPSTUDY_ETW_PROVIDER_Context[0], &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, v6, 8u, &UserData);
  }
  else
  {
    WdLogSingleEntry1(3LL, v8);
  }
}
