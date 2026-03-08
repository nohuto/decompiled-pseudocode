/*
 * XREFs of PpmEventTraceProfileChange @ 0x140996DA0
 * Callers:
 *     PpmApplyProfile @ 0x14099A040 (PpmApplyProfile.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceProfileChange(__int64 a1, __int64 a2)
{
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_CHANGE) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = a1 + 8;
      UserData.Size = 1;
      v6 = a2 + 8;
      v7 = 1;
      EtwWrite(v4, &PPM_ETW_PROCESSOR_PROFILE_CHANGE, 0LL, 2u, &UserData);
    }
  }
}
