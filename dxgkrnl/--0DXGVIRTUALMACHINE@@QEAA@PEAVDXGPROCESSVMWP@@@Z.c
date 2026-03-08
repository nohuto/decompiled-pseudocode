/*
 * XREFs of ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C033E620
 * Callers:
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0340994 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C020B474 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGVIRTUALMACHINE *__fastcall DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this, struct DXGPROCESSVMWP *a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d
  struct DXGGLOBAL *Global; // rdi
  struct DXGGLOBAL *v8; // rbx
  struct DXGGLOBAL **v9; // rcx
  DXGVIRTUALMACHINE *result; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 58;
  *((_DWORD *)this + 22) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 19;
  *((_DWORD *)this + 30) = -1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 57;
  *((_DWORD *)this + 38) = -1;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)this + 160, 1);
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 88) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_OWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = v5;
  *((_DWORD *)this + 92) = v6;
  *((_QWORD *)this + 51) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 50);
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 53) = (char *)this + 416;
  *((_QWORD *)this + 52) = (char *)this + 416;
  *((_DWORD *)this + 124) = 1;
  *((_QWORD *)this + 60) = DXG_DEFERRED_WORK_QUEUE_DPC::DeferredWorkQueueCallback;
  *((_WORD *)this + 256) = 0;
  *((_QWORD *)this + 61) = (char *)this + 400;
  *((_QWORD *)this + 58) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 440), NotificationEvent, 1u);
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 48) = (char *)this + 376;
  *((_QWORD *)this + 47) = (char *)this + 376;
  *((_QWORD *)this + 35) = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v8 = (DXGVIRTUALMACHINE *)((char *)this + 8);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 488));
  v9 = (struct DXGGLOBAL **)*((_QWORD *)Global + 216);
  if ( *v9 != (struct DXGGLOBAL *)((char *)Global + 1720) )
    __fastfail(3u);
  *((_QWORD *)this + 2) = v9;
  *(_QWORD *)v8 = (char *)Global + 1720;
  *v9 = v8;
  *((_QWORD *)Global + 216) = v8;
  ++*((_DWORD *)Global + 434);
  *((_QWORD *)Global + 62) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 488, 0LL);
  KeLeaveCriticalRegion();
  result = this;
  *((_DWORD *)this + 124) = 47;
  return result;
}
