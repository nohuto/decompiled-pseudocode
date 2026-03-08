/*
 * XREFs of ?VmBusSendChangeVideoMemoryReservation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C0380EB8
 * Callers:
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C02BB8D0 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C038B754 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendChangeVideoMemoryReservation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  struct DXGKVMB_COMMAND_BASE *v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  struct _MDL *v14; // [rsp+20h] [rbp-178h]
  struct DXGKVMB_COMMAND_BASE *v15[2]; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v16; // [rsp+60h] [rbp-138h]

  v16 = 0;
  *(_OWORD *)v15 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v15, this, 0x38u, 0LL, 0LL, 0LL);
  v9 = v15[0];
  v10 = *((_DWORD *)a2 + 126);
  *((_BYTE *)v15[0] + 12) = 0;
  *((_DWORD *)v9 + 3) &= 0x1FFu;
  *((_DWORD *)v9 + 2) = v10;
  *(_QWORD *)v9 = 0LL;
  *((_QWORD *)v9 + 2) = 49LL;
  *((_QWORD *)v9 + 3) = 0LL;
  *((_DWORD *)v9 + 8) = 0;
  *((_DWORD *)v9 + 13) = 0;
  *((_DWORD *)v9 + 9) = a4;
  *((_QWORD *)v9 + 5) = a5;
  *((_DWORD *)v9 + 12) = a3;
  v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v15[1], v15[0], v16, v14);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendSyncMessageStatusReturn failed: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v15);
  return (unsigned int)v12;
}
