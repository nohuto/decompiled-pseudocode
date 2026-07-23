/*
 * XREFs of TtmiTerminalSetDisplayTimeouts @ 0x1408FDDCC
 * Callers:
 *     TtmpTerminal0PowerSettingCallback @ 0x1409004E0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409012F0 (TtmpDispatchSetDisplayTimeouts.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1408FF2A0 (TtmiScheduleSessionWorker.c)
 *     TtmiLogTerminalDisplayTimeouts @ 0x140904AF4 (TtmiLogTerminalDisplayTimeouts.c)
 */

__int64 __fastcall TtmiTerminalSetDisplayTimeouts(_DWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r10
  __int64 v8; // rax

  v5 = 10000000LL * a4;
  v7 = 10000000LL * a3;
  *(_QWORD *)(a2 + 72) = v5;
  *(_QWORD *)(a2 + 64) = v7;
  v8 = v7;
  if ( v7 && v5 && v7 >= v5 )
  {
    *(_QWORD *)(a2 + 64) = 0LL;
    v8 = 0LL;
  }
  TtmiLogTerminalDisplayTimeouts(*a1, *(_DWORD *)(a2 + 28), a3, a4, v8, 10000000LL * a4);
  *(_DWORD *)(a2 + 36) |= 4u;
  return TtmiScheduleSessionWorker(a1, 2LL);
}
