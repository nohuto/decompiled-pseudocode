/*
 * XREFs of TtmpPushTerminalDisplayStateOntoDevice @ 0x1409A0A2C
 * Callers:
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1409A0500 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 * Callees:
 *     TtmpCallSetBuiltinPanelState @ 0x1409A0098 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1409A0118 (TtmpCallSetDisplayState.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1409A0E1C (TtmpUpdatePrimaryDisplayWnf.c)
 */

void __fastcall TtmpPushTerminalDisplayStateOntoDevice(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // esi

  if ( *(_QWORD *)(a2 + 56) )
  {
    if ( *(_QWORD *)(a2 + 24) != 0xFFFFFFFFLL && a3 <= 1 )
      TtmpCallSetBuiltinPanelState((int *)a1, a2, 0);
    TtmpCallSetDisplayState(a1, a2, a3);
    if ( *(_QWORD *)(a2 + 24) == 0xFFFFFFFFLL )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
    }
    else
    {
      v6 = 2;
      if ( a3 == 2 )
      {
        TtmpCallSetBuiltinPanelState((int *)a1, a2, 2u);
      }
      else if ( a3 == 3 )
      {
        TtmpCallSetBuiltinPanelState((int *)a1, a2, 1u);
        v6 = 1;
      }
      else
      {
        v6 = 0;
      }
      TtmpUpdatePrimaryDisplayWnf(a1, a2, v6);
    }
  }
}
