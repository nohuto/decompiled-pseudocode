/*
 * XREFs of NVMeLogEtwControllerInfo @ 0x1C0005BE0
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C0005F00 (NVMeHwPassiveInitialize.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 * Callees:
 *     FillControllerConfiguration @ 0x1C0005CB4 (FillControllerConfiguration.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeLogEtwControllerInfo(__int64 a1)
{
  __int64 result; // rax
  _BYTE v3[672]; // [rsp+D0h] [rbp-2B8h] BYREF

  memset(v3, 0, sizeof(v3));
  result = FillControllerConfiguration(a1, v3);
  if ( *(_BYTE *)(a1 + 22) )
    result = StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 3832) )
  {
    if ( *(_BYTE *)(a1 + 22) )
      return StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  return result;
}
