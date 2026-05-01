/*
 * XREFs of ?HampSlsStart@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180040238
 * Callers:
 *     ?HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180040198 (-HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180086088 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall HampSlsStart(struct _HAM_SLEEP_STUDY_CONTEXT *a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-40h] BYREF
  int *v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]

  v6 = 0LL;
  v2 = SleepstudyHelperCreateLibrary(1346912589LL, &v6);
  v3 = v2;
  if ( v2 != -1073741637 )
  {
    if ( v2 >= 0 )
    {
      v4 = 0LL;
      *((_QWORD *)a1 + 1) = v6;
      v6 = 0LL;
      goto LABEL_4;
    }
    MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    {
      v11 = 0;
      v9 = &v7;
      v7 = v3;
      v10 = 4;
      tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1800A237D, 0LL, 0LL, 3u, &v8);
    }
  }
  v4 = v6;
LABEL_4:
  if ( v4 )
    SleepstudyHelperDestroyLibrary();
}
