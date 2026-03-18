/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x1C02064BC
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00AFA14 (EditionHandleAndPostKeyEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 *v6; // rax
  __int64 v8; // [rsp+80h] [rbp-18h] BYREF

  v4 = 0;
  v8 = 0LL;
  if ( gpqForeground )
  {
    v6 = *(__int64 **)(gpqForeground + 120);
    if ( v6 || (v6 = *(__int64 **)(gpqForeground + 128)) != 0LL )
      v8 = *v6;
  }
  SendMessageTo(3LL, (__int64)&v8, 8LL, a4);
  if ( qword_1C0296770 && (int)qword_1C0296770() >= 0 )
    return (unsigned int)EditionHandleAndPostKeyEvent(a1);
  return v4;
}
