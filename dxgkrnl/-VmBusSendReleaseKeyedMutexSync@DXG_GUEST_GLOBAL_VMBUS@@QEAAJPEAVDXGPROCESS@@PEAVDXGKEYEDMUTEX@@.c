/*
 * XREFs of ?VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_K2@Z @ 0x1C0388EC4
 * Callers:
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C034C27C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C034B480 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendReleaseKeyedMutexSync(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        const void **a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int HostHandle; // eax
  int v10; // r8d
  int v11; // r15d
  struct DXGKVMB_COMMAND_BASE *v12; // rdi
  unsigned int v13; // ebx
  int v14; // ebx
  int HostProcess; // eax
  struct _MDL *v17; // [rsp+20h] [rbp-168h]
  struct DXGKVMB_COMMAND_BASE *v18[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-148h]

  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  v10 = *((_DWORD *)a3 + 42);
  v19 = 0;
  *(_OWORD *)v18 = 0LL;
  v11 = HostHandle;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v18, this, v10 + 48, 0LL, 0LL, 0LL);
  v12 = v18[0];
  if ( v18[0] )
  {
    v14 = *((_DWORD *)a3 + 8);
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v12 = 0LL;
    *((_DWORD *)v12 + 5) = 0;
    *((_DWORD *)v12 + 2) = HostProcess;
    *((_QWORD *)v12 + 4) = a5;
    *((_BYTE *)v12 + 12) = 1;
    *((_DWORD *)v12 + 3) &= 0x1FFu;
    *((_QWORD *)v12 + 5) = a6;
    *((_DWORD *)v12 + 4) = 1015;
    *((_DWORD *)v12 + 6) = v14;
    *((_DWORD *)v12 + 7) = v11;
    memmove((char *)v12 + 48, a3[20], *((unsigned int *)a3 + 42));
    v13 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v18[1], v18[0], v19, v17);
  }
  else
  {
    v13 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v18);
  return v13;
}
