__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes(__int64 a1, int a2, __int64 a3, BOOL a4)
{
  signed __int32 v7; // eax
  int v8; // eax

  if ( a2
    || *(_DWORD *)(a1 + 64)
    || (a4 = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 552LL) != 0, a4 != (*(_DWORD *)(a1 + 24) != 0)) )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 3, 0);
    if ( v7 == 4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqs(WPP_GLOBAL_Control->DeviceExtension, 0, a3, a4);
    }
    else if ( v7 == 1 )
    {
      *(_DWORD *)(a1 + 68) = 3;
    }
    if ( a2 == 1 )
    {
      v8 = *(_DWORD *)(a3 + 56);
      if ( (v8 & 0x10) != 0 )
      {
        _InterlockedOr64((volatile signed __int64 *)(a1 + 16), 0x20020uLL);
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFBFuLL);
      }
      else if ( (v8 & 0x20) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFDFFDFuLL);
      }
    }
  }
  return 0LL;
}
