__int64 __fastcall PnprQuiesceDevices(__int64 a1)
{
  int MillisecondCounter; // eax
  __int64 v3; // rdx
  int started; // edi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax

  MillisecondCounter = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_DWORD *)(PnprContext + 33312) = MillisecondCounter;
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
      PoBroadcastSystemState(a1 + 4);
      *(_BYTE *)(a1 + 30) = 2;
      started = PoBroadcastSystemState(a1 + 4);
      if ( started >= 0 )
        goto LABEL_16;
      v8 = 2005;
    }
    else
    {
      v8 = 1987;
    }
    v9 = PnprContext;
    v10 = *(_DWORD *)(PnprContext + 33272);
    if ( !v10 )
      v10 = v8;
    *(_DWORD *)(PnprContext + 33272) = v10;
    v11 = *(_DWORD *)(v9 + 33276);
    if ( !v11 )
      v11 = 7;
    *(_DWORD *)(v9 + 33276) = v11;
  }
  else
  {
    v5 = PnprContext;
    v6 = *(_DWORD *)(PnprContext + 33272);
    if ( !v6 )
      v6 = 1964;
    v7 = *(_DWORD *)(PnprContext + 33276);
    *(_DWORD *)(PnprContext + 33272) = v6;
    if ( !v7 )
      v7 = 7;
    *(_DWORD *)(v5 + 33276) = v7;
  }
LABEL_16:
  *(_DWORD *)(PnprContext + 33316) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}
