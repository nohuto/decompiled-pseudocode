/*
 * XREFs of ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C0284384
 * Callers:
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0285D0C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAA@XZ @ 0x1C00D7E60 (--0DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAA@XZ.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C0195B64 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGVIRTUALMACHINE *__fastcall DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this, struct DXGPROCESSVMWP *a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d
  struct DXGGLOBAL *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rsi
  struct DXGGLOBAL **v11; // rcx

  *((_DWORD *)this + 21) = 45;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 22) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 11;
  *((_DWORD *)this + 30) = -1;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)this + 128, 1);
  *(_DWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_QWORD *)(v4 + 80) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *(_OWORD *)((char *)this + 248) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = v5;
  *((_DWORD *)this + 82) = v6;
  DXG_DEFERRED_WORK_QUEUE_DPC_CBLT::DXG_DEFERRED_WORK_QUEUE_DPC_CBLT((DXGVIRTUALMACHINE *)((char *)this + 360));
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 4) = (char *)this + 24;
  v7 = (DXGVIRTUALMACHINE *)((char *)this + 8);
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  *((_QWORD *)this + 30) = 0LL;
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 432));
  v11 = (struct DXGGLOBAL **)*((_QWORD *)Global + 199);
  if ( *v11 != (struct DXGGLOBAL *)((char *)Global + 1584) )
    __fastfail(3u);
  *((_QWORD *)this + 2) = v11;
  *(_QWORD *)v7 = (char *)Global + 1584;
  *v11 = v7;
  *((_QWORD *)Global + 199) = v7;
  ++*((_DWORD *)Global + 400);
  *((_QWORD *)Global + 55) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 432, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
