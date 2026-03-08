/*
 * XREFs of VslRegisterSecureSystemProcess @ 0x140549E3C
 * Callers:
 *     PspInitPhase1 @ 0x140B422C8 (PspInitPhase1.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 VslRegisterSecureSystemProcess()
{
  ULONG_PTR v0; // rbx
  __int64 result; // rax
  _QWORD v2[14]; // [rsp+20h] [rbp-88h] BYREF

  v0 = PsSecureSystemProcess;
  memset(v2, 0, 0x68uLL);
  v2[1] = *(_QWORD *)(PsSecureSystemProcess + 1088);
  v2[2] = PsSecureSystemProcess;
  result = VslpEnterIumSecureMode(2u, 5, 0, (__int64)v2);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(v0 + 992) = v2[3];
    *(_QWORD *)(v0 + 992) = v2[3] | 1LL;
  }
  return result;
}
