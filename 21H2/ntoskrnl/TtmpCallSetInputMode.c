/*
 * XREFs of TtmpCallSetInputMode @ 0x1408FC99C
 * Callers:
 *     TtmpPushTerminalState @ 0x1408FD2B0 (TtmpPushTerminalState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     TtmpStartCallout @ 0x1408FD47C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1408FD568 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 */

void __fastcall TtmpCallSetInputMode(int a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // rdi
  int v6; // ebx
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 64);
  if ( v3 )
  {
    memset(v7, 0, sizeof(v7));
    v8 = 0LL;
    TtmpStartCallout((unsigned int)v7, a1, a2, 3, (__int64)v3, a3);
    v6 = v3(*(_QWORD *)(a2 + 24), a3);
    TtmpStopCallout(v7, (unsigned int)v6);
    if ( v6 < 0 )
      TtmiLogError("TtmpCallSetInputMode", 2498LL, (unsigned int)v6, 0xFFFFFFFFLL);
  }
}
