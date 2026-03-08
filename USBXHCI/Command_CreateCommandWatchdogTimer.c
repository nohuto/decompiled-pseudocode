/*
 * XREFs of Command_CreateCommandWatchdogTimer @ 0x1C00700BC
 * Callers:
 *     Command_Create @ 0x1C006FF64 (Command_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Command_CreateCommandWatchdogTimer(_QWORD *a1)
{
  __int64 v2; // rcx
  char IsSecureDevice; // al
  char v4; // dl
  int v5; // edx
  int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-9h] BYREF
  __int128 v9; // [rsp+40h] [rbp+7h]
  __int64 v10; // [rsp+50h] [rbp+17h]
  __int128 v11; // [rsp+58h] [rbp+1Fh] BYREF
  __int128 v12; // [rsp+68h] [rbp+2Fh]
  __int128 v13; // [rsp+78h] [rbp+3Fh]
  __int64 v14; // [rsp+88h] [rbp+4Fh]

  v12 = 0LL;
  v2 = a1[1];
  v11 = 0LL;
  *((_QWORD *)&v12 + 1) = 0x100000001LL;
  v13 = 0LL;
  v14 = 0LL;
  LODWORD(v11) = 56;
  IsSecureDevice = Controller_IsSecureDevice(v2);
  v8 = 0LL;
  LODWORD(v8) = 40;
  v9 = 0LL;
  BYTE4(v9) = v4;
  if ( IsSecureDevice )
  {
    DWORD2(v12) = 2;
    LODWORD(v9) = 0;
  }
  else
  {
    LODWORD(v9) = 1000;
  }
  v10 = 0LL;
  DWORD2(v9) = 500;
  *((_QWORD *)&v8 + 1) = Command_WdfEvtWatchdogTimerFunction;
  *(_QWORD *)&v13 = *a1;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, _QWORD *))(WdfFunctions_01023 + 2544))(
         WdfDriverGlobals,
         &v8,
         &v11,
         a1 + 3);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v5,
      7,
      12,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
