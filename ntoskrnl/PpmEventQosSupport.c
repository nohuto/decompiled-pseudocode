/*
 * XREFs of PpmEventQosSupport @ 0x14075DF8C
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x14075DE18 (PpmPerfUpdateDomainPolicy.c)
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventQosSupport(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v3; // rdi
  BOOL v5; // [rsp+30h] [rbp-40h] BYREF
  BOOL v6; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  BOOL *v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+50h] [rbp-20h]
  int v10; // [rsp+54h] [rbp-1Ch]
  int *v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  v1 = &PPM_ETW_QOS_SUPPORT_CHANGED;
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_QOS_SUPPORT_RUNDOWN;
  if ( !a1 )
    v2 = &PPM_ETW_QOS_SUPPORT_CHANGED;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      UserData.Size = 4;
      v9 = 4;
      v5 = PpmPerfSchedulerDirectedPerfStatesSupported != 0;
      v12 = 4;
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v6 = PpmPerfQosEnabled != 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = &v6;
      v11 = &PpmPerfQosDisableReasons;
      LOBYTE(v1) = EtwWrite(v3, v2, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}
