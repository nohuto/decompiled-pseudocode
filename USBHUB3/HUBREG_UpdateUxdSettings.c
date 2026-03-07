__int64 __fastcall HUBREG_UpdateUxdSettings(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rsi
  int v11; // eax
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD Source1[5]; // [rsp+20h] [rbp-79h] BYREF
  _OWORD Source2[5]; // [rsp+70h] [rbp-29h] BYREF

  memset(Source1, 0, 0x44uLL);
  memset(Source2, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a2 + 1632), 0xFFFFFFFE);
  v6 = *(_DWORD *)(a2 + 1728);
  v7 = *(_OWORD *)(a2 + 1680);
  Source2[0] = *(_OWORD *)(a2 + 1664);
  v8 = *(_OWORD *)(a2 + 1696);
  LODWORD(Source2[4]) = v6;
  Source2[1] = v7;
  v9 = *(_OWORD *)(a2 + 1712);
  Source2[2] = v8;
  Source2[3] = v9;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C006A1E8);
  if ( (int)HUBREG_QueryGlobalUxdSettings(v10) >= 0 )
  {
    v11 = *(_DWORD *)(v10 + 4);
    if ( (v11 & 0x800) != 0 && (v11 & 0x10) == 0 )
    {
      if ( (int)HUBREG_QueryUxdPortKey(a1, *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 200LL), Source1) >= 0
        || (memset(Source1, 0, 0x44uLL), (int)HUBREG_QueryUxdDeviceKey(a2, (__int64)Source1) >= 0) )
      {
        _InterlockedOr((volatile signed __int32 *)(a2 + 1632), 1u);
        _InterlockedOr((volatile signed __int32 *)(a2 + 1640), 4u);
      }
      v12 = Source1[1];
      v13 = Source1[4];
      *(_OWORD *)(a2 + 1664) = Source1[0];
      v14 = Source1[2];
      *(_OWORD *)(a2 + 1680) = v12;
      v15 = Source1[3];
      *(_OWORD *)(a2 + 1696) = v14;
      *(_OWORD *)(a2 + 1712) = v15;
      *(_DWORD *)(a2 + 1728) = v13;
      if ( a3 && RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (*(_DWORD *)(a2 + 1632) & 2) == 0 )
        *a3 = 1;
    }
  }
  return 0LL;
}
