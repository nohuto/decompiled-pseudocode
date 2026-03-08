/*
 * XREFs of UnmapGpadl @ 0x1C03919D0
 * Callers:
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C03410E0 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1C0341638 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z.c)
 *     ?VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037FD20 (-VmBusReadDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UnmapGpadl(__int64 a1, unsigned int a2, __int64 a3, struct _MDL *a4)
{
  int v4; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 424);
  if ( (v4 & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 608LL);
LABEL_3:
    v9 = v8 + 160;
    goto LABEL_7;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 608);
    goto LABEL_3;
  }
  v9 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(v9 + 16), 0);
  DXGPUSHLOCK::AcquireShared(v12);
  v13 = 1;
  if ( *(_BYTE *)(v9 + 68) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))qword_1C013D058)(*(_QWORD *)v9, a2);
    _InterlockedDecrement(&g_VgpuNumGpadlMappings);
    v10 = -a3;
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, v10);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 72));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80), v10);
  }
  else if ( a4 )
  {
    MmFreePagesFromMdl(a4);
    ExFreePoolWithTag(a4, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
