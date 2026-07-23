/*
 * XREFs of TtmDispatchApi @ 0x1409007F4
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     TtmpDispatchAssignDevice @ 0x140900BF4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140900C9C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140900DD4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140900EC4 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140900F70 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140901038 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409010D4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140901190 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14090123C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409012F0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1409013AC (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiLogDispatchApiStart @ 0x140902864 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x140902934 (TtmiLogDispatchApiStop.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  PVOID PoolWithTag; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // esi
  unsigned int Terminal; // eax
  __int64 v18; // rdx

  TtmiLogDispatchApiStart();
  PoolWithTag = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( TtmpEnabled != 1 )
  {
    v13 = -1073741637;
    v14 = 1062LL;
LABEL_3:
    TtmiLogError("TtmDispatchApi", v14, 0xFFFFFFFFLL, v13);
    goto LABEL_61;
  }
  if ( a1 > 4101 )
  {
    if ( a1 != 4102 && a1 != 4103 && a1 != 4104 && (unsigned int)(a1 - 4105) >= 2 )
      goto LABEL_21;
    goto LABEL_22;
  }
  switch ( a1 )
  {
    case 4101:
LABEL_22:
      v15 = 24;
      goto LABEL_23;
    case 4096:
      v15 = 12;
LABEL_13:
      v16 = 8;
      goto LABEL_24;
    case 4097:
      v15 = 24;
      v16 = 16;
      goto LABEL_24;
  }
  if ( a1 != 4098 )
  {
    if ( a1 != 4099 )
    {
      if ( a1 == 4100 )
      {
        v15 = 16;
        v16 = 544;
        goto LABEL_24;
      }
LABEL_21:
      v13 = -1073741811;
      v14 = 1128LL;
      goto LABEL_3;
    }
    v15 = 16;
    goto LABEL_13;
  }
  v15 = 16;
LABEL_23:
  v16 = 0;
LABEL_24:
  if ( a3 < v15 || !a4 && v16 || a5 < v16 )
  {
    v13 = -1073741789;
    v18 = 1139LL;
    goto LABEL_56;
  }
  if ( v16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x206D654Du);
    if ( !PoolWithTag )
    {
      v13 = -1073741801;
      v14 = 1154LL;
      goto LABEL_3;
    }
  }
  if ( a1 <= 4101 )
  {
    switch ( a1 )
    {
      case 4101:
        Terminal = TtmpDispatchSetDefaultDeviceAssignment(a2);
        break;
      case 4096:
        Terminal = TtmpDispatchOpenTerminal(a2, PoolWithTag);
        break;
      case 4097:
        Terminal = TtmpDispatchCreateTerminal(a2, PoolWithTag);
        break;
      case 4098:
        Terminal = TtmpDispatchEvacuateDevices(a2);
        break;
      case 4099:
        Terminal = TtmpDispatchCreateEventQueue(a2, PoolWithTag);
        break;
      default:
        Terminal = TtmpDispatchGetTerminalEvent(a2, PoolWithTag);
        break;
    }
    goto LABEL_42;
  }
  switch ( a1 )
  {
    case 4102:
      Terminal = TtmpDispatchAssignDevice(a2);
      goto LABEL_42;
    case 4103:
      Terminal = TtmpDispatchSetDisplayState(a2);
      goto LABEL_42;
    case 4104:
      Terminal = TtmpDispatchSetDisplayTimeouts(a2);
      goto LABEL_42;
    case 4105:
      Terminal = TtmpDispatchSetDisplayPowerRequest(a2);
      goto LABEL_42;
    case 4106:
      Terminal = TtmpDispatchSetInputWakeCapability(a2);
LABEL_42:
      v13 = Terminal;
      goto LABEL_57;
  }
  v13 = -1073741811;
  v18 = 1223LL;
LABEL_56:
  TtmiLogError("TtmDispatchApi", v18, 0xFFFFFFFFLL, v13);
LABEL_57:
  if ( PoolWithTag )
  {
    if ( (v13 & 0x80000000) != 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
    }
    else
    {
      *a6 = PoolWithTag;
      *a7 = v16;
      *a8 = 1;
    }
  }
LABEL_61:
  TtmiLogDispatchApiStop((unsigned int)a1, v13);
  return v13;
}
