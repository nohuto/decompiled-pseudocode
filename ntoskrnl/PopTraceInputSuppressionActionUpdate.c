/*
 * XREFs of PopTraceInputSuppressionActionUpdate @ 0x14098F810
 * Callers:
 *     PopEvaluateInputSuppressionAction @ 0x1409912C4 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopTraceInputSuppressionActionUpdate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7)
{
  char v7; // r9
  char v8; // r10
  char v9; // r11
  char v10; // [rsp+30h] [rbp-91h] BYREF
  char v11; // [rsp+31h] [rbp-90h] BYREF
  char v12; // [rsp+32h] [rbp-8Fh] BYREF
  char v13; // [rsp+33h] [rbp-8Eh] BYREF
  bool v14; // [rsp+34h] [rbp-8Dh] BYREF
  char v15; // [rsp+35h] [rbp-8Ch] BYREF
  int v16; // [rsp+38h] [rbp-89h] BYREF
  __int64 v17; // [rsp+40h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-71h] BYREF
  char *v19; // [rsp+70h] [rbp-51h]
  __int64 v20; // [rsp+78h] [rbp-49h]
  char *v21; // [rsp+80h] [rbp-41h]
  __int64 v22; // [rsp+88h] [rbp-39h]
  char *v23; // [rsp+90h] [rbp-31h]
  __int64 v24; // [rsp+98h] [rbp-29h]
  char *v25; // [rsp+A0h] [rbp-21h]
  __int64 v26; // [rsp+A8h] [rbp-19h]
  bool *v27; // [rsp+B0h] [rbp-11h]
  __int64 v28; // [rsp+B8h] [rbp-9h]
  char *v29; // [rsp+C0h] [rbp-1h]
  __int64 v30; // [rsp+C8h] [rbp+7h]
  int *v31; // [rsp+D0h] [rbp+Fh]
  __int64 v32; // [rsp+D8h] [rbp+17h]
  __int64 *v33; // [rsp+E0h] [rbp+1Fh]
  __int64 v34; // [rsp+E8h] [rbp+27h]

  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v10 = PopIgnoreLidStateForInputSuppression;
      v20 = 1LL;
      v19 = &v10;
      v11 = v9;
      v21 = &v11;
      v14 = v7 == 0;
      v22 = 1LL;
      v23 = &v12;
      v13 = a5;
      v25 = &v13;
      v27 = &v14;
      v15 = PopEnableInputSuppression;
      v29 = &v15;
      v16 = a7;
      v31 = &v16;
      v17 = PopWnfCsEnterScenarioId;
      v33 = &v17;
      v12 = v8;
      v24 = 1LL;
      v26 = 1LL;
      v28 = 1LL;
      v30 = 1LL;
      v32 = 4LL;
      v34 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&byte_14002E12F,
        0LL,
        0LL,
        0xAu,
        &v18);
    }
  }
}
