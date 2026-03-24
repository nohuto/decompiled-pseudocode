/*
 * XREFs of TtmpCallAssignedToTerminal @ 0x1408FC670
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1408FC3A4 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     TtmpStartCallout @ 0x1408FD31C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1408FD408 (TtmpStopCallout.c)
 *     TtmiLogError @ 0x140902AC4 (TtmiLogError.c)
 */

void __fastcall TtmpCallAssignedToTerminal(int a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // rdi
  int v4; // ebx
  int v5; // [rsp+28h] [rbp-40h]
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 48);
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 596);
    memset(v6, 0, sizeof(v6));
    v7 = 0LL;
    TtmpStartCallout((unsigned int)v6, a1, a2, 1, (__int64)v2, v5);
    v4 = v2(*(_QWORD *)(a2 + 24), *(unsigned int *)(a2 + 596));
    TtmpStopCallout(v6, (unsigned int)v4);
    if ( v4 < 0 )
      TtmiLogError("TtmpCallAssignedToTerminal", 2381LL, (unsigned int)v4, 0xFFFFFFFFLL);
  }
}
