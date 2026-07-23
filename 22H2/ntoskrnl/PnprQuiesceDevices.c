/*
 * XREFs of PnprQuiesceDevices @ 0x1409AE350
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x1409AEDA0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoBlockConsoleSwitch @ 0x140725A44 (PoBlockConsoleSwitch.c)
 *     PoStartPowerStateTasks @ 0x140774BF8 (PoStartPowerStateTasks.c)
 *     PoInitializeBroadcast @ 0x140778138 (PoInitializeBroadcast.c)
 *     PoStartPartitionReplace @ 0x1408E7708 (PoStartPartitionReplace.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1409AD8DC (PnprGetMillisecondCounter.c)
 */

__int64 __fastcall PnprQuiesceDevices(__int64 a1)
{
  int started; // edi
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax

  *(_DWORD *)(PnprContext + 21024) = PnprGetMillisecondCounter(0);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)a1 = -2013265920;
  *(_DWORD *)(a1 + 48) = -2013265920;
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 44) = 5;
  *(_DWORD *)(a1 + 32) = PoBlockConsoleSwitch(a1 + 36);
  started = PoStartPowerStateTasks((_DWORD *)(a1 + 36));
  if ( started >= 0 )
  {
    PoStartPartitionReplace((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 8) = 5;
    *(_DWORD *)(a1 + 16) = 1;
    *(_DWORD *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 12) = 5;
    *(_DWORD *)(a1 + 20) = 2;
    started = PoInitializeBroadcast();
    if ( started >= 0 )
    {
      *(_BYTE *)(a1 + 30) = 3;
      PoBroadcastSystemState(a1 + 4, v6, v7, v8);
      *(_BYTE *)(a1 + 30) = 2;
      started = PoBroadcastSystemState(a1 + 4, v10, v11, v12);
      if ( started >= 0 )
        goto LABEL_16;
      v9 = 2012;
    }
    else
    {
      v9 = 1994;
    }
    v13 = PnprContext;
    v14 = *(_DWORD *)(PnprContext + 20984);
    if ( !v14 )
      v14 = v9;
    *(_DWORD *)(PnprContext + 20984) = v14;
    v15 = *(_DWORD *)(v13 + 20988);
    if ( !v15 )
      v15 = 7;
    *(_DWORD *)(v13 + 20988) = v15;
  }
  else
  {
    v3 = PnprContext;
    v4 = *(_DWORD *)(PnprContext + 20984);
    if ( !v4 )
      v4 = 1971;
    v5 = *(_DWORD *)(PnprContext + 20988);
    *(_DWORD *)(PnprContext + 20984) = v4;
    if ( !v5 )
      v5 = 7;
    *(_DWORD *)(v3 + 20988) = v5;
  }
LABEL_16:
  *(_DWORD *)(PnprContext + 21028) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}
