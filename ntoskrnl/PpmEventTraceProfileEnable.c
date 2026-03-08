/*
 * XREFs of PpmEventTraceProfileEnable @ 0x140825884
 * Callers:
 *     PpmEnableProfile @ 0x140825808 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x14099A1A4 (PpmDisableProfile.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceProfileEnable(char a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  REGHANDLE v4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = a1;
  v2 = &PPM_ETW_PROCESSOR_PROFILE_DISABLED;
  v3 = (const EVENT_DESCRIPTOR *)L"l";
  if ( !a2 )
    v3 = &PPM_ETW_PROCESSOR_PROFILE_DISABLED;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 1;
      LOBYTE(v2) = EtwWrite(v4, v3, 0LL, 1u, &UserData);
    }
  }
  return (char)v2;
}
