/*
 * XREFs of PopSetMemoryOverwriteRequestAction @ 0x140A9D8B4
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA5DA4 (PopShutdownSystem.c)
 * Callees:
 *     HalGetEnvironmentVariableEx @ 0x1402AF770 (HalGetEnvironmentVariableEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalSetEnvironmentVariableEx @ 0x140502A90 (HalSetEnvironmentVariableEx.c)
 */

void PopSetMemoryOverwriteRequestAction()
{
  _BYTE v0[4]; // [rsp+30h] [rbp-30h] BYREF
  int v1; // [rsp+34h] [rbp-2Ch] BYREF
  int v2; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v3[4]; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  v3[0] = -502711874;
  v3[1] = 1102983892;
  v3[2] = 2139705505;
  v3[3] = 697881733;
  if ( !PopErrataSkipMemoryOverwriteRequestControlLockAction )
  {
    v0[0] = -1;
    v1 = 1;
    if ( (int)HalGetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", (int)v3, (__int64)v0, &v1, (__int64)&v2) >= 0
      && v1 == 1 )
    {
      v0[0] &= 0xEEu;
      HalSetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", (int)v3, (__int64)v0, 1, v2);
    }
  }
}
