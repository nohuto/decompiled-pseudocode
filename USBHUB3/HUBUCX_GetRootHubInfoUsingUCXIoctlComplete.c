__int64 __fastcall HUBUCX_GetRootHubInfoUsingUCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a4 + 144) = *(_WORD *)(a4 + 112);
    *(_WORD *)(a4 + 150) = *(_WORD *)(a4 + 114);
    *(_QWORD *)(a4 + 1104) = *(_QWORD *)(a4 + 120);
    *(_WORD *)(a4 + 2474) = *(_WORD *)(a4 + 116);
    *(_WORD *)(a4 + 2476) = *(_WORD *)(a4 + 118);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(_DWORD *)(a3 + 8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a4 + 2520),
      2u,
      3u,
      0x28u,
      (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
      v8);
  }
  HUBSM_AddEvent(a4 + 1264, ((v4 >> 31) & 0xFFFFFFFC) + 2042);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
