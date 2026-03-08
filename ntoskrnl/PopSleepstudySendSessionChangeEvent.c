/*
 * XREFs of PopSleepstudySendSessionChangeEvent @ 0x14087A160
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x140872FAC (PopSleepstudySendSessionChangeWnf.c)
 */

__int64 __fastcall PopSleepstudySendSessionChangeEvent(__int64 a1, __int64 a2)
{
  int *v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rsi
  unsigned __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int64 v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]

  v16 = a1;
  *(_QWORD *)&UserData.Size = 4LL;
  v4 = (int *)(a2 + 32);
  v13 = 4LL;
  v12 = a2 + 32;
  UserData.Ptr = 0xFFFFF780000002C4uLL;
  v5 = a1 + 8;
  v15 = 8LL;
  v6 = (__int64 *)(a2 + 8);
  v7 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v14 = v5;
  v17 = 4LL;
  v18 = &v10;
  v20 = a1 + 40;
  v22 = a1 + 48;
  v24 = a1 + 44;
  v26 = a1 + 52;
  v9 = *(unsigned __int8 *)(a2 + 56);
  v32 = &v9;
  v10 = v7 / 0xA;
  v19 = 8LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v28 = a2 + 8;
  v29 = 8LL;
  v30 = a2;
  v31 = 4LL;
  v33 = 4LL;
  v34 = a2 + 32;
  v35 = 4LL;
  if ( PopDiagHandleRegistered )
    EtwWrite(PopDiagHandle, &POP_ETW_SYSTEM_SESSION_SWITCH, 0LL, 0xDu, &UserData);
  if ( PopDiagSleepStudyHandleRegistered )
    EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_SESSION_SWITCH, 0LL, 0xDu, &UserData);
  return PopSleepstudySendSessionChangeWnf(*v6, *(_DWORD *)a2, *v4);
}
