/*
 * XREFs of ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C038B814
 * Callers:
 *     DxgkLock2 @ 0x1C019E150 (DxgkLock2.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CE1EC (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkUnlock2Internal @ 0x1C031DED8 (DxgkUnlock2Internal.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C02D4100 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_UNLOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v6; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  struct _EX_RUNDOWN_REF *v14; // rdx
  struct DXGALLOCATION *v15; // rbx
  struct DXGKVMB_COMMAND_BASE *v16; // rcx
  int v17; // eax
  struct DXGALLOCATION *v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+70h] [rbp-90h]

  hAllocation = a4->hAllocation;
  v6 = (__int64)a2 + 248;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)a2 + 74) )
    goto LABEL_7;
  v12 = *((_QWORD *)a2 + 35);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
  if ( !v13 )
    goto LABEL_7;
  if ( v13 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * v11);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v19, v14);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 16));
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v15 = v19[0];
  LODWORD(v6) = -1073741811;
  if ( v19[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19[0] + 1) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) )
    {
      if ( *((_DWORD *)v19[0] + 24)
        && _InterlockedExchangeAdd((volatile signed __int32 *)v19[0] + 24, 0xFFFFFFFF) == 1
        && (*((_BYTE *)v15 + 128) & 3) == 0 )
      {
        _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
        if ( !*((_BYTE *)this + 80) )
          UnlockParavirtualizedAllocationOnGuest(v19[0], 1);
        v21 = 0;
        *(_OWORD *)v20 = 0LL;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v20, this, 0x28u, 0LL, 0LL, 0LL);
        v16 = v20[0];
        if ( v20[0] )
        {
          *((_DWORD *)v20[0] + 2) = *((_DWORD *)a2 + 126);
          *((_BYTE *)v16 + 12) = 0;
          *((_DWORD *)v16 + 3) &= 0x1FFu;
          *((_BYTE *)v16 + 32) = a5;
          *(_QWORD *)v16 = 0LL;
          *((_QWORD *)v16 + 2) = 24LL;
          *((_DWORD *)v16 + 7) = *((_DWORD *)v15 + 5);
          *((_DWORD *)v16 + 6) = *((_DWORD *)a3 + 118);
          v17 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                  (struct _KTHREAD **)this,
                  (unsigned __int8 *)v20[1],
                  v20[0],
                  v21);
          v6 = v17;
          if ( v17 < 0 )
          {
            WdLogSingleEntry1(2LL, v17);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"VmBusSendUnlock2 failed: 0x%I64x",
              v6,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          LODWORD(v6) = -1073741801;
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v20);
      }
      else
      {
        LODWORD(v6) = 0;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, a3, v19[0], -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)a3,
        (__int64)v19[0],
        -1073741811LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a4->hAllocation);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid allocation handle: 0x%I64x",
      a4->hAllocation,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v19);
  return (unsigned int)v6;
}
