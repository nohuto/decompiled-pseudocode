/*
 * XREFs of ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C030E6D0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02B3024 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0014DD8 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C00228E4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C036EBB8 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C036EC5C (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::HandleVirtualMachineReset(DXGGLOBAL *this)
{
  __int64 v2; // rdx
  __int64 Current; // rax
  __int64 *v4; // rdx
  unsigned int v5; // edx
  DXG_GUEST_GLOBAL_VMBUS *v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 432, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 112);
  v2 = *((_QWORD *)this + 52);
  v7[0] = (char *)this + 416;
  while ( 1 )
  {
    v7[1] = v2;
    Current = DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v7);
    if ( !Current )
      break;
    *(_DWORD *)(Current + 504) = 0;
    v2 = *v4;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 112);
  ExReleasePushLockSharedEx((char *)this + 432, 0LL);
  KeLeaveCriticalRegion();
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 456));
  v5 = *((_DWORD *)this + 435);
  if ( v5 )
  {
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)this + 214), v5);
    *((_DWORD *)this + 435) = 0;
  }
  v6 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)this + 214);
  if ( v6 )
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(v6);
  *((_QWORD *)this + 58) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 456, 0LL);
  KeLeaveCriticalRegion();
}
