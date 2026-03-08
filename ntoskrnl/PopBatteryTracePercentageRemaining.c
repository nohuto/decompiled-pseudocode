/*
 * XREFs of PopBatteryTracePercentageRemaining @ 0x14099280C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTracePercentageRemaining(int a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  BOOL v8; // ebx
  REGHANDLE v9; // r15
  BOOL v11; // [rsp+38h] [rbp-A9h] BYREF
  int v12; // [rsp+3Ch] [rbp-A5h] BYREF
  int v13; // [rsp+40h] [rbp-A1h] BYREF
  BOOL v14; // [rsp+44h] [rbp-9Dh] BYREF
  int v15; // [rsp+48h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-89h] BYREF
  int *v17; // [rsp+68h] [rbp-79h]
  int v18; // [rsp+70h] [rbp-71h]
  int v19; // [rsp+74h] [rbp-6Dh]
  BOOL *v20; // [rsp+78h] [rbp-69h]
  int v21; // [rsp+80h] [rbp-61h]
  int v22; // [rsp+84h] [rbp-5Dh]
  int *v23; // [rsp+88h] [rbp-59h]
  int v24; // [rsp+90h] [rbp-51h]
  int v25; // [rsp+94h] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+98h] [rbp-49h] BYREF
  int *v27; // [rsp+B8h] [rbp-29h]
  int v28; // [rsp+C0h] [rbp-21h]
  int v29; // [rsp+C4h] [rbp-1Dh]
  int *v30; // [rsp+C8h] [rbp-19h]
  int v31; // [rsp+D0h] [rbp-11h]
  int v32; // [rsp+D4h] [rbp-Dh]
  BOOL *v33; // [rsp+D8h] [rbp-9h]
  int v34; // [rsp+E0h] [rbp-1h]
  int v35; // [rsp+E4h] [rbp+3h]
  int *v36; // [rsp+E8h] [rbp+7h]
  int v37; // [rsp+F0h] [rbp+Fh]
  int v38; // [rsp+F4h] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+5Fh] BYREF
  int v40; // [rsp+148h] [rbp+67h] BYREF
  int v41; // [rsp+150h] [rbp+6Fh] BYREF
  int v42; // [rsp+160h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v42 = a4;
  v41 = a2;
  v40 = a1;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = a3 == 0;
  v11 = v8;
  if ( PopBatteryEtwRegistered )
  {
    v9 = PopBatteryEtwHandle;
    LOBYTE(v4) = EtwEventEnabled(PopBatteryEtwHandle, &BATTERY_EVT_BATTERY_PERCENT_REMAINING);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      UserData.Ptr = (ULONGLONG)&v40;
      UserData.Size = 4;
      v17 = &v41;
      v20 = &v11;
      v23 = &v42;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      LOBYTE(v4) = EtwWrite(v9, &BATTERY_EVT_BATTERY_PERCENT_REMAINING, 0LL, 4u, &UserData);
      v5 = v42;
      v6 = v41;
      v7 = v40;
      v8 = v11;
    }
  }
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v27 = &v12;
      v12 = v7;
      v30 = &v13;
      v33 = &v14;
      v36 = &v15;
      v28 = 4;
      v13 = v6;
      v31 = 4;
      v14 = v8;
      v34 = 4;
      v15 = v5;
      v37 = 4;
      LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140C03928,
                     (unsigned __int8 *)&dword_140030BDC,
                     0LL,
                     0LL,
                     6u,
                     &v26);
    }
  }
  return (char)v4;
}
