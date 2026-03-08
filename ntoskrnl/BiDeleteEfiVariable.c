/*
 * XREFs of BiDeleteEfiVariable @ 0x140A5B6EC
 * Callers:
 *     BiExportEfiBootManager @ 0x140A5B928 (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x140415070 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x140415A10 (ZwSetSystemEnvironmentValueEx.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x14082F784 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x14082F810 (BiReleasePrivilege.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  int v2; // ebx
  unsigned int SystemEnvironmentValue; // eax
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-50h]
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v9[4]; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v9[0] = -1947934879;
  v9[1] = 299013066;
  v9[2] = -536867414;
  DestinationString = 0LL;
  v9[3] = -1943338088;
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    HIDWORD(v6) = 0;
    SystemEnvironmentValue = ZwQuerySystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v9);
    v2 = SystemEnvironmentValue;
    if ( SystemEnvironmentValue == -1073741789 )
    {
      LODWORD(v6) = 1;
      v4 = ZwSetSystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v9);
      v2 = v4;
      if ( v4 < 0 )
        BiLogMessage(4LL, L"Failed to delete \"%ws\" variable. Status: %x", SourceString, (unsigned int)v4, v6);
    }
    else if ( SystemEnvironmentValue == -1073741568 )
    {
      v2 = 0;
    }
    else
    {
      BiLogMessage(4LL, L"Failed to query \"%ws\" variable. Status: %x", SourceString, SystemEnvironmentValue, 0LL);
    }
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v2;
}
