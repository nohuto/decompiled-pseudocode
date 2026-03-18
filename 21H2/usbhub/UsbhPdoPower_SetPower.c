/*
 * XREFs of UsbhPdoPower_SetPower @ 0x1C0002AD0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoDevicePowerState @ 0x1C0005200 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSystemPowerState @ 0x1C000B094 (UsbhPdoSystemPowerState.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C000DEEC (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhPdoPower_SetPower(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v5; // rcx
  __int64 Options; // r11
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // edx
  __int64 v15; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !a1 )
    goto LABEL_24;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, v5);
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7 = *(_QWORD *)(v5 + 1184);
  if ( (unsigned int)Options <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 64);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 888)
             + 32LL
             * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
          *(_DWORD *)v9 = 860767312;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 16) = CurrentStackLocation;
          *(_QWORD *)(v9 + 24) = a2;
        }
      }
    }
    *(_QWORD *)(v5 + 8 * Options + 800) = a2;
    *(_QWORD *)(v5 + 8 * Options + 816) = CurrentStackLocation;
    *(_DWORD *)(v5 + 4 * Options + 832) = 752;
  }
  v10 = *(_QWORD *)(v5 + 1184);
  if ( !v10 )
LABEL_24:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v11 = *(_QWORD *)(v10 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), 0LL);
  if ( *(_DWORD *)v11 != 541218120 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), *(_QWORD *)(v10 + 64));
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(v11 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
    *(_DWORD *)v12 = 1347642480;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = a1;
    *(_QWORD *)(v12 + 24) = a2;
  }
  v13 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v13 )
    return UsbhPdoSystemPowerState(*(_QWORD *)(v5 + 1184), a1, a2);
  if ( v13 == 1 )
    return UsbhPdoDevicePowerState(*(_QWORD *)(v5 + 1184), a1, a2);
  v15 = PdoExt(a1);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v15 + 1184), a1, a2, 767LL);
  a2->IoStatus.Status = -1073741637;
  IofCompleteRequest(a2, 0);
  return 3221225659LL;
}
