/*
 * XREFs of TtmpCallSetInputMode @ 0x1409A01C8
 * Callers:
 *     TtmpPushTerminalState @ 0x1409A0AE4 (TtmpPushTerminalState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     TtmpStartCallout @ 0x1409A0CA0 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1409A0D8C (TtmpStopCallout.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
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
      TtmiLogError("TtmpCallSetInputMode", 2503LL, (unsigned int)v6, 0xFFFFFFFFLL);
  }
}
