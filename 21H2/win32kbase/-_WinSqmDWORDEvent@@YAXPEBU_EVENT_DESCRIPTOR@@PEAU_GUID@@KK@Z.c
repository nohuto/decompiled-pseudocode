/*
 * XREFs of ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00B7538
 * Callers:
 *     WinSqmSetDWORD @ 0x1C00B74E0 (WinSqmSetDWORD.c)
 *     WinSqmIncrementDWORD @ 0x1C00B7510 (WinSqmIncrementDWORD.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0147FA0 (SqmPowerState.c)
 *     WinSqmAddToAverageDWORD @ 0x1C0167670 (WinSqmAddToAverageDWORD.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01DEAD0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     WinSqmEventWrite @ 0x1C005B8DC (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C00B75B4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00B760C (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall _WinSqmDWORDEvent(PCEVENT_DESCRIPTOR EventDescriptor, struct _GUID *a2, int a3, int a4)
{
  struct _GUID *v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-50h] BYREF
  int *v7; // [rsp+30h] [rbp-40h]
  int v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+3Ch] [rbp-34h]
  void *v10; // [rsp+40h] [rbp-30h]
  int v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+4Ch] [rbp-24h]
  int *v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  int v17; // [rsp+A8h] [rbp+38h] BYREF

  if ( a2 != (struct _GUID *)-1LL )
  {
    v17 = a4;
    v16 = a3;
    v5 = a2;
    if ( (unsigned int)IsExtendedWinSqmHandle(a2) )
    {
      v5 = (struct _GUID *)((char *)v5 + 24);
    }
    else if ( !v5 )
    {
      v5 = (struct _GUID *)&unk_1C0267080;
    }
    if ( (unsigned int)WinSqmEventEnabled(EventDescriptor, v5) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v7 = &v16;
      v10 = &unk_1C029A528;
      v13 = &v17;
      UserData.Ptr = (ULONGLONG)v5;
      UserData.Size = 16;
      v8 = 4;
      v11 = 4;
      v14 = 4;
      WinSqmEventWrite(EventDescriptor, 4u, &UserData);
    }
  }
}
