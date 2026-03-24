/*
 * XREFs of VslFastFlushSecureRangeList @ 0x1403905F4
 * Callers:
 *     HvlpFastFlushListTb @ 0x140390044 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1404FAE50 (HvlpFastFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

NTSTATUS __fastcall VslFastFlushSecureRangeList(_QWORD *a1, unsigned int a2)
{
  char v4; // bl
  _KPROCESS *Process; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // r8
  bool v8; // cc
  _QWORD v10[14]; // [rsp+20h] [rbp-88h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 255;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x68uLL);
  if ( !a2 )
    return 0;
  v6 = &v10[2];
  v7 = a2;
  do
  {
    v8 = *a1 <= 0x7FFFFFFEFFFFuLL;
    *v6 = *a1++;
    if ( v8 )
      v4 = 1;
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( !v4 )
    return 0;
  v10[1] = Process->SecureState.SecureHandle;
  return VslpEnterIumSecureMode(2u, 241, 0, (__int64)v10);
}
