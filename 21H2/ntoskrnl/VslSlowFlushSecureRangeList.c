/*
 * XREFs of VslSlowFlushSecureRangeList @ 0x1404FD860
 * Callers:
 *     HvlpSlowFlushListTb @ 0x1404FB19C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404FB31C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslSlowFlushSecureRangeList(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v9; // rcx
  _KPROCESS *Process; // r8
  unsigned int v11; // eax
  _QWORD v12[14]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4;
  memset(v12, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255;
  v9 = (_QWORD *)(v6 + a2);
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = 0;
  if ( !(_DWORD)v5 )
    return 0;
  while ( *v9 > 0x7FFFFFFEFFFFuLL )
  {
    ++v11;
    ++v9;
    if ( v11 >= (unsigned int)v5 )
      return 0;
  }
  v12[1] = Process->SecureState.SecureHandle;
  v12[2] = a1;
  v12[3] = v5;
  v12[4] = v6;
  return VslpEnterIumSecureMode(2u, 242, 0, (__int64)v12);
}
