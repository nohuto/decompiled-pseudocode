/*
 * XREFs of MapGpadl @ 0x1C0251E00
 * Callers:
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0246340 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C0286770 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapGpadl(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v3; // al
  __int64 v5; // rbx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax

  v3 = *(_BYTE *)(a1 + 347);
  if ( (v3 & 0x20) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 496LL);
LABEL_3:
    v6 = v5 + 128;
    goto LABEL_7;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 496);
    goto LABEL_3;
  }
  v6 = 0LL;
LABEL_7:
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00B4520)(*(_QWORD *)v6, 0LL, a2);
  v10 = v7;
  if ( v7 >= 0 )
  {
    _InterlockedIncrement(&g_VgpuNumGpadlMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, a3);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 72), a3);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  return (unsigned int)v10;
}
