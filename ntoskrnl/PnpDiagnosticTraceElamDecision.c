/*
 * XREFs of PnpDiagnosticTraceElamDecision @ 0x140389454
 * Callers:
 *     PnpDoPolicyCheck @ 0x140B5910C (PnpDoPolicyCheck.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagnosticTraceElamDecision(__int64 a1, int a2, int a3, int a4)
{
  REGHANDLE v4; // rdi
  unsigned int v5; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  int *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  int *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+98h] [rbp+28h] BYREF
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  int v14; // [rsp+A8h] [rbp+38h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v4 = PnpEtwHandle;
  v5 = 0;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_PolicyCheck) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v12;
    v9 = 4LL;
    v8 = &v13;
    v11 = 4LL;
    v10 = &v14;
    return (unsigned int)EtwWrite(v4, &KMPnPEvt_EarlyLaunch_PolicyCheck, 0LL, 3u, &UserData);
  }
  return v5;
}
