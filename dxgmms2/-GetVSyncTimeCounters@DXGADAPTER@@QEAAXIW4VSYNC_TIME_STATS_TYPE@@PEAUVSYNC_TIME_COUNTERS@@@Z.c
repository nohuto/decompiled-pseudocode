/*
 * XREFs of ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1C0034B54
 * Callers:
 *     ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00081A0 (-VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchQueryVidPnSourceStatistics @ 0x1C0040760 (VidSchQueryVidPnSourceStatistics.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::GetVSyncTimeCounters(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // xmm1_8

  result = *(unsigned int *)(a1 + 1672);
  if ( a2 < (unsigned int)result )
  {
    if ( a3 < 3 )
    {
      if ( a4 )
      {
        v8 = *(_QWORD *)(a1 + 4216);
        if ( v8 )
        {
          if ( (*(_DWORD *)(a1 + 2792) & 0x10) != 0 )
            v9 = v8 + 112LL * a2;
          else
            v9 = v8;
          result = a3;
          v10 = *(_QWORD *)(v9 + 24LL * a3 + 32);
          *(_OWORD *)a4 = *(_OWORD *)(v9 + 24LL * a3 + 16);
          *(_QWORD *)(a4 + 16) = v10;
        }
      }
    }
    else
    {
      v7 = a3;
      WdLogSingleEntry2(2LL, a3, 3LL);
      return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
               0LL,
               0x40000LL,
               0xFFFFFFFFLL,
               L"Invalid QueriedPowerState:%u. Should be less than :%u",
               v7,
               3LL,
               0LL,
               0LL,
               0LL);
    }
  }
  else
  {
    v6 = a2;
    WdLogSingleEntry2(2LL, a2, (unsigned int)result);
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
             0LL,
             0x40000LL,
             0xFFFFFFFFLL,
             L"Invalid VidPnSourceId:%u. Should be less than :%u",
             v6,
             *(unsigned int *)(a1 + 1672),
             0LL,
             0LL,
             0LL);
  }
  return result;
}
