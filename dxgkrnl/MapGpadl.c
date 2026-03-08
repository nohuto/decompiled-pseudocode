/*
 * XREFs of MapGpadl @ 0x1C03916D0
 * Callers:
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1C0341638 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z.c)
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037FD20 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapGpadl(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  int v3; // eax
  __int64 v5; // rbx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rsi

  v3 = *(_DWORD *)(a1 + 424);
  if ( (v3 & 0x100) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 608LL);
LABEL_3:
    v6 = v5 + 160;
    goto LABEL_7;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 608);
    goto LABEL_3;
  }
  v6 = 0LL;
LABEL_7:
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C013D030)(*(_QWORD *)v6, 0LL, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    _InterlockedIncrement(&g_VgpuNumGpadlMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, a3);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 72));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 80), a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmbChannelMapGpadl failed: 0x%I64x", v8, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v8;
}
