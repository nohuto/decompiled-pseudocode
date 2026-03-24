/*
 * XREFs of NVMeEnableThrottling @ 0x1C000E9A8
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 * Callees:
 *     IsDumpMode @ 0x1C000A674 (IsDumpMode.c)
 *     NVMeRegisterThrottling @ 0x1C001529C (NVMeRegisterThrottling.c)
 */

char __fastcall NVMeEnableThrottling(_DWORD *a1)
{
  char result; // al
  __int64 v3; // rcx

  result = IsDumpMode((__int64)a1);
  if ( !result )
  {
    NVMeRegisterThrottling(v3, 0LL, *(unsigned int *)(v3 + 132));
    NVMeRegisterThrottling(a1, 1LL, (unsigned int)a1[33]);
    NVMeRegisterThrottling(a1, 2LL, (unsigned int)a1[33]);
    NVMeRegisterThrottling(a1, 3LL, (unsigned int)a1[33]);
    NVMeRegisterThrottling(a1, 4LL, (unsigned int)a1[33]);
    if ( (a1[6] & 0x80u) == 0 )
      NVMeRegisterThrottling(a1, 5LL, (unsigned int)a1[34]);
    NVMeRegisterThrottling(a1, 6LL, (unsigned int)a1[33]);
    return NVMeRegisterThrottling(a1, 7LL, (unsigned int)a1[33]);
  }
  return result;
}
