/*
 * XREFs of TtmDispatchApi @ 0x1409A2FAC
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     TtmpDispatchAssignDevice @ 0x1409A33A8 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A3450 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1409A358C (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409A367C (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1409A3728 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1409A37F4 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409A3890 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1409A394C (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1409A39F8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409A3AAC (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1409A3B68 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiLogDispatchApiStart @ 0x1409A4FAC (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x1409A507C (TtmiLogDispatchApiStop.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmDispatchApi(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int *a7,
        _BYTE *a8)
{
  unsigned int v12; // esi
  void *Pool2; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int Terminal; // eax

  TtmiLogDispatchApiStart();
  v12 = 0;
  Pool2 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( !TtmIsEnabled(v15, v14) )
  {
    v16 = -1073741637;
    v17 = 1062LL;
LABEL_58:
    TtmiLogError("TtmDispatchApi", v17, 0xFFFFFFFFLL, v16);
    goto LABEL_59;
  }
  if ( a1 > 4101 )
  {
    if ( a1 != 4102 && a1 != 4103 && a1 != 4104 && (unsigned int)(a1 - 4105) >= 2 )
      goto LABEL_28;
    goto LABEL_15;
  }
  switch ( a1 )
  {
    case 4101:
LABEL_15:
      v18 = 24;
      goto LABEL_16;
    case 4096:
      v18 = 12;
LABEL_12:
      v12 = 8;
      goto LABEL_16;
    case 4097:
      v12 = 16;
      goto LABEL_15;
  }
  if ( a1 != 4098 )
  {
    if ( a1 != 4099 )
    {
      if ( a1 == 4100 )
      {
        v18 = 16;
        v12 = 544;
        goto LABEL_16;
      }
LABEL_28:
      v16 = -1073741811;
      v17 = 1128LL;
      goto LABEL_58;
    }
    v18 = 16;
    goto LABEL_12;
  }
  v18 = 16;
LABEL_16:
  if ( a3 < v18 || !a4 && v12 || a5 < v12 )
  {
    v16 = -1073741789;
    v17 = 1139LL;
    goto LABEL_58;
  }
  if ( v12 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v12, 544040269LL);
    if ( !Pool2 )
    {
      v16 = -1073741801;
      v17 = 1154LL;
      goto LABEL_58;
    }
  }
  if ( a1 > 4101 )
  {
    switch ( a1 )
    {
      case 4102:
        Terminal = TtmpDispatchAssignDevice(a2);
        break;
      case 4103:
        Terminal = TtmpDispatchSetDisplayState(a2);
        break;
      case 4104:
        Terminal = TtmpDispatchSetDisplayTimeouts(a2);
        break;
      case 4105:
        Terminal = TtmpDispatchSetDisplayPowerRequest(a2);
        break;
      case 4106:
        Terminal = TtmpDispatchSetInputWakeCapability(a2);
        break;
      default:
        v16 = -1073741811;
        TtmiLogError("TtmDispatchApi", 1223LL, 0xFFFFFFFFLL, 3221225485LL);
        goto LABEL_53;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 4101:
        Terminal = TtmpDispatchSetDefaultDeviceAssignment(a2);
        break;
      case 4096:
        Terminal = TtmpDispatchOpenTerminal(a2, Pool2);
        break;
      case 4097:
        Terminal = TtmpDispatchCreateTerminal(a2, Pool2);
        break;
      case 4098:
        Terminal = TtmpDispatchEvacuateDevices(a2);
        break;
      case 4099:
        Terminal = TtmpDispatchCreateEventQueue(a2, Pool2);
        break;
      default:
        Terminal = TtmpDispatchGetTerminalEvent(a2, Pool2);
        break;
    }
  }
  v16 = Terminal;
LABEL_53:
  if ( Pool2 )
  {
    if ( (v16 & 0x80000000) != 0 )
    {
      ExFreePoolWithTag(Pool2, 0x206D654Du);
    }
    else
    {
      *a6 = Pool2;
      *a7 = v12;
      *a8 = 1;
    }
  }
LABEL_59:
  TtmiLogDispatchApiStop((unsigned int)a1, v16);
  return v16;
}
