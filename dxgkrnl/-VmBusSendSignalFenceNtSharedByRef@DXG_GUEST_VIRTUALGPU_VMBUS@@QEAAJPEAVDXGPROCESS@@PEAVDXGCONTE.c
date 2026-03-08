/*
 * XREFs of ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C0389AB4
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C034F87C (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x1C038B7B4 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  int HostProcess; // eax
  int v12; // eax
  __int128 v14; // [rsp+50h] [rbp-148h] BYREF
  int v15; // [rsp+60h] [rbp-138h]

  v15 = 0;
  v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v14, this, 0x28u, 0LL, 0LL, 0LL);
  v9 = v14;
  if ( (_QWORD)v14 )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v9 = 0LL;
    *(_DWORD *)(v9 + 20) = 0;
    *(_BYTE *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 12) &= 0x1FFu;
    *(_DWORD *)(v9 + 8) = HostProcess;
    *(_DWORD *)(v9 + 16) = 27;
    *(_DWORD *)(v9 + 28) = *((_DWORD *)a3 + 7);
    *(_QWORD *)(v9 + 32) = a5;
    *(_DWORD *)(v9 + 24) = a4;
    v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(this, (struct DXGVMBUSMESSAGE *)&v14);
    v10 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendSignalFenceNtSharedByRef failed: 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    LODWORD(v10) = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v14);
  return (unsigned int)v10;
}
