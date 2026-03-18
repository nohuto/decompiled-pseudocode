/*
 * XREFs of VslMakeCodeCatalog @ 0x1405504C0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslMakeCodeCatalog(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *a1;
  v5[2] = a2;
  result = VslpEnterIumSecureMode(2u, 24, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a1 = v5[2];
  return result;
}
