__int64 __fastcall HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+28h] [rbp-58h]
  _QWORD v10[3]; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+4Ch] [rbp-34h]
  int v13; // [rsp+5Ch] [rbp-24h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  void *v18; // [rsp+78h] [rbp-8h]
  __int64 v19; // [rsp+98h] [rbp+18h] BYREF

  v3 = 0;
  LODWORD(v12) = 0;
  HIDWORD(v10[0]) = 0;
  v19 = 0LL;
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v6 = *(_QWORD *)(a3 + 16);
  v18 = off_1C006A148;
  v12 = 0LL;
  v13 = 0;
  v17 = 0LL;
  v11 = 56;
  v14 = 1;
  v15 = 1;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v6);
  v10[2] = 1LL;
  v10[0] = 24LL;
  v10[1] = HUBPDO_EvtCompleteIrpWorkItem;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
         WdfDriverGlobals,
         v10,
         &v11,
         &v19);
  if ( v7 >= 0 )
  {
    *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v19,
                 off_1C006A148) = a2;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v19);
    return (unsigned int)-1073741802;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 1432LL),
      2u,
      5u,
      0xA3u,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v9);
  }
  return v3;
}
