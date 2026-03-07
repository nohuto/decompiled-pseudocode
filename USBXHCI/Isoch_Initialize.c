__int64 __fastcall Isoch_Initialize(__int64 a1)
{
  unsigned __int64 v2; // rax
  int v3; // edx
  int v4; // ebx
  _QWORD v6[2]; // [rsp+30h] [rbp-9h] BYREF
  __int128 v7; // [rsp+40h] [rbp+7h]
  __int64 v8; // [rsp+50h] [rbp+17h]
  __int128 v9; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  __int64 v11; // [rsp+70h] [rbp+37h]
  __int128 v12; // [rsp+78h] [rbp+3Fh]
  __int64 v13; // [rsp+88h] [rbp+4Fh]

  DWORD1(v9) = 0;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 408) = a1 + 400;
  *(_QWORD *)(a1 + 400) = a1 + 400;
  *(_QWORD *)(a1 + 424) = a1 + 416;
  *(_QWORD *)(a1 + 416) = a1 + 416;
  *(_DWORD *)(a1 + 356) = Isoch_CalculatePacketsPerFrame(a1);
  v8 = 0LL;
  v7 = 0LL;
  LODWORD(v7) = 0;
  DWORD2(v7) = 0;
  v6[0] = 0LL;
  v6[1] = Isoch_WdfEvtRingEmptyTimer;
  v13 = 0LL;
  v2 = *(_QWORD *)(a1 + 72);
  v10 = 0LL;
  BYTE4(v7) = 1;
  v12 = v2;
  v9 = 0LL;
  v11 = 0x100000001LL;
  LODWORD(v6[0]) = 40;
  LODWORD(v9) = 56;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64))(WdfFunctions_01023 + 2544))(
         WdfDriverGlobals,
         v6,
         &v9,
         a1 + 320);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v3,
        14,
        10,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v4;
}
