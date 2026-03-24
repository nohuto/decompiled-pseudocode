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
  int MillisecondCounter; // eax
  __int64 v3; // rdx
  int started; // edi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax

  MillisecondCounter = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_DWORD *)(PnprContext + 21024) = MillisecondCounter;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)a1 = -2013265920;
  *(_DWORD *)(a1 + 48) = -2013265920;
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 44) = 5;
  *(_DWORD *)(a1 + 32) = PoBlockConsoleSwitch(a1 + 36, v3);
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
      PoBroadcastSystemState(a1 + 4, v8, v9, v10);
      *(_BYTE *)(a1 + 30) = 2;
      started = PoBroadcastSystemState(a1 + 4, v12, v13, v14);
      if ( started >= 0 )
        goto LABEL_16;
      v11 = 2012;
    }
    else
    {
      v11 = 1994;
    }
    v15 = PnprContext;
    v16 = *(_DWORD *)(PnprContext + 20984);
    if ( !v16 )
      v16 = v11;
    *(_DWORD *)(PnprContext + 20984) = v16;
    v17 = *(_DWORD *)(v15 + 20988);
    if ( !v17 )
      v17 = 7;
    *(_DWORD *)(v15 + 20988) = v17;
  }
  else
  {
    v5 = PnprContext;
    v6 = *(_DWORD *)(PnprContext + 20984);
    if ( !v6 )
      v6 = 1971;
    v7 = *(_DWORD *)(PnprContext + 20988);
    *(_DWORD *)(PnprContext + 20984) = v6;
    if ( !v7 )
      v7 = 7;
    *(_DWORD *)(v5 + 20988) = v7;
  }
LABEL_16:
  *(_DWORD *)(PnprContext + 21028) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}
