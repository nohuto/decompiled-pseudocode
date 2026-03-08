/*
 * XREFs of PopFxLogSocSubsystemBlockingTimes @ 0x140982038
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1405926F0 (PopDiagTraceSleepStudyBlocker.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140879AD8 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140983478 (PopPluginQuerySocSubsystemBlockingTime.c)
 */

__int64 __fastcall PopFxLogSocSubsystemBlockingTimes(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rsi
  unsigned __int16 *v9; // r12
  __int64 v10; // rcx
  char v12; // [rsp+28h] [rbp-89h] BYREF
  int v13; // [rsp+2Ch] [rbp-85h] BYREF
  __int64 v14; // [rsp+30h] [rbp-81h] BYREF
  __int64 v15; // [rsp+38h] [rbp-79h] BYREF
  int v16; // [rsp+40h] [rbp-71h] BYREF
  int v17; // [rsp+44h] [rbp-6Dh]
  __int64 v18; // [rsp+48h] [rbp-69h]
  unsigned __int16 *v19; // [rsp+50h] [rbp-61h]
  __int64 v20; // [rsp+58h] [rbp-59h]
  int v21; // [rsp+60h] [rbp-51h]
  int v22; // [rsp+64h] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+68h] [rbp-49h] BYREF
  __int64 v24; // [rsp+78h] [rbp-39h]
  __int64 v25; // [rsp+80h] [rbp-31h]
  int *v26; // [rsp+88h] [rbp-29h]
  __int64 v27; // [rsp+90h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp-19h]
  int v29; // [rsp+A0h] [rbp-11h]
  int v30; // [rsp+A4h] [rbp-Dh]
  __int64 v31; // [rsp+A8h] [rbp-9h]
  __int64 v32; // [rsp+B0h] [rbp-1h]
  __int64 *v33; // [rsp+B8h] [rbp+7h]
  __int64 v34; // [rsp+C0h] [rbp+Fh]
  __int64 *v35; // [rsp+C8h] [rbp+17h]
  __int64 v36; // [rsp+D0h] [rbp+1Fh]

  v15 = PopWnfCsEnterScenarioId;
  v14 = 0LL;
  v17 = 0;
  v12 = 0;
  v3 = 0;
  v13 = 0;
  v4 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  v6 = v4;
  if ( v4 )
  {
    v7 = 0;
    if ( *(_DWORD *)(v4 + 20) )
    {
      while ( 1 )
      {
        v17 = 0;
        v22 = 0;
        v16 = a2;
        v8 = 344LL * v7;
        v9 = (unsigned __int16 *)(v8 + v6 + 40);
        v18 = *(_QWORD *)(v8 + v6 + 64);
        v19 = v9;
        v20 = 0LL;
        v21 = 0;
        if ( !(unsigned __int8)PopPluginQuerySocSubsystemBlockingTime(v5, *(unsigned int *)(v8 + v6 + 60), &v16) )
          break;
        v14 = v20;
        v12 = v15;
        v23.Ptr = (ULONGLONG)&v12;
        *(_QWORD *)&v23.Size = 1LL;
        v24 = v8 + v6 + 88;
        v25 = 16LL;
        v13 = *v9 >> 1;
        v26 = &v13;
        v27 = 4LL;
        v10 = *v9;
        v28 = *(_QWORD *)(v8 + v6 + 48);
        v29 = v10;
        v31 = v8 + v6 + 72;
        v33 = &v14;
        v35 = &v15;
        v30 = 0;
        v32 = 16LL;
        v34 = 8LL;
        v36 = 8LL;
        PopDiagTraceSleepStudyBlocker(v10, &v23);
        if ( ++v7 >= *(_DWORD *)(v6 + 20) )
          return v3;
      }
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v3;
}
