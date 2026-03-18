/*
 * XREFs of NVMeLogEtwControllerInfo @ 0x1C00088CC
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C0008540 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003750 (__security_check_cookie.c)
 *     memset @ 0x1C0004B80 (memset.c)
 *     FillControllerConfiguration @ 0x1C0007808 (FillControllerConfiguration.c)
 */

__int64 __fastcall NVMeLogEtwControllerInfo(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[170]; // [rsp+D0h] [rbp-2B8h] BYREF

  memset(v3, 0, sizeof(v3));
  result = FillControllerConfiguration(a1, v3);
  if ( *(_BYTE *)(a1 + 22) )
    result = StorPortExtendedFunction(105LL, a1, 0LL);
  if ( *(_BYTE *)(a1 + 4032) )
  {
    if ( *(_BYTE *)(a1 + 22) )
      return StorPortExtendedFunction(87LL, a1, 0LL);
  }
  return result;
}
