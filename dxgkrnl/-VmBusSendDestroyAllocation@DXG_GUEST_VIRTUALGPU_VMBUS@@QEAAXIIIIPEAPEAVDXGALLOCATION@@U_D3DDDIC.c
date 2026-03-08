/*
 * XREFs of ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0383408
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0189CB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D2604 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D2708 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a7)
{
  unsigned int v11; // r8d
  __int64 v12; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int128 v17; // [rsp+50h] [rbp-148h] BYREF
  int v18; // [rsp+60h] [rbp-138h]

  if ( a5 <= 0x8000 )
  {
    v11 = 48;
    if ( a5 )
      v11 = 4 * a5 + 44;
    v17 = 0LL;
    v18 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v17, this, v11, 0LL, 0LL, 0LL);
    v12 = v17;
    if ( (_QWORD)v17 )
    {
      *(_BYTE *)(v17 + 12) = 0;
      *(_DWORD *)(v12 + 12) &= 0x1FFu;
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 16) = 5LL;
      *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)(v12 + 36) = a7;
      *(_DWORD *)(v12 + 24) = a3;
      *(_DWORD *)(v12 + 8) = a2;
      *(_DWORD *)(v12 + 28) = a4;
      *(_DWORD *)(v12 + 32) = a5;
      if ( a5 )
      {
        v14 = (_DWORD *)(v12 + 40);
        v15 = a5;
        do
        {
          v16 = (__int64)*a6++;
          *v14++ = *(_DWORD *)(v16 + 20);
          --v15;
        }
        while ( v15 );
      }
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v17, 0LL, 0LL);
    }
    else
    {
      WdLogSingleEntry1(6LL, 10315LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate storage for input buffer",
        10315LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v17);
  }
  else
  {
    WdLogSingleEntry1(2LL, 10306LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"NumAllocations is invalid", 10306LL, 0LL, 0LL, 0LL, 0LL);
  }
}
