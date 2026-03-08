/*
 * XREFs of ?GetVSyncTimeCounters@DXGADAPTER@@QEAAXIW4VSYNC_TIME_STATS_TYPE@@PEAUVSYNC_TIME_COUNTERS@@@Z @ 0x1C001C9A4
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0176944 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall DXGADAPTER::GetVSyncTimeCounters(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // xmm1_8
  __int64 v10; // rdi
  int v11; // r8d
  __int64 v12; // rbx
  int v13; // edx
  int v14; // r8d

  v4 = *(_DWORD *)(a1 + 1672);
  v6 = a3;
  if ( a2 >= v4 )
  {
    v10 = a2;
    LOBYTE(v4) = WdLogSingleEntry2(2LL, a2, *(unsigned int *)(a1 + 1672));
    if ( bTracingEnabled )
    {
      LOBYTE(v4) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(v4) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                       0,
                       *(_DWORD *)(a1 + 1672),
                       v11,
                       0,
                       0,
                       -1,
                       (__int64)L"Invalid VidPnSourceId:%u. Should be less than :%u",
                       v10,
                       *(unsigned int *)(a1 + 1672),
                       0LL,
                       0LL,
                       0LL);
    }
  }
  else if ( a3 >= 3 )
  {
    v12 = a3;
    LOBYTE(v4) = WdLogSingleEntry2(2LL, a3, 3LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v4) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(v4) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                       0,
                       v13,
                       v14,
                       0,
                       0,
                       -1,
                       (__int64)L"Invalid QueriedPowerState:%u. Should be less than :%u",
                       v12,
                       3LL,
                       0LL,
                       0LL,
                       0LL);
    }
  }
  else if ( a4 )
  {
    v7 = *(_QWORD *)(a1 + 4216);
    if ( v7 )
    {
      v4 = *(_DWORD *)(a1 + 2792);
      if ( (v4 & 0x10) != 0 )
      {
        LOBYTE(v4) = a2;
        v8 = v7 + 112LL * a2;
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 4216);
      }
      v9 = *(_QWORD *)(v8 + 24 * v6 + 32);
      *(_OWORD *)a4 = *(_OWORD *)(v8 + 24 * v6 + 16);
      *(_QWORD *)(a4 + 16) = v9;
    }
  }
  return v4;
}
