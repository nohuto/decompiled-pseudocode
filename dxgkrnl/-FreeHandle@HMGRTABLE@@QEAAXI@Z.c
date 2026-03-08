/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C018C3C0
 * Callers:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C000E148 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0189CB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018BBC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01B7C70 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C01B94C4 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D2E34 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C022052E (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     DxgkWslDestroyNtSharedObject @ 0x1C0324A90 (DxgkWslDestroyNtSharedObject.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034ADBC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C03590B4 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C0360E44 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C03615F0 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C0361E04 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0378A80 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // r9d
  int v6; // edx
  char v7; // cl
  __int64 v8; // rdx

  if ( *((_DWORD *)this + 5) >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 250LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_FreeCount < m_TableSize", 250LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    WdLogSingleEntry1(1LL, 251LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeCount >= HMGRTABLE_MIN_FREE_ENTRIES",
      251LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (a2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)this + 4) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8);
    v6 = (v5 >> 5) & 3;
    if ( a2 >> 30 == v6 && (v5 & 0x1F) != 0 )
    {
      v7 = v6 + 1;
      if ( v6 == 3 )
        v7 = 1;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(32 * v7)) & 0x60;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= 0xFFFFFFE0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= ~0x2000u;
      v8 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v8 + 16LL * v4) = *(_DWORD *)(v8 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v4;
    }
  }
}
